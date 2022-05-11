/*
*  ec_Ebox (adapted from ec_EL3102_adc.c (c) Rene' van de Molengraft, 2007)
*
*  (c)  2010, Michael Ronde, Eindhoven University of Technology
*      
*      Inputs:  u0[0] - u0[1]  =   dac channels 0, 1
*               u1[0] - u1[7]  =   do chanels 0-7
*      Outputs: y1[0] - y1[1]  =   adc channels 0, 1
*               y2[0] - y2[1]  =   encoder channels 0,1    
*               y3[0] - y3[7]  =   di chanels 0-7    
*
*      Parameter: link id
*/

#define S_FUNCTION_NAME ec_EboxResetEnc
#define S_FUNCTION_LEVEL 2

#include "simstruc.h"

#define NSTATES         0
#define NPARAMS         2

#define LINK_ID         ssGetSFcnParam(S,0)
#define CHAN_ID         ssGetSFcnParam(S,1)

#define U0(element) (*u0Ptrs[element])  /* Pointer to Input Port0 */

#include <math.h>

/*====================*
* S-function methods *
*====================*/

static void mdlInitializeSizes(SimStruct *S)
{
ssSetNumSFcnParams(S,NPARAMS);  /* Number of expected parameters */
   if (ssGetNumSFcnParams(S) != ssGetSFcnParamsCount(S)) {
       return; /* Parameter mismatch will be reported by Simulink */
   }

ssSetNumContStates(S,NSTATES);
ssSetNumDiscStates(S,0);

if (!ssSetNumInputPorts(S,1)) return;
ssSetInputPortWidth(S,0,1);

if (!ssSetNumOutputPorts(S,0)) return;

ssSetNumSampleTimes(S,1);
ssSetNumRWork(S,0);
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





static void mdlOutputs(SimStruct *S, int_T tid)
{
       
       
       InputRealPtrsType u0Ptrs = ssGetInputPortRealSignalPtrs(S,0);
       

#ifndef MATLAB_MEX_FILE
       int_T ilink, iret, ichan;

       ilink=(int_T) (*(mxGetPr(LINK_ID)));
       ichan=(int_T) (*(mxGetPr(CHAN_ID)));
       
       /* INPUTS*/
if U0(0){
           iret = ec_Ebox_enc_reset_chan(ichan, ilink);
           if (iret != 0){
               printf("E-box error \n");
               ec_print_error_msg(iret);
               exit(EXIT_FAILURE);
           }
}


#endif
}


static void mdlTerminate(SimStruct *S)
{
#ifndef MATLAB_MEX_FILE

#endif
}

#ifdef  MATLAB_MEX_FILE    /* Is this file being compiled as a MEX-file? */
#include "simulink.c"      /* MEX-file interface mechanism */
#else
#include "cg_sfun.h"       /* Code generation registration function */
#endif