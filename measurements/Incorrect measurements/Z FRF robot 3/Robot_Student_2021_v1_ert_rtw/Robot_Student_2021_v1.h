/*
 * Robot_Student_2021_v1.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Robot_Student_2021_v1".
 *
 * Model version              : 2.7
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Tue May 17 16:24:00 2022
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Robot_Student_2021_v1_h_
#define RTW_HEADER_Robot_Student_2021_v1_h_
#include <stddef.h>
#include <string.h>
#include <math.h>
#include <float.h>
#ifndef Robot_Student_2021_v1_COMMON_INCLUDES_
#define Robot_Student_2021_v1_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "dt_info.h"
#include "ext_work.h"
#include "MW_SCI.h"
#endif                              /* Robot_Student_2021_v1_COMMON_INCLUDES_ */

#include "Robot_Student_2021_v1_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#include "rtGetNaN.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
#define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
#define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWExtModeInfo
#define rtmGetRTWExtModeInfo(rtm)      ((rtm)->extModeInfo)
#endif

#ifndef rtmGetSampleHitArray
#define rtmGetSampleHitArray(rtm)      ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmGetStepSize
#define rtmGetStepSize(rtm)            ((rtm)->Timing.stepSize)
#endif

#ifndef rtmGetZCCacheNeedsReset
#define rtmGetZCCacheNeedsReset(rtm)   ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
#define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
#define rtmGet_TimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

#ifndef rtmGetTStart
#define rtmGetTStart(rtm)              ((rtm)->Timing.tStart)
#endif

#ifndef rtmGetTimeOfLastOutput
#define rtmGetTimeOfLastOutput(rtm)    ((rtm)->Timing.timeOfLastOutput)
#endif

/* Block states (default storage) for system '<S26>/Serial Write1' */
typedef struct {
  codertarget_raspi_internal_SC_T obj; /* '<S26>/Serial Write1' */
  boolean_T objisempty;                /* '<S26>/Serial Write1' */
} DW_SerialWrite1_Robot_Student_T;

/* Block signals for system '<S19>/Angle2Z' */
typedef struct {
  real_T y;                            /* '<S19>/Angle2Z' */
} B_Angle2Z_Robot_Student_2021__T;

