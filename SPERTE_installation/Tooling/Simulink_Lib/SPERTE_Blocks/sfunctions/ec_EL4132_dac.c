/*
 * ec_EL4132_dac
 *
 * Copyright
 * (c) Rene' van de Molengraft, 2007
 * (c) Enzo Evers 2021, see www.enzoevers.nl for contact information.
 *
 * Inputs: u[0] - u[1]  = dac channels 0, 1
 *
 * Parameter: link id
 */

#define S_FUNCTION_NAME ec_EL4132_dac
#define S_FUNCTION_LEVEL 2

#include "simstruc.h"

#define NSTATES         0
#define NINPUTS         2
#define NOUTPUTS        0
#define NPARAMS         1

#define LINK_ID         ssGetSFcnParam(S,0)

#define U(element) (*uPtrs[element])  /* Pointer to Input Port0 */

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
    
    if (!ssSetNumInputPorts(S,1)) return;
    ssSetInputPortWidth(S,0,NINPUTS);
    ssSetInputPortDirectFeedThrough(S,0,0);
    
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
    ssSetSampleTime(S, 0, INHERITED_SAMPLE_TIME);
    ssSetModelReferenceSampleTimeDefaultInheritance(S);
    ssSetOffsetTime(S, 0, 0.0);
}





static void mdlOutputs(SimStruct *S, int_T tid)
{
    InputRealPtrsType uPtrs=ssGetInputPortRealSignalPtrs(S,0);
    
#ifndef MATLAB_MEX_FILE
    int_T ichan, ilink;
    
    ilink=(int_T) (*(mxGetPr(LINK_ID)));
    
    if (SetupCompleted)
    {
        
        for (ichan=0; ichan<NINPUTS; ichan++) {
            ec_EL4132_dac_write_chan(U(ichan), ichan, ilink);
        }
        
    }
#endif
}





static void mdlTerminate(SimStruct *S)
{
#ifndef MATLAB_MEX_FILE
    int_T ichan, ilink;
    
    ilink=(int_T) (*(mxGetPr(LINK_ID)));
    
    for (ichan=0; ichan<NINPUTS; ichan++) {
        ec_EL4132_dac_write_chan(0.0, ichan, ilink);
    }
#endif
}

#ifdef  MATLAB_MEX_FILE    /* Is this file being compiled as a MEX-file? */
#include "simulink.c"      /* MEX-file interface mechanism */
#else
#include "cg_sfun.h"       /* Code generation registration function */
#endif
