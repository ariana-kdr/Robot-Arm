
/* #define REFDEBUG*/
/* #define REFSTATIC*/

/*
	REF3 (Matlab 5.3 version)

	(c) Rene' van de Molengraft, 2000

	last update: May, 31rd, 2000

	Inputs : u[0]	       = wait (0), start (1) or stop (2)
				 Note: enter waiting state before restarting!

	Outputs: y[0]...y[2]   = 3rd degree setpoint profile acc/vel/pos
*/

#define S_FUNCTION_NAME ref3
#define S_FUNCTION_LEVEL 2

#include "simstruc.h"

#define U(element) (*uPtrs[element])  /* Pointer to Input Port0 */

#define REF_PARAM(S) ssGetSFcnParam(S,0)

#define NSTATES		0
#define NINPUTS		1
#define NOUTPUTS	3
#define NPARAMS		1

#ifndef REFSTATIC
#define NRWRK		50
#else
#define NRWRK		0
#endif

#define WAITING		0
#define STARTING	1
#define RUNNING		2
#define STOPPING	3

#ifndef REFSTATIC

/* aliases for global variables in work-space*/

#define REFiref		prwrk[0]
#define REFtgo		prwrk[1]
#define REFtstop	prwrk[2]
#define REFnref		prwrk[3]
#define REFnref2	prwrk[4]
#define REFstatus	prwrk[5]
#define REFmode		prwrk[6]
#define REFqmem		prwrk[7]

/* shortcuts for p2p variables in workspace*/

#define JOG_IDX		8
#define REFt0		prwrk[JOG_IDX]
#define REFt1		prwrk[JOG_IDX+1]
#define REFt2		prwrk[JOG_IDX+2]
#define REFt3		prwrk[JOG_IDX+3]
#define REFt4		prwrk[JOG_IDX+4]
#define REFt5		prwrk[JOG_IDX+5]
#define REFt6		prwrk[JOG_IDX+6]
#define REFt7		prwrk[JOG_IDX+7]
#define REFs0		prwrk[JOG_IDX+8]
#define REFs1		prwrk[JOG_IDX+9]
#define REFs2		prwrk[JOG_IDX+10]
#define REFs3		prwrk[JOG_IDX+11]
#define REFs4		prwrk[JOG_IDX+12]
#define REFs5		prwrk[JOG_IDX+13]
#define REFs6		prwrk[JOG_IDX+14]
#define REFs7		prwrk[JOG_IDX+15]
#define REFv0		prwrk[JOG_IDX+16]
#define REFv1		prwrk[JOG_IDX+17]
#define REFv2		prwrk[JOG_IDX+18]
#define REFv3		prwrk[JOG_IDX+19]
#define REFv4		prwrk[JOG_IDX+20]
#define REFv5		prwrk[JOG_IDX+21]
#define REFv6		prwrk[JOG_IDX+22]
#define REFv7		prwrk[JOG_IDX+23]
#define REFa0		prwrk[JOG_IDX+24]
#define REFa1		prwrk[JOG_IDX+25]
#define REFa2		prwrk[JOG_IDX+26]
#define REFa3		prwrk[JOG_IDX+27]
#define REFa4		prwrk[JOG_IDX+28]
#define REFa5		prwrk[JOG_IDX+29]
#define REFa6		prwrk[JOG_IDX+30]
#define REFa7		prwrk[JOG_IDX+31]
#define REFdelta	prwrk[JOG_IDX+32]
#define REFgamma	prwrk[JOG_IDX+33]
#define REFjerk		prwrk[JOG_IDX+34]
#define REFidir		prwrk[JOG_IDX+35]
#define REFxstrt	prwrk[JOG_IDX+36]
#else
static real_T REFiref, REFtgo, REFtstop, REFnref, REFnref2, REFstatus, REFmode, REFqmem;
static real_T REFt0, REFt1, REFt2, REFt3, REFt4, REFt5, REFt6, REFt7;
static real_T REFs0, REFs1, REFs2, REFs3, REFs4, REFs5, REFs6, REFs7;
static real_T REFv0, REFv1, REFv2, REFv3, REFv4, REFv5, REFv6, REFv7;
static real_T REFa0, REFa1, REFa2, REFa3, REFa4, REFa5, REFa6, REFa7;
static real_T REFdelta, REFgamma, REFjerk, REFidir, REFxstrt;
#endif

