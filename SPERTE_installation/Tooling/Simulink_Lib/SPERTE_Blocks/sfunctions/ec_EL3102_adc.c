/*
        ec_EL3102_adc

        (c) Rene' van de Molengraft, 2007

        Outputs: y[0] - y[1]  = adc channels 0, 1

        Parameter: link id
*/

#define S_FUNCTION_NAME ec_EL3102_adc
#define S_FUNCTION_LEVEL 2

#include "simstruc.h"

#define NSTATES         0
#define NINPUTS         0
#define NOUTPUTS        2
#define NPARAMS         1

#define LINK_ID         ssGetSFcnParam(S,0)

#include <math.h>

// Extern
extern int_T SetupCompleted;

/*====================*
 * S-function methods *
 *====================*/

static void mdlInitializeSizes(SimStruct *S)
{
	ssSetNumSFcnParams(S,NPARAMS);

	ssSetNumContStates(S,NSTATES);
	ssSetNumDiscStates(S,0);

	if (!ssSetNumInputPorts(S,0)) return;
/*	ssSetInputPortWidth(S,0,NINPUTS);
	ssSetInputPortDirectFeedThrough(S,0,0); */

	if (!ssSetNumOutputPorts(S,1)) return;
	ssSetOutputPortWidth(S,0,NOUTPUTS);

	ssSetNumSampleTimes(S,1);
	ssSetNumRWork(S,0);
	ssSetNumIWork(S,0);
	ssSetNumPWork(S,0);
	ssSetNumModes(S,0);
	ssSetNumNonsampledZCs(S,0);
}





static void mdlInitializeSampleTimes(SimStruct *S)
{
    ssSetSampleTime(S, 0, INHERITED_SAMPLE_TIME);
    ssSetModelReferenceSampleTimeDefaultInheritance(S);
    ssSetOffsetTime(S, 0, 0.0);
}





static void mdlOutputs(SimStruct *S, int_T tid)
{
        real_T *y=ssGetOutputPortRealSignal(S,0);

#ifndef MATLAB_MEX_FILE
        int_T ichan, ilink;

        ilink=(int_T) (*(mxGetPr(LINK_ID)));
        
            if (SetupCompleted)
    {

        for (ichan=0; ichan<NOUTPUTS; ichan++) {
/*          read adc channels */
            ec_EL3102_adc_read_chan(&y[ichan], ichan, ilink);
        }
            }
#endif
}





static void mdlTerminate(SimStruct *S)
{
}

#ifdef  MATLAB_MEX_FILE    /* Is this file being compiled as a MEX-file? */
#include "simulink.c"      /* MEX-file interface mechanism */
#else
#include "cg_sfun.h"       /* Code generation registration function */
#endif
