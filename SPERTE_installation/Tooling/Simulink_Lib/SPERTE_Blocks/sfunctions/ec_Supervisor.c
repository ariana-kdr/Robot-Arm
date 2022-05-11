/*
 *  ec_Supervisor
 *
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
 *      Parameter: link id
 */

#define S_FUNCTION_NAME ec_Supervisor
#define S_FUNCTION_LEVEL 2

#include "simstruc.h"

#define NSTATES         0
#define NINPUTS         0
#define NOUTPUTS        1
#define NPARAMS         2

#define ETHPORT         ssGetSFcnParam(S,0)
#define TIMEOUT         ssGetSFcnParam(S,1)

#include <math.h>

// Types
/** Possible EtherCAT slave states */
typedef enum
{
    /** No valid state. */
    EC_STATE_NONE           = 0x00,
    /** Init state*/
    EC_STATE_INIT           = 0x01,
    /** Pre-operational. */
    EC_STATE_PRE_OP         = 0x02,
    /** Boot state*/
    EC_STATE_BOOT           = 0x03,
    /** Safe-operational. */
    EC_STATE_SAFE_OP        = 0x04,
    /** Operational */
    EC_STATE_OPERATIONAL    = 0x08,
    /** Error or ACK error */
    EC_STATE_ACK            = 0x10,
    EC_STATE_ERROR          = 0x10
} ec_state;

typedef struct tag_port_adc
{
    int port_id;            /**< logical adc port_id in stack */
    int link_id;            /**< link_id in stack */
    int chan_id;            /**< chan_id in device */
    double resolution;      /**< in V */
    double range;           /**< in V */
    int enabled;            /**< 0 (disabled) or 1 (enabled) */
    int dev_id;             /**< id of slave */
    char dev_str[10];       /**< name of slave */
    int clipped;            /**< 0 (not clipped) or 1 (clipped) */
} port_adc, *pport_adc;

typedef struct tag_port_dac
{
    int port_id;            /**< logical dac port_id in stack */
    int link_id;            /**< link_id in stack */
    int chan_id;            /**< chan_id in device */
    double resolution;      /**< in V */
    double range;           /**< in V */
    int enabled;            /**< 0 (disabled) or 1 (enabled) */
    int dev_id;             /**< id of slave */
    char dev_str[10];       /**< name of slave */
} port_dac, *pport_dac;

// Ethercat
/** number of slaves found by configuration function */
extern int ec_slavecount;
// Slave counter
int_T slavecounter[99];
// Port
char ETHIF[5] = "";

// Variables
boolean_T FirstRun = 1;
int_T SetupCompleted;
port_adc padc;
port_dac pdac;
int_T ecMonitorTimeOut = 2000;
int_T workCountCalc;
int_T ShouldCheckState = 0;


// Extern
extern int_T ec_initialize(char* netif);
extern int_T ec_stop(void);
extern int_T ec_io(int timeout);
extern int_T ec_online(void);
extern void ec_print_error_msg(int);
extern int_T ec_readstate(void);
extern int_T ec_read_state(int slaveid);
extern void ec_set_state(int slaveid,int statevalue);
extern int ec_writestate(int slaveid);
extern int ec_reconfig_slave(int slaveid, int timeout);
extern int ec_calculate_workcounter(void);

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
    /*ssSetInputPortDirectFeedThrough(S,0,0);*/
    
    if (!ssSetNumOutputPorts(S,NOUTPUTS)) return;
    ssSetOutputPortWidth(S,0,1);
    
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

#define MDL_START  /* Change to #undef to remove function */
#if defined(MDL_START)
/* Function: mdlStart =======================================================
 * Abstract:
 *    This function is called once at start of model execution. If you
 *    have states that should be initialized once, this is the place
 *    to do it.
 */