#include <math.h>



static int_T p2p_status_b(real_T t, SimStruct *S)
{
	int_T *piwrk=ssGetIWork(S);
	real_T *prwrk=ssGetRWork(S);

	if (t>REFt7) {
	  return 1;
	} else {
	  return 0;
	}
}





static void p2p_ini_b(int_T i, real_T qoff, SimStruct *S)
{
	int_T n1;
	real_T xstart,tstart,xend,vdes,tdes,maxjerk;
	real_T det,disp;

	real_T *refpr=mxGetPr(REF_PARAM(S));

	int_T *piwrk=ssGetIWork(S);
	real_T *prwrk=ssGetRWork(S);

	n1=mxGetM(REF_PARAM(S));

	xstart=refpr[i]+qoff;
	tstart=refpr[n1+i];
	xend=refpr[2*n1+i]+qoff;
	vdes=refpr[3*n1+i];
	tdes=refpr[4*n1+i];
	maxjerk=refpr[5*n1+i];

	disp=xend-xstart;
	if (disp<0.0) {
	  REFidir=-1.0;
	  disp=-disp;
	} else {
	  REFidir=1.0;
	}

	if (vdes>=0.0) {
/*	  REFidir=1.0;*/
	} else {
/*	  REFidir=-1.0;*/
	  vdes=-vdes;
	}

	if (maxjerk>=0.0) {
	  REFjerk=maxjerk;
	} else {
	  REFjerk=-maxjerk;
	}

/*	compute jerk period delta*/

	det=tdes*tdes*REFjerk*REFjerk-4.0*REFjerk*vdes;

	if (det<0) {
	  ssSetErrorStatus(S, "JOG_INI: vdes cannot be reached (increase jerk and/or tdes).");
	} else {
          REFdelta=(tdes*REFjerk-sqrt(det))/(2.0*REFjerk);
   
/*	  compute acceleration period gamma*/

          REFgamma=tdes-2.0*REFdelta;
   
/*	  compute switching times*/
   
	  REFt0=tstart;
	  REFt1=REFt0+REFdelta;
	  REFt2=REFt1+REFgamma;
	  REFt3=REFt2+REFdelta;

/*	  compute t4*/

	  REFt4=REFt3+(disp-2.0*REFjerk*REFdelta*REFdelta*REFdelta
	     -3.0*REFjerk*REFdelta*REFdelta*REFgamma-REFjerk*REFdelta*REFgamma*REFgamma)/vdes;
	  if (REFt4<REFt3) {
	    ssSetErrorStatus(S, "P2P_INI: vdes too high for displacement (decrease vdes).");
	  } else {
	    REFt5=REFt4+REFdelta;
	    REFt6=REFt5+REFgamma;
	    REFt7=REFt6+REFdelta;   
   
/*	    compute reference values at switching times*/
   
	    REFxstrt=xstart;
	    REFs0=0.0;
   
	    REFa1=REFjerk*(REFt1-REFt0);
	    REFv1=0.5*REFjerk*(REFt1-REFt0)*(REFt1-REFt0);
	    REFs1=REFs0+REFjerk*(REFt1-REFt0)*(REFt1-REFt0)*(REFt1-REFt0)/6.0;
   
  	    REFa2=REFa1;
	    REFv2=REFv1+REFa1*(REFt2-REFt1);
	    REFs2=REFs1+REFv1*(REFt2-REFt1)+0.5*REFa1*(REFt2-REFt1)*(REFt2-REFt1);
   
            REFa3=REFa2-REFjerk*(REFt3-REFt2);
	    REFv3=REFv2+REFa2*(REFt3-REFt2)-0.5*REFjerk*(REFt3-REFt2)*(REFt3-REFt2);
	    REFs3=REFs2+REFv2*(REFt3-REFt2)+0.5*REFa2*(REFt3-REFt2)*(REFt3-REFt2)
	          -REFjerk*(REFt3-REFt2)*(REFt3-REFt2)*(REFt3-REFt2)/6.0;

	    REFa4=0.0;
	    REFv4=REFv3;
	    REFs4=REFs3+REFv3*(REFt4-REFt3);

	    REFa5=-REFjerk*(REFt5-REFt4);
	    REFv5=REFv4-0.5*REFjerk*(REFt5-REFt4)*(REFt5-REFt4);
	    REFs5=REFs4+REFv4*(REFt5-REFt4)-REFjerk*(REFt5-REFt4)*(REFt5-REFt4)*(REFt5-REFt4)/6.0;
   
	    REFa6=REFa5;
	    REFv6=REFv5+REFa5*(REFt6-REFt5);
	    REFs6=REFs5+REFv5*(REFt6-REFt5)+0.5*REFa5*(REFt6-REFt5)*(REFt6-REFt5);
   
	    REFa7=REFa6+REFjerk*(REFt7-REFt6);
	    REFv7=REFv6+REFa6*(REFt7-REFt6)+0.5*REFjerk*(REFt7-REFt6)*(REFt7-REFt6);
	    REFs7=REFs6+REFv6*(REFt7-REFt6)+0.5*REFa6*(REFt7-REFt6)*(REFt7-REFt6)
	          +REFjerk*(REFt7-REFt6)*(REFt7-REFt6)*(REFt7-REFt6)/6.0;
	  }
	}
}