/* Block signals (default storage) */
typedef struct {
  char_T rtb_StringConcatenate_m[256];
  char_T HomingRunningSwitch_c[256];   /* '<S18>/Homing Running Switch' */
  real_T ec_Ebox_o3[8];                /* '<S12>/ec_Ebox' */
  uint8_T MatrixConcatenate1[32];      /* '<S26>/Matrix Concatenate1' */
  uint8_T MatrixConcatenate[32];       /* '<S27>/Matrix Concatenate' */
  char_T cv[31];
  char_T ManualSwitch1[256];           /* '<S1>/Manual Switch1' */
  real_T SFunction;                    /* '<S15>/S-Function' */
  real_T ec_Ebox_o1[2];                /* '<S12>/ec_Ebox' */
  real_T ec_Ebox_o2[2];                /* '<S12>/ec_Ebox' */
  real_T ec_Ebox_o1_o[2];              /* '<S13>/ec_Ebox' */
  real_T ec_Ebox_o2_o[2];              /* '<S13>/ec_Ebox' */
  real_T ec_Ebox_o3_l[8];              /* '<S13>/ec_Ebox' */
  real_T ec_Ebox_o1_d[2];              /* '<S14>/ec_Ebox' */
  real_T ec_Ebox_o2_j[2];              /* '<S14>/ec_Ebox' */
  real_T ec_Ebox_o3_k[8];              /* '<S14>/ec_Ebox' */
  real_T HomingRunningSwitch[3];       /* '<S10>/Homing Running Switch' */
  real_T Gain3;                        /* '<S10>/Gain3' */
  real_T Gain6;                        /* '<S10>/Gain6' */
  real_T Constant1;                    /* '<S32>/Constant1' */
  real_T Sum;                          /* '<S19>/Sum' */
  real_T set_robot_calibration_r;      /* '<S11>/set_robot_calibration_r' */
  real_T Constant1_c;                  /* '<S39>/Constant1' */
  real_T Sum_a;                        /* '<S20>/Sum' */
  real_T set_robot_calibration_x;      /* '<S11>/set_robot_calibration_x' */
  real_T Constant1_k;                  /* '<S49>/Constant1' */
  real_T Sum_g;                        /* '<S21>/Sum' */
  real_T set_robot_calibration_z;      /* '<S11>/set_robot_calibration_z' */
  real_T Add1;                         /* '<S17>/Add1' */
  real_T Assignment[8];                /* '<S10>/Assignment' */
  real_T Gain[2];                      /* '<S12>/Gain' */
  real_T Derivative;                   /* '<S29>/Derivative' */
  real_T Gain_c;                       /* '<S28>/Gain' */
  real_T Dctintegrator;                /* '<S28>/Dctintegrator' */
  real_T Dctleadlag;                   /* '<S28>/Dctleadlag' */
  real_T Dct1lowpass;                  /* '<S28>/Dct1lowpass' */
  real_T Gain_f;                       /* '<S30>/Gain' */
  real_T Dctleadlag_j;                 /* '<S30>/Dctleadlag' */
  real_T Dct1lowpass_n;                /* '<S30>/Dct1lowpass' */
  real_T Derivative_i;                 /* '<S38>/Derivative' */
  real_T Gain1;                        /* '<S36>/Gain1' */
  real_T Dctintegrator_i;              /* '<S36>/Dctintegrator' */
  real_T Dctleadlag_n;                 /* '<S36>/Dctleadlag' */
  real_T Dct1lowpass_f;                /* '<S36>/Dct1lowpass' */
  real_T Gain1_p;                      /* '<S37>/Gain1' */
  real_T Dctleadlag_e;                 /* '<S37>/Dctleadlag' */
  real_T Dct1lowpass_o;                /* '<S37>/Dct1lowpass' */
  real_T Saturation[2];                /* '<S12>/Saturation' */
  real_T Gain_h[2];                    /* '<S13>/Gain' */
  real_T Derivative_n;                 /* '<S54>/Derivative' */
  real_T Gain_e;                       /* '<S46>/Gain' */
  real_T Dctintegrator_g;              /* '<S46>/Dctintegrator' */
  real_T Dctleadlag_eg;                /* '<S46>/Dctleadlag' */
  real_T Dct1lowpass_ft;               /* '<S46>/Dct1lowpass' */
  real_T Gain_i;                       /* '<S47>/Gain' */
  real_T Dctleadlag_i;                 /* '<S47>/Dctleadlag' */
  real_T Dct1lowpass_a;                /* '<S47>/Dct1lowpass' */
  real_T DiscreteTimeIntegrator;       /* '<S22>/Discrete-Time Integrator' */
  real_T Gain1_n;                      /* '<S57>/Gain1' */
  real_T Dctintegrator3;               /* '<S57>/Dctintegrator3' */
  real_T Dct1lowpass_p;                /* '<S57>/Dct1lowpass' */
  real_T Dctleadlag_f;                 /* '<S57>/Dctleadlag' */
  real_T Sum1;                         /* '<S10>/Sum1' */
  real_T Saturation_n[2];              /* '<S13>/Saturation' */
  real_T Gain_ii[2];                   /* '<S14>/Gain' */
  real_T Saturation_a[2];              /* '<S14>/Saturation' */
  real_T jogSpeed;                     /* '<S22>/Supervisor' */
  real_T homeControllerEnabled;        /* '<S22>/Supervisor' */
  real_T resetEnc;                     /* '<S22>/Supervisor' */
  real_T homingBusy;                   /* '<S22>/Supervisor' */
  real_T Ready;                        /* '<S22>/Supervisor' */
  real_T StopSim;                      /* '<S22>/Supervisor' */
  real_T jogSpeed_a;                   /* '<S21>/Supervisor' */
  real_T toPoint;                      /* '<S21>/Supervisor' */
  real_T homeControllerEnabled_h;      /* '<S21>/Supervisor' */
  real_T resetEnc_a;                   /* '<S21>/Supervisor' */
  real_T homingBusy_b;                 /* '<S21>/Supervisor' */
  real_T airBagEnabled;                /* '<S21>/Supervisor' */
  real_T airBagRef;                    /* '<S21>/Supervisor' */
  real_T controlEnabled;               /* '<S21>/Supervisor' */
  real_T Ready_p;                      /* '<S21>/Supervisor' */
  real_T StopSim_o;                    /* '<S21>/Supervisor' */
  real_T jogSpeed_o;                   /* '<S20>/Supervisor' */
  real_T toPoint_h;                    /* '<S20>/Supervisor' */
  real_T homeControllerEnabled_f;      /* '<S20>/Supervisor' */
  real_T resetEnc_n;                   /* '<S20>/Supervisor' */
  real_T homingBusy_d;                 /* '<S20>/Supervisor' */
  real_T airBagEnabled_a;              /* '<S20>/Supervisor' */
  real_T airBagRef_p;                  /* '<S20>/Supervisor' */
  real_T controlEnabled_b;             /* '<S20>/Supervisor' */
  real_T Ready_l;                      /* '<S20>/Supervisor' */
  real_T StopSim_p;                    /* '<S20>/Supervisor' */
  real_T jogSpeed_p;                   /* '<S19>/Supervisor' */
  real_T toPoint_i;                    /* '<S19>/Supervisor' */
  real_T homeControllerEnabled_i;      /* '<S19>/Supervisor' */
  real_T resetEnc_l;                   /* '<S19>/Supervisor' */
  real_T homingBusy_n;                 /* '<S19>/Supervisor' */
  real_T airBagEnabled_ab;             /* '<S19>/Supervisor' */
  real_T airBagRef_pn;                 /* '<S19>/Supervisor' */
  real_T controlEnabled_e;             /* '<S19>/Supervisor' */
  real_T Ready_n;                      /* '<S19>/Supervisor' */
  real_T StopSim_n;                    /* '<S19>/Supervisor' */
  real_T SignalConversion;             /* '<S3>/Signal Conversion' */
  real_T SignalConversion1;            /* '<S3>/Signal Conversion1' */
  real_T SignalConversion2;            /* '<S1>/Signal Conversion2' */
  real_T Sum6;                         /* '<S1>/Sum6' */
  real_T SignalConversion1_a;          /* '<S1>/Signal Conversion1' */
  real_T Sum5;                         /* '<S1>/Sum5' */
  real_T SignalConversion_k;           /* '<S1>/Signal Conversion' */
  real_T Doubleclickswitch;            /* '<S1>/Manual Switch2' */
  real_T Sum4;                         /* '<S1>/Sum4' */
  real_T Conveyorreferencemm;          /* '<S1>/Discrete  integrator' */
  real_T Gain1_g;                      /* '<S4>/Gain1' */
  real_T Dctintegrator3_n;             /* '<S4>/Dctintegrator3' */
  real_T Dct1lowpass_ab;               /* '<S4>/Dct1lowpass' */
  real_T Dctleadlag_d;                 /* '<S4>/Dctleadlag' */
  real_T Gain1_o;                      /* '<S6>/Gain1' */
  real_T Doubleclickswitch_c;          /* '<S1>/Manual Switch' */
  real_T Color;                        /* '<S1>/Color' */
  real_T Plot;                         /* '<S1>/Plot' */
  real_T Stop;                         /* '<S1>/Stop' */
  real_T lastTime;
  real_T Sum3_fz;                      /* '<S10>/Sum3' */
  real_T Sum4_k;                       /* '<S10>/Sum4' */
  real_T HomingRunningSwitch1_l;       /* '<S10>/Homing Running Switch1' */
  real_T Derivative1;                  /* '<S29>/Derivative1' */
  real_T u;
  real_T LimitAcceleration_b;          /* '<S49>/Limit Acceleration' */
  real_T TSamp;                        /* '<S35>/TSamp' */
  real_T TSamp_m;                      /* '<S45>/TSamp' */
  real_T TSamp_j;                      /* '<S56>/TSamp' */
  real_T LimitAcceleration;            /* '<S32>/Limit Acceleration' */
  real_T LimitAcceleration_c;          /* '<S39>/Limit Acceleration' */
  real_T Add;                          /* '<S11>/Add' */
  real_T Add1_c;                       /* '<S11>/Add1' */
  real_T Saturation_m;                 /* '<S1>/Saturation ' */
  boolean_T RelationalOperator;        /* '<S19>/Relational Operator' */
  boolean_T Compare;                   /* '<S16>/Compare' */
  boolean_T RelationalOperator_o;      /* '<S20>/Relational Operator' */
  boolean_T RelationalOperator_n;      /* '<S21>/Relational Operator' */
  boolean_T LogicalOperator1;          /* '<S19>/Logical Operator1' */
  boolean_T LogicalOperator1_d;        /* '<S20>/Logical Operator1' */
  boolean_T LogicalOperator1_o;        /* '<S21>/Logical Operator1' */
  B_Angle2Z_Robot_Student_2021__T sf_Angle2Z_c;/* '<S21>/Angle2Z' */
  B_Angle2Z_Robot_Student_2021__T sf_Angle2Z;/* '<S19>/Angle2Z' */
} B_Robot_Student_2021_v1_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S19>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTATE_n;/* '<S32>/Discrete-Time Integrator' */
  real_T UnitDelay_DSTATE;             /* '<S11>/Unit Delay' */
  real_T DiscreteTimeIntegrator_DSTATE_p;/* '<S20>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTAT_pn;/* '<S39>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTATE_c;/* '<S21>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTATE_i;/* '<S49>/Discrete-Time Integrator' */
  real_T DiscreteTimeIntegrator_DSTATE_k;/* '<S22>/Discrete-Time Integrator' */
  real_T UnitDelay1_DSTATE;            /* '<S11>/Unit Delay1' */
  real_T UD_DSTATE;                    /* '<S35>/UD' */
  real_T UD_DSTATE_n;                  /* '<S45>/UD' */
  real_T UD_DSTATE_e;                  /* '<S56>/UD' */
  real_T Discreteintegrator_DSTATE;    /* '<S1>/Discrete  integrator' */
  char_T Delay_DSTATE[256];            /* '<S24>/Delay' */
  real_T TimeStampA;                   /* '<S29>/Derivative' */
  real_T LastUAtTimeA;                 /* '<S29>/Derivative' */
  real_T TimeStampB;                   /* '<S29>/Derivative' */
  real_T LastUAtTimeB;                 /* '<S29>/Derivative' */
  real_T TimeStampA_p;                 /* '<S29>/Derivative1' */
  real_T LastUAtTimeA_f;               /* '<S29>/Derivative1' */
  real_T TimeStampB_f;                 /* '<S29>/Derivative1' */
  real_T LastUAtTimeB_d;               /* '<S29>/Derivative1' */
  real_T TimeStampA_d;                 /* '<S38>/Derivative' */
  real_T LastUAtTimeA_i;               /* '<S38>/Derivative' */
  real_T TimeStampB_p;                 /* '<S38>/Derivative' */
  real_T LastUAtTimeB_m;               /* '<S38>/Derivative' */
  real_T TimeStampA_h;                 /* '<S38>/Derivative1' */
  real_T LastUAtTimeA_id;              /* '<S38>/Derivative1' */
  real_T TimeStampB_c;                 /* '<S38>/Derivative1' */
  real_T LastUAtTimeB_o;               /* '<S38>/Derivative1' */
  real_T TimeStampA_k;                 /* '<S54>/Derivative' */
  real_T LastUAtTimeA_h;               /* '<S54>/Derivative' */
  real_T TimeStampB_d;                 /* '<S54>/Derivative' */
  real_T LastUAtTimeB_k;               /* '<S54>/Derivative' */
  real_T TimeStampA_j;                 /* '<S54>/Derivative1' */
  real_T LastUAtTimeA_j;               /* '<S54>/Derivative1' */
  real_T TimeStampB_k;                 /* '<S54>/Derivative1' */
  real_T LastUAtTimeB_d3;              /* '<S54>/Derivative1' */
  real_T PrevY;                        /* '<S32>/Limit Speed' */
  real_T PrevY_n;                      /* '<S32>/Limit Acceleration' */
  real_T PrevY_h;                      /* '<S39>/Limit Speed' */
  real_T PrevY_m;                      /* '<S39>/Limit Acceleration' */
  real_T PrevY_c;                      /* '<S49>/Limit Speed' */
  real_T PrevY_mz;                     /* '<S49>/Limit Acceleration' */
  real_T currentcarPos;                /* '<S21>/Supervisor' */
  real_T currentcarPos_f;              /* '<S20>/Supervisor' */
  real_T currentcarPos_k;              /* '<S19>/Supervisor' */
  real_T NextOutput;                   /* '<S1>/Random Number' */
  real_T Dctintegrator_RWORK[2];       /* '<S28>/Dctintegrator' */
  real_T Dctleadlag_RWORK[2];          /* '<S28>/Dctleadlag' */
  real_T Dct1lowpass_RWORK[2];         /* '<S28>/Dct1lowpass' */
  real_T Dctleadlag_RWORK_b[2];        /* '<S30>/Dctleadlag' */
  real_T Dct1lowpass_RWORK_g[2];       /* '<S30>/Dct1lowpass' */
  real_T Dctintegrator_RWORK_b[2];     /* '<S36>/Dctintegrator' */
  real_T Dctleadlag_RWORK_a[2];        /* '<S36>/Dctleadlag' */
  real_T Dct1lowpass_RWORK_m[2];       /* '<S36>/Dct1lowpass' */
  real_T Dctleadlag_RWORK_f[2];        /* '<S37>/Dctleadlag' */
  real_T Dct1lowpass_RWORK_k[2];       /* '<S37>/Dct1lowpass' */
  real_T Dctintegrator_RWORK_m[2];     /* '<S46>/Dctintegrator' */
  real_T Dctleadlag_RWORK_p[2];        /* '<S46>/Dctleadlag' */
  real_T Dct1lowpass_RWORK_p[2];       /* '<S46>/Dct1lowpass' */
  real_T Dctleadlag_RWORK_o[2];        /* '<S47>/Dctleadlag' */
  real_T Dct1lowpass_RWORK_gb[2];      /* '<S47>/Dct1lowpass' */
  real_T Dctintegrator3_RWORK[2];      /* '<S57>/Dctintegrator3' */
  real_T Dct1lowpass_RWORK_n[2];       /* '<S57>/Dct1lowpass' */
  real_T Dctleadlag_RWORK_l[2];        /* '<S57>/Dctleadlag' */
  real_T Dctintegrator3_RWORK_g[2];    /* '<S4>/Dctintegrator3' */
  real_T Dct1lowpass_RWORK_c[2];       /* '<S4>/Dct1lowpass' */
  real_T Dctleadlag_RWORK_g[2];        /* '<S4>/Dctleadlag' */
  struct {
    void *LoggedData;
  } ToWorkspace1_PWORK;                /* '<S1>/To Workspace1' */

  struct {
    void *LoggedData;
  } ToWorkspace_PWORK;                 /* '<S1>/To Workspace' */

  int32_T sfEvent;                     /* '<S22>/Supervisor' */
  int32_T sfEvent_o;                   /* '<S21>/Supervisor' */
  int32_T sfEvent_j;                   /* '<S20>/Supervisor' */
  int32_T sfEvent_f;                   /* '<S19>/Supervisor' */
  int32_T sfEvent_b;                   /* '<S1>/Stateflow ' */
  uint32_T is_c4_Robot_Student_2021_v1;/* '<S22>/Supervisor' */
  uint32_T is_c7_Robot_Student_2021_v1;/* '<S21>/Supervisor' */
  uint32_T is_c6_Robot_Student_2021_v1;/* '<S20>/Supervisor' */
  uint32_T is_c5_Robot_Student_2021_v1;/* '<S19>/Supervisor' */
  uint32_T RandSeed;                   /* '<S1>/Random Number' */
  uint32_T is_Object_Detection;        /* '<S1>/Stateflow ' */
  uint32_T is_Belt;                    /* '<S1>/Stateflow ' */
  uint32_T is_Robot_Arm;               /* '<S1>/Stateflow ' */
  uint32_T is_Vacuum;                  /* '<S1>/Stateflow ' */
  uint16_T temporalCounter_i1;         /* '<S22>/Supervisor' */
  uint16_T temporalCounter_i1_e;       /* '<S21>/Supervisor' */
  uint16_T temporalCounter_i1_a;       /* '<S20>/Supervisor' */
  uint16_T temporalCounter_i1_p;       /* '<S19>/Supervisor' */
  int8_T Subsystem3_SubsysRanBC;       /* '<S23>/Subsystem3' */
  int8_T IfActionSubsystem1_SubsysRanBC;/* '<S25>/If Action Subsystem1' */
  int8_T IfActionSubsystem_SubsysRanBC;/* '<S25>/If Action Subsystem' */
  int8_T Controller_SubsysRanBC;       /* '<Root>/Controller' */
  uint8_T is_active_c4_Robot_Student_2021;/* '<S22>/Supervisor' */
  uint8_T is_active_c7_Robot_Student_2021;/* '<S21>/Supervisor' */
  uint8_T is_active_c6_Robot_Student_2021;/* '<S20>/Supervisor' */
  uint8_T is_active_c5_Robot_Student_2021;/* '<S19>/Supervisor' */
  uint8_T is_active_c3_Robot_Student_2021;/* '<S1>/Stateflow ' */
  uint8_T is_active_Object_Detection;  /* '<S1>/Stateflow ' */
  uint8_T is_active_Belt;              /* '<S1>/Stateflow ' */
  uint8_T is_active_Robot_Arm;         /* '<S1>/Stateflow ' */
  uint8_T is_active_Vacuum;            /* '<S1>/Stateflow ' */
  boolean_T doneDoubleBufferReInit;    /* '<S1>/Stateflow ' */
  boolean_T Controller_MODE;           /* '<Root>/Controller' */
  DW_SerialWrite1_Robot_Student_T SerialWrite;/* '<S26>/Serial Write1' */
  DW_SerialWrite1_Robot_Student_T SerialWrite1;/* '<S26>/Serial Write1' */
} DW_Robot_Student_2021_v1_T;