static void mdlStart(SimStruct *S)
{
    
#ifndef MATLAB_MEX_FILE
    
    // Local variables
    int_T iret,port_id;
    
    printf("Starting the SPERTE model.\n");
    printf(" Copyright (C) 2021 Enzo Evers, see www.enzoevers.nl for contact details.\n");
    printf("\n");
    printf("Control Systems Technology group\n");
    printf("Departement of Mechanical Engineering\n");
    printf("Eindhoven University of Technology\n");
    printf("SPERTE is licensed under the GNU GPLv3\n");
    
    /* First Init the Ethercat Connection */
    
    if (SetupCompleted==0) {
        
        // Setting the timeout value
        ecMonitorTimeOut = (int) (*(mxGetPr(ssGetSFcnParam(S,1))));
        
        // Getting the port
        sprintf(ETHIF,"eth%d",(int)(*(mxGetPr(ssGetSFcnParam(S,0)))));
        
        // Connecting to port
        printf("Connecting on port: %s with ethercat timeout: %d.\n",ETHIF,ecMonitorTimeOut);
        
        // Starting the EC
        if ( (iret=ec_initialize(ETHIF))!=0 ) {
            printf("Could not complete ec_initialize %d.\n", iret);
            ec_print_error_msg(iret);
            
        }
        else
        {
            printf("ec_initialize was succesfull %d.\n", iret);
            // Calculate the expected values for the workcounter
            workCountCalc = ec_calculate_workcounter();
            
            port_id=0;
            ec_get_adc_port_capabilities(port_id, &padc);
            printf("adc%d: %d, %d, %d, %f, %f, %d, 0x%x, %s\n", port_id, padc.port_id, padc.link_id, padc.chan_id, padc.resolution, padc.range, padc.enabled, padc.dev_id, padc.dev_str);
            port_id++;
            ec_get_adc_port_capabilities(port_id, &padc);
            printf("adc%d: %d, %d, %d, %f, %f, %d, 0x%x, %s\n", port_id, padc.port_id, padc.link_id, padc.chan_id, padc.resolution, padc.range, padc.enabled, padc.dev_id, padc.dev_str);
            
            port_id=0;
            ec_get_dac_port_capabilities(port_id, &pdac);
            printf("dac%d: %d, %d, %d, %f, %f, %d, 0x%x, %s\n", port_id, pdac.port_id, pdac.link_id, pdac.chan_id, pdac.resolution, pdac.range, pdac.enabled, pdac.dev_id, pdac.dev_str);
            port_id++;
            ec_get_dac_port_capabilities(port_id, &pdac);
            printf("dac%d: %d, %d, %d, %f, %f, %d, 0x%x, %s\n", port_id, pdac.port_id, pdac.link_id, pdac.chan_id, pdac.resolution, pdac.range, pdac.enabled, pdac.dev_id, pdac.dev_str);
            
            printf("Setup done.\n");
            SetupCompleted = 1;
            
        }
    }
    
    
#endif
    
}
#endif


static void mdlOutputs(SimStruct *S, int_T tid)
{
    real_T *yStatus    =   ssGetOutputPortRealSignal(S,0);
    
#ifndef MATLAB_MEX_FILE
    
    int_T state = 0;
    int_T workCount;
    int_T iret;
    
    if (SetupCompleted == 1)
    {
        
        if (FirstRun)
        {
            // Starting the EC
            if ( (iret=ec_online())!=0 ) {
                printf("Could not complete ec_online %d.\n", iret);
                ec_print_error_msg(iret);
            }
            else
            {
                FirstRun = 0;
                printf("ec_online was succesfull %d.\n", iret);
            }
        }
        
        // Do the IO processing
        if ( (!ShouldCheckState) && (ec_read_state(0) == EC_STATE_OPERATIONAL))
        {
            ec_send_processdata();
            workCount = ec_receive_processdata(ecMonitorTimeOut);
        }
        
        
        if ( (workCount < workCountCalc) || ShouldCheckState )
        {
            printf("The calculated workcount is: %d and it is in fact: %d.\n",workCountCalc,workCount);
            
            // Reset the check
            ShouldCheckState = 0;
            
            // Get the states
            state = ec_readstate();
            
            // Write the status
            yStatus[0] = (real_T)1;
            
            for (int_T slave = 0; slave <= ec_slavecount; slave++)
            {
                int_T curstate = ec_read_state(slave);
                if (curstate != EC_STATE_OPERATIONAL)
                {
                    ShouldCheckState = 1;
                    printf("Slave state for slave: %d is %d.\n",slave,curstate);
                    if (curstate == (EC_STATE_SAFE_OP + EC_STATE_ERROR))
                    {
                        if(slavecounter[slave]<3){
                            printf("ERROR : slave %d is in SAFE_OP + ERROR, attempting ack.\n", slave);
                            ec_set_state(slave,(EC_STATE_SAFE_OP + EC_STATE_ACK));
                            slavecounter[slave]++;
                        }else{
                            printf("ERROR : slave %d is still in SAFE_OP + ERROR, attempting re-init.\n", slave);
                            ec_set_state(slave,EC_STATE_INIT);
                            slavecounter[slave] = 0;
                        }
                        ec_writestate(slave);
                    }
                    else if(curstate == EC_STATE_SAFE_OP)
                    {
                        printf("WARNING : slave %d is in SAFE_OP, change to OPERATIONAL.\n", slave);
                        ec_set_state(slave,EC_STATE_OPERATIONAL);
                        ec_writestate(slave);
                    }
                    else if(curstate > EC_STATE_NONE)
                    {
                        if (ec_reconfig_slave(slave, ecMonitorTimeOut))
                        {
                            printf("MESSAGE : slave %d reconfigured\n",slave);
                        }
                    }
                    
                }
            }
            if(!ShouldCheckState){
                printf("OK : all slaves resumed OPERATIONAL.\n");
                yStatus[0] = (real_T)0;
            }
        }
        else
        {
            // All is okay
            // Write the status
            yStatus[0] = (real_T)0;
        }
        
        
        
    }
#endif
}



static void mdlTerminate(SimStruct *S)
{
#ifndef MATLAB_MEX_FILE
    // Local Variables
    int_T iret;
    /* Stop the EC  IO */
    iret = ec_stop();
    printf("ec_stop Terminated %d.\n", iret);
#endif
}

#ifdef  MATLAB_MEX_FILE    /* Is this file being compiled as a MEX-file? */
#include "simulink.c"      /* MEX-file interface mechanism */
#else
#include "cg_sfun.h"       /* Code generation registration function */
#endif