static void p2p_get_b(real_T *qref, real_T *vref, real_T *aref, real_T t, SimStruct *S)
{
	int_T *piwrk=ssGetIWork(S);
	real_T *prwrk=ssGetRWork(S);

        if (t<=REFt0) {
	  aref[0]=0;
	  vref[0]=0;
	  qref[0]=REFs0;
        } else if (t<=REFt1) {
	  aref[0]=REFjerk*(t-REFt0);
	  vref[0]=0.5*REFjerk*(t-REFt0)*(t-REFt0);
          qref[0]=REFs0+REFjerk*(t-REFt0)*(t-REFt0)*(t-REFt0)/6.0;
        } else if (t<=REFt2) {
	  aref[0]=REFa1;
	  vref[0]=REFv1+REFa1*(t-REFt1);
	  qref[0]=REFs1+REFv1*(t-REFt1)+0.5*REFa1*(t-REFt1)*(t-REFt1);
        } else if (t<=REFt3) {
	  aref[0]=REFa2-REFjerk*(t-REFt2);
	  vref[0]=REFv2+REFa2*(t-REFt2)-0.5*REFjerk*(t-REFt2)*(t-REFt2);
          qref[0]=REFs2+REFv2*(t-REFt2)+0.5*REFa2*(t-REFt2)*(t-REFt2)
                  -REFjerk*(t-REFt2)*(t-REFt2)*(t-REFt2)/6.0;
        } else if (t<=REFt4) {
	  aref[0]=0;
	  vref[0]=REFv3;
	  qref[0]=REFs3+REFv3*(t-REFt3);
        } else if (t<=REFt5) {
	  aref[0]=-REFjerk*(t-REFt4);
	  vref[0]=REFv4-0.5*REFjerk*(t-REFt4)*(t-REFt4);
	  qref[0]=REFs4+REFv4*(t-REFt4)-REFjerk*(t-REFt4)*(t-REFt4)*(t-REFt4)/6.0;
        } else if (t<=REFt6) {
	  aref[0]=REFa5;
	  vref[0]=REFv5+REFa5*(t-REFt5);
	  qref[0]=REFs5+REFv5*(t-REFt5)+0.5*REFa5*(t-REFt5)*(t-REFt5);
        } else if (t<=REFt7) {
	  aref[0]=REFa6+REFjerk*(t-REFt6);
	  vref[0]=REFv6+REFa6*(t-REFt6)+0.5*REFjerk*(t-REFt6)*(t-REFt6);
	  qref[0]=REFs6+REFv6*(t-REFt6)+0.5*REFa6*(t-REFt6)*(t-REFt6)
		  +REFjerk*(t-REFt6)*(t-REFt6)*(t-REFt6)/6.0;
	} else {
	  aref[0]=0.0;
	  vref[0]=0.0;
	  qref[0]=REFs7;
	}

        if (REFidir==-1.0) {
	  aref[0]=-aref[0];
	  vref[0]=-vref[0];
	  qref[0]=-qref[0];
	}
	qref[0]=qref[0]+REFxstrt;
}