/* Parameters (default storage) */
struct P_Robot_Student_2021_v1_T_ {
  real_T DiscreteDerivative_ICPrevScaled;
                              /* Mask Parameter: DiscreteDerivative_ICPrevScaled
                               * Referenced by: '<S35>/UD'
                               */
  real_T DiscreteDerivative_ICPrevScal_p;
                              /* Mask Parameter: DiscreteDerivative_ICPrevScal_p
                               * Referenced by: '<S45>/UD'
                               */
  real_T DiscreteDerivative_ICPrevScal_i;
                              /* Mask Parameter: DiscreteDerivative_ICPrevScal_i
                               * Referenced by: '<S56>/UD'
                               */
  real_T CompareToConstant_const;     /* Mask Parameter: CompareToConstant_const
                                       * Referenced by: '<S16>/Constant'
                                       */
  real_T ReferenceR_Value;             /* Expression: -0
                                        * Referenced by: '<S1>/Reference R'
                                        */
  real_T Suck_Value;                   /* Expression: 0
                                        * Referenced by: '<S1>/Suck'
                                        */
  real_T Blow_Value;                   /* Expression: 1
                                        * Referenced by: '<S1>/ Blow'
                                        */
  real_T Angle_Y0;                     /* Computed Parameter: Angle_Y0
                                        * Referenced by: '<S1>/Angle'
                                        */
  real_T Conveyor_Y0;                  /* Computed Parameter: Conveyor_Y0
                                        * Referenced by: '<S1>/Conveyor '
                                        */
  real_T Vacuum_Y0;                    /* Computed Parameter: Vacuum_Y0
                                        * Referenced by: '<S1>/Vacuum '
                                        */
  real_T Blowsuck_Y0;                  /* Computed Parameter: Blowsuck_Y0
                                        * Referenced by: '<S1>/Blow//suck'
                                        */
  real_T xynproducts_Value[5];         /* Expression: [0,0,0,0,0]
                                        * Referenced by: '<S3>/[x,y,nproducts]'
                                        */
  real_T ReferenceX_Value;             /* Expression: 0
                                        * Referenced by: '<S1>/Reference X'
                                        */
  real_T Gain_Gain;                    /* Expression: 1
                                        * Referenced by: '<S8>/Gain'
                                        */
  real_T FeedfowardZ_Value;            /* Expression: 0
                                        * Referenced by: '<S1>/Feedfoward Z'
                                        */
  real_T ReferenceZ_Value;             /* Expression: 0
                                        * Referenced by: '<S1>/Reference Z'
                                        */
  real_T Gain1_Gain;                   /* Expression: 1
                                        * Referenced by: '<S7>/Gain1'
                                        */
  real_T FeedfowardX_Value;            /* Expression: 0
                                        * Referenced by: '<S1>/Feedfoward X'
                                        */
  real_T RandomNumber_Mean;            /* Expression: 0.1
                                        * Referenced by: '<S1>/Random Number'
                                        */
  real_T RandomNumber_StdDev;         /* Computed Parameter: RandomNumber_StdDev
                                       * Referenced by: '<S1>/Random Number'
                                       */
  real_T RandomNumber_Seed;            /* Expression: 0
                                        * Referenced by: '<S1>/Random Number'
                                        */
  real_T Gain1_Gain_g;                 /* Expression: 1
                                        * Referenced by: '<S5>/Gain1'
                                        */
  real_T FeedfowardR_Value;            /* Expression: 0
                                        * Referenced by: '<S1>/Feedfoward R'
                                        */
  real_T Discreteintegrator_gainval;
                               /* Computed Parameter: Discreteintegrator_gainval
                                * Referenced by: '<S1>/Discrete  integrator'
                                */
  real_T Discreteintegrator_IC;        /* Expression: 0
                                        * Referenced by: '<S1>/Discrete  integrator'
                                        */
  real_T Gain1_Gain_gq;                /* Expression: 10*2.5/500
                                        * Referenced by: '<S4>/Gain1'
                                        */
  real_T Dctintegrator3_P1_Size[2];/* Computed Parameter: Dctintegrator3_P1_Size
                                    * Referenced by: '<S4>/Dctintegrator3'
                                    */
  real_T Dctintegrator3_P1;            /* Expression: f_num
                                        * Referenced by: '<S4>/Dctintegrator3'
                                        */
  real_T Dctintegrator3_P2_Size[2];/* Computed Parameter: Dctintegrator3_P2_Size
                                    * Referenced by: '<S4>/Dctintegrator3'
                                    */
  real_T Dctintegrator3_P2;            /* Expression: 0.001
                                        * Referenced by: '<S4>/Dctintegrator3'
                                        */
  real_T Dct1lowpass_P1_Size[2];      /* Computed Parameter: Dct1lowpass_P1_Size
                                       * Referenced by: '<S4>/Dct1lowpass'
                                       */
  real_T Dct1lowpass_P1;               /* Expression: f_den
                                        * Referenced by: '<S4>/Dct1lowpass'
                                        */
  real_T Dct1lowpass_P2_Size[2];      /* Computed Parameter: Dct1lowpass_P2_Size
                                       * Referenced by: '<S4>/Dct1lowpass'
                                       */
  real_T Dct1lowpass_P2;               /* Expression: 0.001
                                        * Referenced by: '<S4>/Dct1lowpass'
                                        */
  real_T Dctleadlag_P1_Size[2];        /* Computed Parameter: Dctleadlag_P1_Size
                                        * Referenced by: '<S4>/Dctleadlag'
                                        */
  real_T Dctleadlag_P1;                /* Expression: f_num
                                        * Referenced by: '<S4>/Dctleadlag'
                                        */
  real_T Dctleadlag_P2_Size[2];        /* Computed Parameter: Dctleadlag_P2_Size
                                        * Referenced by: '<S4>/Dctleadlag'
                                        */
  real_T Dctleadlag_P2;                /* Expression: f_den
                                        * Referenced by: '<S4>/Dctleadlag'
                                        */
  real_T Dctleadlag_P3_Size[2];        /* Computed Parameter: Dctleadlag_P3_Size
                                        * Referenced by: '<S4>/Dctleadlag'
                                        */
  real_T Dctleadlag_P3;                /* Expression: 0.001
                                        * Referenced by: '<S4>/Dctleadlag'
                                        */
  real_T Conveyorspeedmms_Value;       /* Expression: 0
                                        * Referenced by: '<S1>/Conveyor speed [mm//s]'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 100
                                        * Referenced by: '<S1>/Saturation '
                                        */
  real_T Saturation_LowerSat;          /* Expression: -100
                                        * Referenced by: '<S1>/Saturation '
                                        */
  real_T ReferenceVacuumbar_Value;     /* Expression: 0
                                        * Referenced by: '<S1>/Reference Vacuum [bar]'
                                        */
  real_T Gain1_Gain_b;                 /* Expression: -10
                                        * Referenced by: '<S6>/Gain1'
                                        */
  real_T Color_Value;                  /* Expression: 1
                                        * Referenced by: '<S1>/Color'
                                        */
  real_T Plot_Value;                   /* Expression: 0
                                        * Referenced by: '<S1>/Plot'
                                        */
  real_T Stop_Value;                   /* Expression: 0
                                        * Referenced by: '<S1>/Stop'
                                        */
  real_T Gain5_Gain;                   /* Expression: 0.25
                                        * Referenced by: '<S10>/Gain5'
                                        */
  real_T HomingRunningSwitch2_Threshold;/* Expression: 50
                                         * Referenced by: '<S18>/Homing Running Switch2'
                                         */
  real_T HomingRunningSwitch1_Threshold;/* Expression: 2.5
                                         * Referenced by: '<S18>/Homing Running Switch1'
                                         */
  real_T Kfc_Gain;                     /* Expression: 0.15
                                        * Referenced by: '<S29>/Kfc'
                                        */
  real_T Kfa_Gain;                     /* Expression: 0.0041
                                        * Referenced by: '<S29>/Kfa'
                                        */
  real_T Kfv_Gain;                     /* Expression: 0.001
                                        * Referenced by: '<S29>/Kfv'
                                        */
  real_T Saturation_UpperSat_i;        /* Expression: 0.7
                                        * Referenced by: '<S19>/Saturation'
                                        */
  real_T Saturation_LowerSat_m;        /* Expression: -0.7
                                        * Referenced by: '<S19>/Saturation'
                                        */
  real_T HomingRunningSwitch_Threshold;/* Expression: 0.5
                                        * Referenced by: '<S19>/Homing Running Switch'
                                        */
  real_T Kfc_Gain_b;                   /* Expression: 0.15
                                        * Referenced by: '<S38>/Kfc'
                                        */
  real_T Kfa_Gain_g;                   /* Expression: 0.0005
                                        * Referenced by: '<S38>/Kfa'
                                        */
  real_T Kfv_Gain_c;                   /* Expression: 0.01
                                        * Referenced by: '<S38>/Kfv'
                                        */
  real_T HomingRunningSwitch_Threshold_o;/* Expression: 0.5
                                          * Referenced by: '<S20>/Homing Running Switch'
                                          */
  real_T Kfc_Gain_g;                   /* Expression: 0.1
                                        * Referenced by: '<S54>/Kfc'
                                        */
  real_T Kfa_Gain_j;                   /* Expression: 0.001
                                        * Referenced by: '<S54>/Kfa'
                                        */
  real_T Kfv_Gain_f;                   /* Expression: 0.01
                                        * Referenced by: '<S54>/Kfv'
                                        */
  real_T HomingRunningSwitch_Threshold_j;/* Expression: 0.5
                                          * Referenced by: '<S21>/Homing Running Switch'
                                          */
  real_T SFunction_P1_Size[2];         /* Computed Parameter: SFunction_P1_Size
                                        * Referenced by: '<S15>/S-Function'
                                        */
  real_T SFunction_P1;                 /* Expression: portid
                                        * Referenced by: '<S15>/S-Function'
                                        */
  real_T SFunction_P2_Size[2];         /* Computed Parameter: SFunction_P2_Size
                                        * Referenced by: '<S15>/S-Function'
                                        */
  real_T SFunction_P2;                 /* Expression: ectimeout
                                        * Referenced by: '<S15>/S-Function'
                                        */
  real_T ec_Ebox_P1_Size[2];           /* Computed Parameter: ec_Ebox_P1_Size
                                        * Referenced by: '<S12>/ec_Ebox'
                                        */
  real_T ec_Ebox_P1;                   /* Expression: link_id
                                        * Referenced by: '<S12>/ec_Ebox'
                                        */
  real_T Gain_Gain_p;                  /* Expression: 1/4000*9/150*2*pi
                                        * Referenced by: '<S10>/Gain'
                                        */
  real_T Gain1_Gain_c;                 /* Expression: -1/4000*9/100*2*pi
                                        * Referenced by: '<S10>/Gain1'
                                        */
  real_T ec_Ebox_P1_Size_o[2];         /* Computed Parameter: ec_Ebox_P1_Size_o
                                        * Referenced by: '<S13>/ec_Ebox'
                                        */
  real_T ec_Ebox_P1_i;                 /* Expression: link_id
                                        * Referenced by: '<S13>/ec_Ebox'
                                        */
  real_T Gain2_Gain;                   /* Expression: 1/4000*9/100*2*pi
                                        * Referenced by: '<S10>/Gain2'
                                        */
  real_T ec_Ebox_P1_Size_m[2];         /* Computed Parameter: ec_Ebox_P1_Size_m
                                        * Referenced by: '<S14>/ec_Ebox'
                                        */
  real_T ec_Ebox_P1_e;                 /* Expression: link_id
                                        * Referenced by: '<S14>/ec_Ebox'
                                        */
  real_T HomingRunningSwitch_Threshold_d;/* Expression: 2
                                          * Referenced by: '<S10>/Homing Running Switch'
                                          */
  real_T Gain3_Gain;                   /* Expression: -1/16000*2*pi*2.07*10
                                        * Referenced by: '<S10>/Gain3'
                                        */
  real_T Gain6_Gain;                   /* Expression: -0.1
                                        * Referenced by: '<S10>/Gain6'
                                        */
  real_T Constant_Value;               /* Expression: 1
                                        * Referenced by: '<S17>/Constant'
                                        */
  real_T DiscreteTimeIntegrator_gainval;
                           /* Computed Parameter: DiscreteTimeIntegrator_gainval
                            * Referenced by: '<S19>/Discrete-Time Integrator'
                            */
  real_T DiscreteTimeIntegrator_IC;    /* Expression: 0
                                        * Referenced by: '<S19>/Discrete-Time Integrator'
                                        */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<S32>/Constant1'
                                        */
  real_T DiscreteTimeIntegrator_gainva_b;
                          /* Computed Parameter: DiscreteTimeIntegrator_gainva_b
                           * Referenced by: '<S32>/Discrete-Time Integrator'
                           */
  real_T Constant_Value_g;             /* Expression: -0.1
                                        * Referenced by: '<S19>/Constant'
                                        */
  real_T UnitDelay_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S11>/Unit Delay'
                                        */
  real_T set_robot_calibration_r_Value;/* Expression: 1.2878
                                        * Referenced by: '<S11>/set_robot_calibration_r'
                                        */
  real_T DiscreteTimeIntegrator_gainva_a;
                          /* Computed Parameter: DiscreteTimeIntegrator_gainva_a
                           * Referenced by: '<S20>/Discrete-Time Integrator'
                           */
  real_T DiscreteTimeIntegrator_IC_i;  /* Expression: 0
                                        * Referenced by: '<S20>/Discrete-Time Integrator'
                                        */
  real_T Constant1_Value_c;            /* Expression: 0
                                        * Referenced by: '<S39>/Constant1'
                                        */
  real_T DiscreteTimeIntegrator_gainva_i;
                          /* Computed Parameter: DiscreteTimeIntegrator_gainva_i
                           * Referenced by: '<S39>/Discrete-Time Integrator'
                           */
  real_T Constant_Value_n;             /* Expression: -0.1
                                        * Referenced by: '<S20>/Constant'
                                        */
  real_T set_robot_calibration_x_Value;/* Expression: 0.6126
                                        * Referenced by: '<S11>/set_robot_calibration_x'
                                        */
  real_T DiscreteTimeIntegrator_gainv_ip;
                          /* Computed Parameter: DiscreteTimeIntegrator_gainv_ip
                           * Referenced by: '<S21>/Discrete-Time Integrator'
                           */
  real_T DiscreteTimeIntegrator_IC_d;  /* Expression: 0
                                        * Referenced by: '<S21>/Discrete-Time Integrator'
                                        */
  real_T Constant1_Value_e;            /* Expression: 0
                                        * Referenced by: '<S49>/Constant1'
                                        */
  real_T DiscreteTimeIntegrator_gainva_n;
                          /* Computed Parameter: DiscreteTimeIntegrator_gainva_n
                           * Referenced by: '<S49>/Discrete-Time Integrator'
                           */
  real_T Constant_Value_p;             /* Expression: 0.1
                                        * Referenced by: '<S21>/Constant'
                                        */
  real_T set_robot_calibration_z_Value;/* Expression: -0.3225
                                        * Referenced by: '<S11>/set_robot_calibration_z'
                                        */
  real_T EnableVentiel_Value[8];       /* Expression: [1,0,0,0,0,0,0,0]
                                        * Referenced by: '<S10>/Enable//Ventiel'
                                        */
  real_T Constant1_Value_f;            /* Expression: 5
                                        * Referenced by: '<S10>/Constant1'
                                        */
  real_T Gain_Gain_j;                  /* Expression: 1/100
                                        * Referenced by: '<S12>/Gain'
                                        */
  real_T Gain_Gain_ph;                 /* Expression: 25
                                        * Referenced by: '<S28>/Gain'
                                        */
  real_T Dctintegrator_P1_Size[2];  /* Computed Parameter: Dctintegrator_P1_Size
                                     * Referenced by: '<S28>/Dctintegrator'
                                     */
  real_T Dctintegrator_P1;             /* Expression: f_num
                                        * Referenced by: '<S28>/Dctintegrator'
                                        */
  real_T Dctintegrator_P2_Size[2];  /* Computed Parameter: Dctintegrator_P2_Size
                                     * Referenced by: '<S28>/Dctintegrator'
                                     */
  real_T Dctintegrator_P2;             /* Expression: 0.001
                                        * Referenced by: '<S28>/Dctintegrator'
                                        */
  real_T Dctleadlag_P1_Size_p[2];    /* Computed Parameter: Dctleadlag_P1_Size_p
                                      * Referenced by: '<S28>/Dctleadlag'
                                      */
  real_T Dctleadlag_P1_c;              /* Expression: f_num
                                        * Referenced by: '<S28>/Dctleadlag'
                                        */
  real_T Dctleadlag_P2_Size_p[2];    /* Computed Parameter: Dctleadlag_P2_Size_p
                                      * Referenced by: '<S28>/Dctleadlag'
                                      */
  real_T Dctleadlag_P2_i;              /* Expression: f_den
                                        * Referenced by: '<S28>/Dctleadlag'
                                        */
  real_T Dctleadlag_P3_Size_c[2];    /* Computed Parameter: Dctleadlag_P3_Size_c
                                      * Referenced by: '<S28>/Dctleadlag'
                                      */
  real_T Dctleadlag_P3_m;              /* Expression: 0.001
                                        * Referenced by: '<S28>/Dctleadlag'
                                        */
  real_T Dct1lowpass_P1_Size_f[2];  /* Computed Parameter: Dct1lowpass_P1_Size_f
                                     * Referenced by: '<S28>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P1_m;             /* Expression: f_den
                                        * Referenced by: '<S28>/Dct1lowpass'
                                        */
  real_T Dct1lowpass_P2_Size_g[2];  /* Computed Parameter: Dct1lowpass_P2_Size_g
                                     * Referenced by: '<S28>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P2_l;             /* Expression: 0.001
                                        * Referenced by: '<S28>/Dct1lowpass'
                                        */
  real_T Gain_Gain_ju;                 /* Expression: 25
                                        * Referenced by: '<S30>/Gain'
                                        */
  real_T Dctleadlag_P1_Size_n[2];    /* Computed Parameter: Dctleadlag_P1_Size_n
                                      * Referenced by: '<S30>/Dctleadlag'
                                      */
  real_T Dctleadlag_P1_p;              /* Expression: f_num
                                        * Referenced by: '<S30>/Dctleadlag'
                                        */
  real_T Dctleadlag_P2_Size_b[2];    /* Computed Parameter: Dctleadlag_P2_Size_b
                                      * Referenced by: '<S30>/Dctleadlag'
                                      */
  real_T Dctleadlag_P2_o;              /* Expression: f_den
                                        * Referenced by: '<S30>/Dctleadlag'
                                        */
  real_T Dctleadlag_P3_Size_d[2];    /* Computed Parameter: Dctleadlag_P3_Size_d
                                      * Referenced by: '<S30>/Dctleadlag'
                                      */
  real_T Dctleadlag_P3_c;              /* Expression: 0.001
                                        * Referenced by: '<S30>/Dctleadlag'
                                        */
  real_T Dct1lowpass_P1_Size_p[2];  /* Computed Parameter: Dct1lowpass_P1_Size_p
                                     * Referenced by: '<S30>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P1_d;             /* Expression: f_den
                                        * Referenced by: '<S30>/Dct1lowpass'
                                        */
  real_T Dct1lowpass_P2_Size_gi[2];/* Computed Parameter: Dct1lowpass_P2_Size_gi
                                    * Referenced by: '<S30>/Dct1lowpass'
                                    */
  real_T Dct1lowpass_P2_n;             /* Expression: 0.001
                                        * Referenced by: '<S30>/Dct1lowpass'
                                        */
  real_T Voltagemiddle_Value;          /* Expression: 2.5
                                        * Referenced by: '<S10>/Voltage middle'
                                        */
  real_T Gain1_Gain_h;                 /* Expression: 20
                                        * Referenced by: '<S36>/Gain1'
                                        */
  real_T Dctintegrator_P1_Size_c[2];
                                  /* Computed Parameter: Dctintegrator_P1_Size_c
                                   * Referenced by: '<S36>/Dctintegrator'
                                   */
  real_T Dctintegrator_P1_h;           /* Expression: f_num
                                        * Referenced by: '<S36>/Dctintegrator'
                                        */
  real_T Dctintegrator_P2_Size_j[2];
                                  /* Computed Parameter: Dctintegrator_P2_Size_j
                                   * Referenced by: '<S36>/Dctintegrator'
                                   */
  real_T Dctintegrator_P2_c;           /* Expression: 0.001
                                        * Referenced by: '<S36>/Dctintegrator'
                                        */
  real_T Dctleadlag_P1_Size_ph[2];  /* Computed Parameter: Dctleadlag_P1_Size_ph
                                     * Referenced by: '<S36>/Dctleadlag'
                                     */
  real_T Dctleadlag_P1_f;              /* Expression: f_num
                                        * Referenced by: '<S36>/Dctleadlag'
                                        */
  real_T Dctleadlag_P2_Size_l[2];    /* Computed Parameter: Dctleadlag_P2_Size_l
                                      * Referenced by: '<S36>/Dctleadlag'
                                      */
  real_T Dctleadlag_P2_p;              /* Expression: f_den
                                        * Referenced by: '<S36>/Dctleadlag'
                                        */
  real_T Dctleadlag_P3_Size_j[2];    /* Computed Parameter: Dctleadlag_P3_Size_j
                                      * Referenced by: '<S36>/Dctleadlag'
                                      */
  real_T Dctleadlag_P3_f;              /* Expression: 0.001
                                        * Referenced by: '<S36>/Dctleadlag'
                                        */
  real_T Dct1lowpass_P1_Size_m[2];  /* Computed Parameter: Dct1lowpass_P1_Size_m
                                     * Referenced by: '<S36>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P1_do;            /* Expression: f_den
                                        * Referenced by: '<S36>/Dct1lowpass'
                                        */
  real_T Dct1lowpass_P2_Size_i[2];  /* Computed Parameter: Dct1lowpass_P2_Size_i
                                     * Referenced by: '<S36>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P2_nr;            /* Expression: 0.001
                                        * Referenced by: '<S36>/Dct1lowpass'
                                        */
  real_T Gain1_Gain_d;                 /* Expression: 20
                                        * Referenced by: '<S37>/Gain1'
                                        */
  real_T Dctleadlag_P1_Size_b[2];    /* Computed Parameter: Dctleadlag_P1_Size_b
                                      * Referenced by: '<S37>/Dctleadlag'
                                      */
  real_T Dctleadlag_P1_j;              /* Expression: f_num
                                        * Referenced by: '<S37>/Dctleadlag'
                                        */
  real_T Dctleadlag_P2_Size_o[2];    /* Computed Parameter: Dctleadlag_P2_Size_o
                                      * Referenced by: '<S37>/Dctleadlag'
                                      */
  real_T Dctleadlag_P2_b;              /* Expression: f_den
                                        * Referenced by: '<S37>/Dctleadlag'
                                        */
  real_T Dctleadlag_P3_Size_a[2];    /* Computed Parameter: Dctleadlag_P3_Size_a
                                      * Referenced by: '<S37>/Dctleadlag'
                                      */
  real_T Dctleadlag_P3_g;              /* Expression: 0.001
                                        * Referenced by: '<S37>/Dctleadlag'
                                        */
  real_T Dct1lowpass_P1_Size_i[2];  /* Computed Parameter: Dct1lowpass_P1_Size_i
                                     * Referenced by: '<S37>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P1_db;            /* Expression: f_den
                                        * Referenced by: '<S37>/Dct1lowpass'
                                        */
  real_T Dct1lowpass_P2_Size_j[2];  /* Computed Parameter: Dct1lowpass_P2_Size_j
                                     * Referenced by: '<S37>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P2_ns;            /* Expression: 0.001
                                        * Referenced by: '<S37>/Dct1lowpass'
                                        */
  real_T Saturation_UpperSat_k;        /* Expression: 5
                                        * Referenced by: '<S10>/Saturation'
                                        */
  real_T Saturation_LowerSat_i;        /* Expression: 0
                                        * Referenced by: '<S10>/Saturation'
                                        */
  real_T Saturation_UpperSat_j;        /* Expression: 10
                                        * Referenced by: '<S12>/Saturation'
                                        */
  real_T Saturation_LowerSat_f;        /* Expression: -10
                                        * Referenced by: '<S12>/Saturation'
                                        */
  real_T Gain_Gain_ps;                 /* Expression: 1/100
                                        * Referenced by: '<S13>/Gain'
                                        */
  real_T Gain_Gain_d;                  /* Expression: 25
                                        * Referenced by: '<S46>/Gain'
                                        */
  real_T Dctintegrator_P1_Size_j[2];
                                  /* Computed Parameter: Dctintegrator_P1_Size_j
                                   * Referenced by: '<S46>/Dctintegrator'
                                   */
  real_T Dctintegrator_P1_d;           /* Expression: f_num
                                        * Referenced by: '<S46>/Dctintegrator'
                                        */
  real_T Dctintegrator_P2_Size_n[2];
                                  /* Computed Parameter: Dctintegrator_P2_Size_n
                                   * Referenced by: '<S46>/Dctintegrator'
                                   */
  real_T Dctintegrator_P2_f;           /* Expression: 0.001
                                        * Referenced by: '<S46>/Dctintegrator'
                                        */
  real_T Dctleadlag_P1_Size_o[2];    /* Computed Parameter: Dctleadlag_P1_Size_o
                                      * Referenced by: '<S46>/Dctleadlag'
                                      */
  real_T Dctleadlag_P1_g;              /* Expression: f_num
                                        * Referenced by: '<S46>/Dctleadlag'
                                        */
  real_T Dctleadlag_P2_Size_o4[2];  /* Computed Parameter: Dctleadlag_P2_Size_o4
                                     * Referenced by: '<S46>/Dctleadlag'
                                     */
  real_T Dctleadlag_P2_e;              /* Expression: f_den
                                        * Referenced by: '<S46>/Dctleadlag'
                                        */
  real_T Dctleadlag_P3_Size_l[2];    /* Computed Parameter: Dctleadlag_P3_Size_l
                                      * Referenced by: '<S46>/Dctleadlag'
                                      */
  real_T Dctleadlag_P3_mc;             /* Expression: 0.001
                                        * Referenced by: '<S46>/Dctleadlag'
                                        */
  real_T Dct1lowpass_P1_Size_g[2];  /* Computed Parameter: Dct1lowpass_P1_Size_g
                                     * Referenced by: '<S46>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P1_a;             /* Expression: f_den
                                        * Referenced by: '<S46>/Dct1lowpass'
                                        */
  real_T Dct1lowpass_P2_Size_p[2];  /* Computed Parameter: Dct1lowpass_P2_Size_p
                                     * Referenced by: '<S46>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P2_o;             /* Expression: 0.001
                                        * Referenced by: '<S46>/Dct1lowpass'
                                        */
  real_T Gain_Gain_pq;                 /* Expression: 30
                                        * Referenced by: '<S47>/Gain'
                                        */
  real_T Dctleadlag_P1_Size_f[2];    /* Computed Parameter: Dctleadlag_P1_Size_f
                                      * Referenced by: '<S47>/Dctleadlag'
                                      */
  real_T Dctleadlag_P1_h;              /* Expression: f_num
                                        * Referenced by: '<S47>/Dctleadlag'
                                        */
  real_T Dctleadlag_P2_Size_d[2];    /* Computed Parameter: Dctleadlag_P2_Size_d
                                      * Referenced by: '<S47>/Dctleadlag'
                                      */
  real_T Dctleadlag_P2_l;              /* Expression: f_den
                                        * Referenced by: '<S47>/Dctleadlag'
                                        */
  real_T Dctleadlag_P3_Size_p[2];    /* Computed Parameter: Dctleadlag_P3_Size_p
                                      * Referenced by: '<S47>/Dctleadlag'
                                      */
  real_T Dctleadlag_P3_l;              /* Expression: 0.001
                                        * Referenced by: '<S47>/Dctleadlag'
                                        */
  real_T Dct1lowpass_P1_Size_d[2];  /* Computed Parameter: Dct1lowpass_P1_Size_d
                                     * Referenced by: '<S47>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P1_g;             /* Expression: f_den
                                        * Referenced by: '<S47>/Dct1lowpass'
                                        */
  real_T Dct1lowpass_P2_Size_k[2];  /* Computed Parameter: Dct1lowpass_P2_Size_k
                                     * Referenced by: '<S47>/Dct1lowpass'
                                     */
  real_T Dct1lowpass_P2_f;             /* Expression: 0.001
                                        * Referenced by: '<S47>/Dct1lowpass'
                                        */
  real_T DiscreteTimeIntegrator_gainva_c;
                          /* Computed Parameter: DiscreteTimeIntegrator_gainva_c
                           * Referenced by: '<S22>/Discrete-Time Integrator'
                           */
  real_T DiscreteTimeIntegrator_IC_f;  /* Expression: 0
                                        * Referenced by: '<S22>/Discrete-Time Integrator'
                                        */
  real_T Gain1_Gain_p;                 /* Expression: 10*2.5/500
                                        * Referenced by: '<S57>/Gain1'
                                        */
  real_T Dctintegrator3_P1_Size_e[2];
                                 /* Computed Parameter: Dctintegrator3_P1_Size_e
                                  * Referenced by: '<S57>/Dctintegrator3'
                                  */
  real_T Dctintegrator3_P1_e;          /* Expression: f_num
                                        * Referenced by: '<S57>/Dctintegrator3'
                                        */
  real_T Dctintegrator3_P2_Size_i[2];
                                 /* Computed Parameter: Dctintegrator3_P2_Size_i
                                  * Referenced by: '<S57>/Dctintegrator3'
                                  */
  real_T Dctintegrator3_P2_a;          /* Expression: 0.001
                                        * Referenced by: '<S57>/Dctintegrator3'
                                        */
  real_T Dct1lowpass_P1_Size_ph[2];/* Computed Parameter: Dct1lowpass_P1_Size_ph
                                    * Referenced by: '<S57>/Dct1lowpass'
                                    */
  real_T Dct1lowpass_P1_j;             /* Expression: f_den
                                        * Referenced by: '<S57>/Dct1lowpass'
                                        */
  real_T Dct1lowpass_P2_Size_p0[2];/* Computed Parameter: Dct1lowpass_P2_Size_p0
                                    * Referenced by: '<S57>/Dct1lowpass'
                                    */
  real_T Dct1lowpass_P2_p;             /* Expression: 0.001
                                        * Referenced by: '<S57>/Dct1lowpass'
                                        */
  real_T Dctleadlag_P1_Size_pu[2];  /* Computed Parameter: Dctleadlag_P1_Size_pu
                                     * Referenced by: '<S57>/Dctleadlag'
                                     */
  real_T Dctleadlag_P1_je;             /* Expression: f_num
                                        * Referenced by: '<S57>/Dctleadlag'
                                        */
  real_T Dctleadlag_P2_Size_n[2];    /* Computed Parameter: Dctleadlag_P2_Size_n
                                      * Referenced by: '<S57>/Dctleadlag'
                                      */
  real_T Dctleadlag_P2_m;              /* Expression: f_den
                                        * Referenced by: '<S57>/Dctleadlag'
                                        */
  real_T Dctleadlag_P3_Size_f[2];    /* Computed Parameter: Dctleadlag_P3_Size_f
                                      * Referenced by: '<S57>/Dctleadlag'
                                      */
  real_T Dctleadlag_P3_i;              /* Expression: 0.001
                                        * Referenced by: '<S57>/Dctleadlag'
                                        */
  real_T HomingRunningSwitch_Threshold_c;/* Expression: 0.5
                                          * Referenced by: '<S22>/Homing Running Switch'
                                          */
  real_T Gain4_Gain;                   /* Expression: 1
                                        * Referenced by: '<S10>/Gain4'
                                        */
  real_T Saturation1_UpperSat;         /* Expression: 5
                                        * Referenced by: '<S10>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S10>/Saturation1'
                                        */
  real_T Saturation_UpperSat_g;        /* Expression: 10
                                        * Referenced by: '<S13>/Saturation'
                                        */
  real_T Saturation_LowerSat_g;        /* Expression: -10
                                        * Referenced by: '<S13>/Saturation'
                                        */
  real_T Gain_Gain_m;                  /* Expression: 1/100
                                        * Referenced by: '<S14>/Gain'
                                        */
  real_T HomingRunningSwitch1_Threshol_k;/* Expression: 0.5
                                          * Referenced by: '<S10>/Homing Running Switch1'
                                          */
  real_T Saturation2_UpperSat;         /* Expression: 5
                                        * Referenced by: '<S10>/Saturation2'
                                        */
  real_T Saturation2_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S10>/Saturation2'
                                        */
  real_T Saturation_UpperSat_a;        /* Expression: 10
                                        * Referenced by: '<S14>/Saturation'
                                        */
  real_T Saturation_LowerSat_c;        /* Expression: -10
                                        * Referenced by: '<S14>/Saturation'
                                        */
  real_T UnitDelay1_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S11>/Unit Delay1'
                                        */
  real_T HomingRunningSwitch_Threshold_f;/* Expression: 0.5
                                          * Referenced by: '<S18>/Homing Running Switch'
                                          */
  real_T Gain_Gain_l;                  /* Expression: 3
                                        * Referenced by: '<S11>/Gain'
                                        */
  real_T ResetEncoderR_P1_Size[2];  /* Computed Parameter: ResetEncoderR_P1_Size
                                     * Referenced by: '<S19>/Reset EncoderR'
                                     */
  real_T ResetEncoderR_P1;             /* Expression: link_id
                                        * Referenced by: '<S19>/Reset EncoderR'
                                        */
  real_T ResetEncoderR_P2_Size[2];  /* Computed Parameter: ResetEncoderR_P2_Size
                                     * Referenced by: '<S19>/Reset EncoderR'
                                     */
  real_T ResetEncoderR_P2;             /* Expression: chan_id
                                        * Referenced by: '<S19>/Reset EncoderR'
                                        */
  real_T LimitSpeed_RisingLim;         /* Expression: 0.6
                                        * Referenced by: '<S32>/Limit Speed'
                                        */
  real_T LimitSpeed_FallingLim;        /* Expression: -0.6
                                        * Referenced by: '<S32>/Limit Speed'
                                        */
  real_T LimitSpeed_IC;                /* Expression: 0
                                        * Referenced by: '<S32>/Limit Speed'
                                        */
  real_T TSamp_WtEt;                   /* Computed Parameter: TSamp_WtEt
                                        * Referenced by: '<S35>/TSamp'
                                        */
  real_T LimitAcceleration_RisingLim;  /* Expression: 0.8
                                        * Referenced by: '<S32>/Limit Acceleration'
                                        */
  real_T LimitAcceleration_FallingLim; /* Expression: -0.8
                                        * Referenced by: '<S32>/Limit Acceleration'
                                        */
  real_T LimitAcceleration_IC;         /* Expression: 0
                                        * Referenced by: '<S32>/Limit Acceleration'
                                        */
  real_T ResetEncoderX_P1_Size[2];  /* Computed Parameter: ResetEncoderX_P1_Size
                                     * Referenced by: '<S20>/Reset EncoderX'
                                     */
  real_T ResetEncoderX_P1;             /* Expression: link_id
                                        * Referenced by: '<S20>/Reset EncoderX'
                                        */
  real_T ResetEncoderX_P2_Size[2];  /* Computed Parameter: ResetEncoderX_P2_Size
                                     * Referenced by: '<S20>/Reset EncoderX'
                                     */
  real_T ResetEncoderX_P2;             /* Expression: chan_id
                                        * Referenced by: '<S20>/Reset EncoderX'
                                        */
  real_T LimitSpeed_RisingLim_d;       /* Expression: 0.4
                                        * Referenced by: '<S39>/Limit Speed'
                                        */
  real_T LimitSpeed_FallingLim_j;      /* Expression: -0.4
                                        * Referenced by: '<S39>/Limit Speed'
                                        */
  real_T LimitSpeed_IC_g;              /* Expression: 0
                                        * Referenced by: '<S39>/Limit Speed'
                                        */
  real_T TSamp_WtEt_h;                 /* Computed Parameter: TSamp_WtEt_h
                                        * Referenced by: '<S45>/TSamp'
                                        */
  real_T LimitAcceleration_RisingLim_c;/* Expression: 0.5
                                        * Referenced by: '<S39>/Limit Acceleration'
                                        */
  real_T LimitAcceleration_FallingLim_m;/* Expression: -0.5
                                         * Referenced by: '<S39>/Limit Acceleration'
                                         */
  real_T LimitAcceleration_IC_f;       /* Expression: 0
                                        * Referenced by: '<S39>/Limit Acceleration'
                                        */
  real_T ResetEncoderX_P1_Size_k[2];
                                  /* Computed Parameter: ResetEncoderX_P1_Size_k
                                   * Referenced by: '<S21>/Reset EncoderX'
                                   */
  real_T ResetEncoderX_P1_j;           /* Expression: link_id
                                        * Referenced by: '<S21>/Reset EncoderX'
                                        */
  real_T ResetEncoderX_P2_Size_k[2];
                                  /* Computed Parameter: ResetEncoderX_P2_Size_k
                                   * Referenced by: '<S21>/Reset EncoderX'
                                   */
  real_T ResetEncoderX_P2_j;           /* Expression: chan_id
                                        * Referenced by: '<S21>/Reset EncoderX'
                                        */
  real_T LimitSpeed_RisingLim_m;       /* Expression: 0.2
                                        * Referenced by: '<S49>/Limit Speed'
                                        */
  real_T LimitSpeed_FallingLim_jw;     /* Expression: -0.2
                                        * Referenced by: '<S49>/Limit Speed'
                                        */
  real_T LimitSpeed_IC_j;              /* Expression: 0
                                        * Referenced by: '<S49>/Limit Speed'
                                        */
  real_T TSamp_WtEt_i;                 /* Computed Parameter: TSamp_WtEt_i
                                        * Referenced by: '<S56>/TSamp'
                                        */
  real_T LimitAcceleration_RisingLim_j;/* Expression: 0.5
                                        * Referenced by: '<S49>/Limit Acceleration'
                                        */
  real_T LimitAcceleration_FallingLim_h;/* Expression: -0.5
                                         * Referenced by: '<S49>/Limit Acceleration'
                                         */
  real_T LimitAcceleration_IC_j;       /* Expression: 0
                                        * Referenced by: '<S49>/Limit Acceleration'
                                        */
  real_T ResetEncoderConv_P1_Size[2];
                                 /* Computed Parameter: ResetEncoderConv_P1_Size
                                  * Referenced by: '<S22>/Reset EncoderConv'
                                  */
  real_T ResetEncoderConv_P1;          /* Expression: link_id
                                        * Referenced by: '<S22>/Reset EncoderConv'
                                        */
  real_T ResetEncoderConv_P2_Size[2];
                                 /* Computed Parameter: ResetEncoderConv_P2_Size
                                  * Referenced by: '<S22>/Reset EncoderConv'
                                  */
  real_T ResetEncoderConv_P2;          /* Expression: chan_id
                                        * Referenced by: '<S22>/Reset EncoderConv'
                                        */
  char_T LEDRing_Y0[256];              /* Computed Parameter: LEDRing_Y0
                                        * Referenced by: '<S1>/LED Ring'
                                        */
  char_T Colorspecifiedin8hexdigitswwrrg[256];
                          /* Computed Parameter: Colorspecifiedin8hexdigitswwrrg
                           * Referenced by: '<S1>/Color; specified in 8 hex digits, wwrrggbb'
                           */
  char_T Defaultobjectdetectioncolorsett[256];
                          /* Computed Parameter: Defaultobjectdetectioncolorsett
                           * Referenced by: '<S1>/Default object detection color; set to white'
                           */
  char_T StringConstant3_String[256];
                                   /* Computed Parameter: StringConstant3_String
                                    * Referenced by: '<S27>/String Constant3'
                                    */
  char_T StringConstant1_String[256];
                                   /* Computed Parameter: StringConstant1_String
                                    * Referenced by: '<S27>/String Constant1'
                                    */
  char_T StringConstant4_String[256];
                                   /* Computed Parameter: StringConstant4_String
                                    * Referenced by: '<S25>/String Constant4'
                                    */
  char_T ReadyGreen_String[256];       /* Computed Parameter: ReadyGreen_String
                                        * Referenced by: '<S11>/Ready Green'
                                        */
  char_T AirbagRed_String[256];        /* Computed Parameter: AirbagRed_String
                                        * Referenced by: '<S11>/Airbag Red'
                                        */
  char_T HomingOrange_String[256];    /* Computed Parameter: HomingOrange_String
                                       * Referenced by: '<S11>/Homing Orange'
                                       */
  char_T Delay_InitialCondition[256];
                                   /* Computed Parameter: Delay_InitialCondition
                                    * Referenced by: '<S24>/Delay'
                                    */
  uint8_T ManualSwitch2_CurrentSetting;
                             /* Computed Parameter: ManualSwitch2_CurrentSetting
                              * Referenced by: '<S1>/Manual Switch2'
                              */
  uint8_T ManualSwitch_CurrentSetting;
                              /* Computed Parameter: ManualSwitch_CurrentSetting
                               * Referenced by: '<S1>/Manual Switch'
                               */
  uint8_T ManualSwitch1_CurrentSetting;
                             /* Computed Parameter: ManualSwitch1_CurrentSetting
                              * Referenced by: '<S1>/Manual Switch1'
                              */
  uint8_T Constant1_Value_b;           /* Computed Parameter: Constant1_Value_b
                                        * Referenced by: '<S26>/Constant1'
                                        */
  uint8_T Constant_Value_c;            /* Computed Parameter: Constant_Value_c
                                        * Referenced by: '<S27>/Constant'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Robot_Student_2021_v1_T {
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;

  /*
   * NonInlinedSFcns:
   * The following substructure contains information regarding
   * non-inlined s-functions used in the model.
   */
  struct {
    RTWSfcnInfo sfcnInfo;
    time_T *taskTimePtrs[2];
    SimStruct childSFunctions[29];
    SimStruct *childSFunctionPtrs[29];
    struct _ssBlkInfo2 blkInfo2[29];
    struct _ssSFcnModelMethods2 methods2[29];
    struct _ssSFcnModelMethods3 methods3[29];
    struct _ssSFcnModelMethods4 methods4[29];
    struct _ssStatesInfo2 statesInfo2[29];
    ssPeriodicStatesInfo periodicStatesInfo[29];
    struct _ssPortInfo2 inputOutputPortInfo2[29];
    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn0;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn1;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn2;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[2];
      mxArray *params[2];
    } Sfcn3;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[3];
      struct _ssInPortUnit inputPortUnits[3];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[3];
      real_T const *UPtrs0[2];
      real_T const *UPtrs1[2];
      real_T const *UPtrs2[8];
      struct _ssPortOutputs outputPortInfo[3];
      struct _ssOutPortUnit outputPortUnits[3];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[3];
      uint_T attribs[1];
      mxArray *params[1];
    } Sfcn4;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[3];
      struct _ssInPortUnit inputPortUnits[3];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[3];
      real_T const *UPtrs0[2];
      real_T const *UPtrs1[2];
      real_T const *UPtrs2[8];
      struct _ssPortOutputs outputPortInfo[3];
      struct _ssOutPortUnit outputPortUnits[3];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[3];
      uint_T attribs[1];
      mxArray *params[1];
    } Sfcn5;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[3];
      struct _ssInPortUnit inputPortUnits[3];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[3];
      real_T const *UPtrs0[2];
      real_T const *UPtrs1[2];
      real_T const *UPtrs2[8];
      struct _ssPortOutputs outputPortInfo[3];
      struct _ssOutPortUnit outputPortUnits[3];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[3];
      uint_T attribs[1];
      mxArray *params[1];
    } Sfcn6;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn7;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn8;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn9;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn10;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn11;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn12;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn13;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn14;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn15;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn16;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn17;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn18;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn19;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn20;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn21;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn22;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[2];
      mxArray *params[2];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn23;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn24;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      uint_T attribs[2];
      mxArray *params[2];
    } Sfcn25;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      uint_T attribs[2];
      mxArray *params[2];
    } Sfcn26;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      uint_T attribs[2];
      mxArray *params[2];
    } Sfcn27;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      real_T const *UPtrs0[1];
      uint_T attribs[2];
      mxArray *params[2];
    } Sfcn28;
  } NonInlinedSFcns;

  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
    uint32_T options;
    int_T numContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T stepSize1;
    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[2];
    time_T offsetTimesArray[2];
    int_T sampleTimeTaskIDArray[2];
    int_T sampleHitArray[2];
    int_T perTaskSampleHitsArray[4];
    time_T tArray[2];
  } Timing;
};

