/*
 *  ec_Ebox (adapted from ec_EL3102_adc.c (c) Rene' van de Molengraft, 2007)
 *
 *  (c)  2010, Michael Ronde, Eindhoven University of Technology
 *  (c)  2021, Enzo Evers, see www.enzoevers.nl for contact
 *
 * Copyright (C) 2021 Enzo Evers
 * see www.enzoevers.nl for contact details
 *
 * Control Systems Technology group
 * Departement of Mechanical Engineering
 * Eindhoven University of Technology
 * 
 * SPERTE is licensed under the GNU GPLv3
 *
 *      Inputs:  u0[0] - u0[1]  =   dac channels 0, 1
 *               u1[0] - u1[1]  =   pwm channels 0, 1
 *               u2[0] - u2[7]  =   do chanels 0-7
 *      Outputs: y1[0] - y1[1]  =   adc channels 0, 1
 *               y2[0] - y2[1]  =   encoder channels 0,1
 *               y3[0] - y3[7]  =   di chanels 0-7
 *
 *      Parameter: link id
 */

#define S_FUNCTION_NAME ec_Ebox
#define S_FUNCTION_LEVEL 2

#include "simstruc.h"

#define NSTATES         0
#define NINPUTS         3
#define NOUTPUTS        3
#define NADC            2
#define NDAC            2
#define NDI             8
#define NDO             8
#define NENC            2
#define NPWM            2
#define NPARAMS         1

#define LINK_ID         ssGetSFcnParam(S,0)

#define U0(element) (*u0Ptrs[element])  /* Pointer to Input Port0 */
#define U1(element) (*u1Ptrs[element])  /* Pointer to Input Port1 */
#define U2(element) (*u2Ptrs[element])  /* Pointer to Input Port2 */

#include <math.h>

// Extern
extern int_T SetupCompleted;
extern int_T FirstRun;

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
    
    if (!ssSetNumInputPorts(S,NINPUTS)) return;
    ssSetInputPortWidth(S,0,NDAC);
    ssSetInputPortWidth(S,1,NPWM);
    ssSetInputPortWidth(S,2,NDO);
    /*ssSetInputPortDirectFeedThrough(S,0,0);*/
    
    if (!ssSetNumOutputPorts(S,NOUTPUTS)) return;
    ssSetOutputPortWidth(S,0,NADC);
    ssSetOutputPortWidth(S,1,NENC);
    ssSetOutputPortWidth(S,2,NDI);
    
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
    real_T *yadc    =   ssGetOutputPortRealSignal(S,0);
    real_T *yenc    =   ssGetOutputPortRealSignal(S,1);
    real_T *ydi     =   ssGetOutputPortRealSignal(S,2);
    
    InputRealPtrsType u0Ptrs = ssGetInputPortRealSignalPtrs(S,0);
    InputRealPtrsType u1Ptrs = ssGetInputPortRealSignalPtrs(S,1);
    InputRealPtrsType u2Ptrs = ssGetInputPortRealSignalPtrs(S,2);
    
#ifndef MATLAB_MEX_FILE
    int_T ichan, ilink, iret;
    
    ilink=(int_T) (*(mxGetPr(LINK_ID)));
    
    if (SetupCompleted)
    {  
        /* INPUTS*/
        for (ichan=0; ichan<NDAC; ichan++){
            iret = ec_Ebox_dac_write_chan(U0(ichan), ichan, ilink);
            if (iret != 0){
                printf("E-box error \n");
                ec_print_error_msg(iret);
                exit(EXIT_FAILURE);
            }
        }
        for (ichan=0; ichan<NPWM; ichan++){
            ec_Ebox_pwm_write_chan(U1(ichan), ichan, ilink);
        }
        
        for (ichan=0; ichan<NDO; ichan++){
            ec_Ebox_do_write_chan(U2(ichan), ichan, ilink);
        }
        
        /* OUTPUTS */
        for (ichan=0; ichan<NADC; ichan++) {
            /* read adc channels */
            ec_Ebox_adc_read_chan(&yadc[ichan], ichan, ilink);
        }
        for (ichan=0; ichan<NENC; ichan++) {
            /* read encoder channels */
            ec_Ebox_enc_read_chan(&yenc[ichan], ichan, ilink);
        }
        
        for (ichan=0; ichan<NDI; ichan++) {
            /* read digital input channels */
            ec_Ebox_di_read_chan(&ydi[ichan], ichan, ilink);
        }
        
    }
    
#endif
}



static void mdlTerminate(SimStruct *S)
{
#ifndef MATLAB_MEX_FILE
    int_T ichan, ilink;
    
    ilink=(int_T) (*(mxGetPr(LINK_ID)));
    
    for (ichan=0; ichan<NDAC; ichan++){
        ec_Ebox_dac_write_chan(0.0 , ichan, ilink);
    }
    for (ichan=0; ichan<NDO; ichan++){
        ec_Ebox_do_write_chan(0.0 , ichan, ilink);
    }
#endif
}

#ifdef  MATLAB_MEX_FILE    /* Is this file being compiled as a MEX-file? */
#include "simulink.c"      /* MEX-file interface mechanism */
#else
#include "cg_sfun.h"       /* Code generation registration function */
#endif