/*====================*
 * S-function methods *
 *====================*/
 
#define MDL_CHECK_PARAMETERS
#if defined(MDL_CHECK_PARAMETERS) && defined(MATLAB_MEX_FILE)
static void mdlCheckParameters(SimStruct *S)
{
/*	check parameter*/

        if (mxGetN(REF_PARAM(S))!=6) {
	  ssSetErrorStatus(S,"parameter to S-function should have six columns (xstart, tstart, xend, vdes, tdes, jerk)");
	  return;
	}
}
#endif /* MDL_CHECK_PARAMETERS */





static void mdlInitializeSizes(SimStruct *S)
{
	ssSetNumSFcnParams(S,NPARAMS);  /* Number of expected parameters */
#if defined(MATLAB_MEX_FILE)
	if (ssGetNumSFcnParams(S)==ssGetSFcnParamsCount(S)) {
	  mdlCheckParameters(S);
	  if (ssGetErrorStatus(S)!=NULL) {
	    return;
	  }
	} else {
	  return; /* Parameter mismatch will be reported by Simulink */
	}
#endif

	ssSetNumContStates(S,NSTATES);
	ssSetNumDiscStates(S,0);

	if (!ssSetNumInputPorts(S,1)) return;
	ssSetInputPortWidth(S,0,NINPUTS);
	ssSetInputPortDirectFeedThrough(S,0,NINPUTS);

	if (!ssSetNumOutputPorts(S,1)) return;
	ssSetOutputPortWidth(S,0,NOUTPUTS);

	ssSetNumSampleTimes(S,1);
	ssSetNumRWork(S,NRWRK);
	ssSetNumIWork(S,0);
	ssSetNumPWork(S,0);
	ssSetNumModes(S,0);
	ssSetNumNonsampledZCs(S,0);
}





static void mdlInitializeSampleTimes(SimStruct *S)
{
	ssSetSampleTime(S,0,CONTINUOUS_SAMPLE_TIME);
	ssSetOffsetTime(S,0,0.0);
}





#define MDL_INITIALIZE_CONDITIONS
static void mdlInitializeConditions(SimStruct *S)
{
	real_T *refpr=mxGetPr(REF_PARAM(S));

	int_T *piwrk=ssGetIWork(S);
	real_T *prwrk=ssGetRWork(S);

	int_T n1;
	real_T repeat_flag;

	REFstatus=(real_T) WAITING;

	REFtgo=0.0;
	REFtstop=0.0;

	REFnref=(real_T) mxGetM(REF_PARAM(S));
	n1=(int_T) REFnref;

/*	initialize setpoint*/

        p2p_ini_b(0,0.0,S);

/*	check repeat flag for looping reference*/

	repeat_flag=(real_T) refpr[2*n1-1];
	if (repeat_flag<0) {
	  REFnref2=(real_T) n1-1;
	} else {
	  REFnref2=(real_T) n1;
	}

/*	check mode*/

	REFqmem=0.0;
	if ((refpr[2*n1]>=1e10) | (refpr[2*n1]<=-1e10)) {
	  REFmode=1.0;
	  REFnref=1.0;
	  REFnref2=REFnref;
	} else {
	  REFmode=0.0;
	}
}