/* Block parameters (default storage) */
extern P_Robot_Student_2021_v1_T Robot_Student_2021_v1_P;

/* Block signals (default storage) */
extern B_Robot_Student_2021_v1_T Robot_Student_2021_v1_B;

/* Block states (default storage) */
extern DW_Robot_Student_2021_v1_T Robot_Student_2021_v1_DW;

/* External data declarations for dependent source files */
extern const real_T Robot_Student_2021_v1_RGND;/* real_T ground */

/* Model entry point functions */
extern void Robot_Student_2021_v1_initialize(void);
extern void Robot_Student_2021_v1_step(void);
extern void Robot_Student_2021_v1_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Robot_Student_2021_v1_T *const Robot_Student_2021_v1_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S3>/Signal Conversion2' : Unused code path elimination
 * Block '<S3>/Signal Conversion3' : Unused code path elimination
 * Block '<S3>/Signal Conversion4' : Unused code path elimination
 * Block '<S35>/Data Type Duplicate' : Unused code path elimination
 * Block '<S45>/Data Type Duplicate' : Unused code path elimination
 * Block '<S56>/Data Type Duplicate' : Unused code path elimination
 * Block '<S10>/Signal Conversion' : Eliminate redundant signal conversion block
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Robot_Student_2021_v1'
 * '<S1>'   : 'Robot_Student_2021_v1/Controller'
 * '<S2>'   : 'Robot_Student_2021_v1/RobotArm'
 * '<S3>'   : 'Robot_Student_2021_v1/Controller/Camera'
 * '<S4>'   : 'Robot_Student_2021_v1/Controller/Controller Conveyor'
 * '<S5>'   : 'Robot_Student_2021_v1/Controller/Controller R'
 * '<S6>'   : 'Robot_Student_2021_v1/Controller/Controller Vacuum'
 * '<S7>'   : 'Robot_Student_2021_v1/Controller/Controller X'
 * '<S8>'   : 'Robot_Student_2021_v1/Controller/Controller Z'
 * '<S9>'   : 'Robot_Student_2021_v1/Controller/Stateflow '
 * '<S10>'  : 'Robot_Student_2021_v1/RobotArm/IO'
 * '<S11>'  : 'Robot_Student_2021_v1/RobotArm/Supervisor'
 * '<S12>'  : 'Robot_Student_2021_v1/RobotArm/IO/Ebox'
 * '<S13>'  : 'Robot_Student_2021_v1/RobotArm/IO/Ebox1'
 * '<S14>'  : 'Robot_Student_2021_v1/RobotArm/IO/Ebox2'
 * '<S15>'  : 'Robot_Student_2021_v1/RobotArm/IO/Supervisor'
 * '<S16>'  : 'Robot_Student_2021_v1/RobotArm/Supervisor/Compare To Constant'
 * '<S17>'  : 'Robot_Student_2021_v1/RobotArm/Supervisor/HomingBusyCheck'
 * '<S18>'  : 'Robot_Student_2021_v1/RobotArm/Supervisor/Subsystem'
 * '<S19>'  : 'Robot_Student_2021_v1/RobotArm/Supervisor/Supervisory Controller R'
 * '<S20>'  : 'Robot_Student_2021_v1/RobotArm/Supervisor/Supervisory Controller X'
 * '<S21>'  : 'Robot_Student_2021_v1/RobotArm/Supervisor/Supervisory Controller Z'
 * '<S22>'  : 'Robot_Student_2021_v1/RobotArm/Supervisor/Supervisory Conveyor1'
 * '<S23>'  : 'Robot_Student_2021_v1/RobotArm/Supervisor/Subsystem/LED Ring'
 * '<S24>'  : 'Robot_Student_2021_v1/RobotArm/Supervisor/Subsystem/LED Ring/Subsystem'
 * '<S25>'  : 'Robot_Student_2021_v1/RobotArm/Supervisor/Subsystem/LED Ring/Subsystem3'
 * '<S26>'  : 'Robot_Student_2021_v1/RobotArm/Supervisor/Subsystem/LED Ring/Subsystem3/If Action Subsystem'
 * '<S27>'  : 'Robot_Student_2021_v1/RobotArm/Supervisor/Subsystem/LED Ring/Subsystem3/If Action Subsystem1'
 * '<S28>'  : 'Robot_Student_2021_v1/RobotArm/Supervisor/Supervisory Controller R/ '
 * '<S29>'  : 'Robot_Student_2021_v1/RobotArm/Supervisor/Supervisory Controller R/  '
 * '<S30>'  : 'Robot_Student_2021_v1/RobotArm/Supervisor/Supervisory Controller R/   '
 * '<S31>'  : 'Robot_Student_2021_v1/RobotArm/Supervisor/Supervisory Controller R/Angle2Z'
 * '<S32>'  : 'Robot_Student_2021_v1/RobotArm/Supervisor/Supervisory Controller R/Point-to-point trajectory'
 * '<S33>'  : 'Robot_Student_2021_v1/RobotArm/Supervisor/Supervisory Controller R/Selector1'
 * '<S34>'  : 'Robot_Student_2021_v1/RobotArm/Supervisor/Supervisory Controller R/Supervisor'
 * '<S35>'  : 'Robot_Student_2021_v1/RobotArm/Supervisor/Supervisory Controller R/Point-to-point trajectory/Discrete Derivative'
 * '<S36>'  : 'Robot_Student_2021_v1/RobotArm/Supervisor/Supervisory Controller X/Controller X1'
 * '<S37>'  : 'Robot_Student_2021_v1/RobotArm/Supervisor/Supervisory Controller X/Controller X2'
 * '<S38>'  : 'Robot_Student_2021_v1/RobotArm/Supervisor/Supervisory Controller X/Feedforward X'
 * '<S39>'  : 'Robot_Student_2021_v1/RobotArm/Supervisor/Supervisory Controller X/Point-to-point trajectory'
 * '<S40>'  : 'Robot_Student_2021_v1/RobotArm/Supervisor/Supervisory Controller X/Selector'
 * '<S41>'  : 'Robot_Student_2021_v1/RobotArm/Supervisor/Supervisory Controller X/Selector1'
 * '<S42>'  : 'Robot_Student_2021_v1/RobotArm/Supervisor/Supervisory Controller X/Selector2'
 * '<S43>'  : 'Robot_Student_2021_v1/RobotArm/Supervisor/Supervisory Controller X/Selector3'
 * '<S44>'  : 'Robot_Student_2021_v1/RobotArm/Supervisor/Supervisory Controller X/Supervisor'
 * '<S45>'  : 'Robot_Student_2021_v1/RobotArm/Supervisor/Supervisory Controller X/Point-to-point trajectory/Discrete Derivative'
 * '<S46>'  : 'Robot_Student_2021_v1/RobotArm/Supervisor/Supervisory Controller Z/    '
 * '<S47>'  : 'Robot_Student_2021_v1/RobotArm/Supervisor/Supervisory Controller Z/     '
 * '<S48>'  : 'Robot_Student_2021_v1/RobotArm/Supervisor/Supervisory Controller Z/Angle2Z'
 * '<S49>'  : 'Robot_Student_2021_v1/RobotArm/Supervisor/Supervisory Controller Z/Point-to-point trajectory'
 * '<S50>'  : 'Robot_Student_2021_v1/RobotArm/Supervisor/Supervisory Controller Z/Selector'
 * '<S51>'  : 'Robot_Student_2021_v1/RobotArm/Supervisor/Supervisory Controller Z/Selector1'
 * '<S52>'  : 'Robot_Student_2021_v1/RobotArm/Supervisor/Supervisory Controller Z/Selector2'
 * '<S53>'  : 'Robot_Student_2021_v1/RobotArm/Supervisor/Supervisory Controller Z/Selector3'
 * '<S54>'  : 'Robot_Student_2021_v1/RobotArm/Supervisor/Supervisory Controller Z/Subsystem4'
 * '<S55>'  : 'Robot_Student_2021_v1/RobotArm/Supervisor/Supervisory Controller Z/Supervisor'
 * '<S56>'  : 'Robot_Student_2021_v1/RobotArm/Supervisor/Supervisory Controller Z/Point-to-point trajectory/Discrete Derivative'
 * '<S57>'  : 'Robot_Student_2021_v1/RobotArm/Supervisor/Supervisory Conveyor1/Controller Conveyor'
 * '<S58>'  : 'Robot_Student_2021_v1/RobotArm/Supervisor/Supervisory Conveyor1/Supervisor'
 */
#endif                                 /* RTW_HEADER_Robot_Student_2021_v1_h_ */