static void mdlOutputs(SimStruct *S, int_T tid)
{
	real_T *y=ssGetOutputPortRealSignal(S,0);
	real_T *refpr=mxGetPr(REF_PARAM(S));
	InputRealPtrsType uPtrs=ssGetInputPortRealSignalPtrs(S,0);

	int_T *piwrk=ssGetIWork(S);
	real_T *prwrk=ssGetRWork(S);
 
	int_T istat,i,n1,n2;
	real_T qref,vref,aref;
	real_T time,reltim;
	real_T var1,var2;

	n1=(int_T) REFnref;
	n2=(int_T) REFnref2;

/*	current time*/

	time=ssGetT(S);

	istat=(int_T) REFstatus;

	if (U(0)==0) {
	  REFstatus=(real_T) WAITING;

	} else if ((U(0)==1) & (istat==WAITING)) {
	  REFtgo=time;
	  REFiref=0.0;
	  REFstatus=(real_T) STARTING;
	  istat=(int_T) REFstatus;

#ifdef REFDEBUG
	  printf("START: time=%f\n",time);
#endif

	} else if ((U(0)==2) & (istat==RUNNING)) {
	  REFstatus=(real_T) STOPPING;
	  istat=(int_T) REFstatus;

#ifdef REFDEBUG
	  printf("STOP: time=%f\n",time);
#endif

	}

	reltim=time-REFtgo;

	switch (istat)
	{
	case WAITING:

	  p2p_get_b(&qref,&vref,&aref,REFtstop-REFtgo,S);

#ifdef REFDEBUG
	  printf("WAITING: time=%f   qref=%f\n",time,qref);
#endif

	  break;

	case STARTING:

	  REFstatus=(real_T) RUNNING;
	  p2p_ini_b(0,REFqmem,S);
	  p2p_get_b(&qref,&vref,&aref,reltim,S);

#ifdef REFDEBUG
	  printf("STARTING: time=%f   qref=%f\n",time,qref);
#endif

	  break;

	case RUNNING:

	  i=(int_T) REFiref;

	  if (n1==n2) {
	    if (n1>1) {
	      if ((reltim>=refpr[n1+i+1]) & (i<(n1-1))) {
	        REFiref=REFiref+1.0;
	        i=(int_T) REFiref;
	        p2p_ini_b(i,REFqmem,S);
	      }

	      if ((p2p_status_b(reltim,S)==1) & (i==n1-1)) {
		REFstatus=STOPPING;
	      }
	    }
	  } else {
	    if (n2>1) {
	      if ((reltim>=refpr[n1+i+1]) & (i<(n2-1))) {
	        REFiref=REFiref+1.0;
	        i=(int_T) REFiref;
	        p2p_ini_b(i,REFqmem,S);
	      }
	    }

	    if ((p2p_status_b(reltim,S)==1) & (i==(n2-1))) {
	      REFiref=0.0;
	      i=(int_T) REFiref;
	      REFtgo=time;
	      reltim=time-REFtgo;
	      p2p_ini_b(i,REFqmem,S);
	    }
	  }

	  p2p_get_b(&qref,&vref,&aref,reltim,S);

#ifdef REFDEBUG
	  printf("RUNNING: time=%f   qref=%f\n",time,qref);
#endif

	  break;

	case STOPPING:

/*	  REFstatus=(real_T) WAITING;*/
	  REFtstop=time;
	  p2p_get_b(&qref,&vref,&aref,reltim,S);
/*	  if (REFmode==1.0) REFqmem=qref;*/
	  REFqmem=qref;

#ifdef REFDEBUG
	  printf("STOPPING: time=%f   qref=%f\n",time,qref);
#endif

	  break;
	}

	y[2]=qref;
	y[1]=vref;
	y[0]=aref;
}

 
 
 

static void mdlTerminate(SimStruct *S)
{
}

#ifdef  MATLAB_MEX_FILE    /* Is this file being compiled as a MEX-file? */
#include "simulink.c"      /* MEX-file interface mechanism */
#else
#include "cg_sfun.h"       /* Code generation registration function */
#endif
