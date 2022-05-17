/*
 * Robot_Student_2021_v1.c
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

#include "Robot_Student_2021_v1.h"
#include "Robot_Student_2021_v1_private.h"
#include "Robot_Student_2021_v1_dt.h"

/* Named constants for Chart: '<S1>/Stateflow ' */
#define Robot_Student_2021_IN_Belt_Home (1U)
#define Robot_Student_2021_v_CALL_EVENT (-1)
#define Robot_Student_2021_v_IN_Move_XY (1U)
#define Robot_Student_2021_v_IN_Seeking (1U)
#define Robot_Student_202_IN_Start_Home (2U)
#define Robot_Student_202_IN_Vacuum_Off (1U)
#define Robot_Student_20_IN_WaitSeeking (2U)
#define Robot_Student_20_event_VacuumOn (6)
#define Robot_Student_2_event_ScanAgain (5)
#define Robot_Student__event_GetProduct (0)

/* Named constants for Chart: '<S19>/Supervisor' */
#define Robot_Stu_IN_EnableRunAndSafety (6U)
#define Robot_Student_2021_IN_RobotIsON (10U)
#define Robot_Student_2021__IN_MovetoX0 (8U)
#define Robot_Student_2021__IN_ResetEnc (9U)
#define Robot_Student_2021__IN_Waiting1 (14U)
#define Robot_Student_2021_v1_IN_Homing (7U)
#define Robot_Student_2021_v_IN_Waiting (13U)
#define Robot_Student_202_IN_AirbagLeft (2U)
#define Robot_Student_20_IN_AirbagLeft1 (3U)
#define Robot_Student_20_IN_WaitForRest (12U)
#define Robot_Student_IN_AirbagConveyor (1U)
#define Robot_Student_IN_CheckRobotIsON (4U)
#define Robot_Student_IN_DisableOutputs (5U)
#define Robot_Student_IN_STOPRobotIsOFF (11U)

/* Named constants for Chart: '<S20>/Supervisor' */
#define Robot_S_IN_EnableRunAndSafety_n (4U)
#define Robot_Stude_IN_DisableOutputs_n (3U)
#define Robot_Student_2021_IN_Waiting_o (9U)
#define Robot_Student_2021__IN_Homing_c (5U)
#define Robot_Student_202_IN_MovetoX0_i (6U)
#define Robot_Student_202_IN_ResetEnc_o (7U)
#define Robot_Student_202_IN_Waiting1_e (10U)
#define Robot_Student_20_IN_AirbagRight (2U)
#define Robot_Student_2_IN_AirbagLeft_h (1U)
#define Robot_Student__IN_WaitForRest_f (8U)

/* Named constants for Chart: '<S21>/Supervisor' */
#define Robot_S_IN_EnableRunAndSafety_g (5U)
#define Robot_Stude_IN_DisableOutputs_j (4U)
#define Robot_Student_2021_IN_AirbagTop (3U)
#define Robot_Student_2021_IN_Waiting_l (10U)
#define Robot_Student_2021__IN_Homing_l (6U)
#define Robot_Student_202_IN_AirbagDrop (2U)
#define Robot_Student_202_IN_MovetoX0_n (7U)
#define Robot_Student_202_IN_ResetEnc_f (8U)
#define Robot_Student_202_IN_Waiting1_p (11U)
#define Robot_Student__IN_WaitForRest_i (9U)

/* Named constants for Chart: '<S22>/Supervisor' */
#define Robot_S_IN_EnableRunAndSafety_e (2U)
#define Robot_Stude_IN_CheckRobotIsON_f (1U)
#define Robot_Student_2021__IN_Homing_e (3U)
#define Robot_Student_202_IN_MovetoX0_o (4U)
#define Robot_Student_202_IN_Waiting_ov (7U)
#define Robot_Student_20_IN_ResetEnc_ol (5U)
#define Robot_Student__IN_WaitForRest_o (6U)
#define Robot_Student_2021_v1_period   (0.00048828125)

const real_T Robot_Student_2021_v1_RGND = 0.0;/* real_T ground */

/* Block signals (default storage) */
B_Robot_Student_2021_v1_T Robot_Student_2021_v1_B;

/* Block states (default storage) */
DW_Robot_Student_2021_v1_T Robot_Student_2021_v1_DW;

/* Real-time model */
static RT_MODEL_Robot_Student_2021_v1_T Robot_Student_2021_v1_M_;
RT_MODEL_Robot_Student_2021_v1_T *const Robot_Student_2021_v1_M =
  &Robot_Student_2021_v1_M_;

/* Forward declaration for local functions */
static void Robot_Student__SystemCore_setup(codertarget_raspi_internal_SC_T *obj);

/* Forward declaration for local functions */
static void Robot__c3_Robot_Student_2021_v1(void);
static void Robot_Student__SystemCore_setup(codertarget_raspi_internal_SC_T *obj)
{
  MW_SCI_Parity_Type ParityValue;
  MW_SCI_StopBits_Type StopBitsValue;
  uint32_T RxPinLoc;
  uint32_T TxPinLoc;
  void* SCIModuleVoidPtr;
  int32_T i;
  char_T b_SCIModuleLoc[13];
  static const char_T tmp[12] = { '/', 'd', 'e', 'v', '/', 't', 't', 'y', 'A',
    'C', 'M', '0' };

  obj->isSetupComplete = false;
  obj->isInitialized = 1;
  RxPinLoc = MW_UNDEFINED_VALUE;
  TxPinLoc = MW_UNDEFINED_VALUE;
  for (i = 0; i < 12; i++) {
    b_SCIModuleLoc[i] = tmp[i];
  }

  b_SCIModuleLoc[12] = '\x00';
  SCIModuleVoidPtr = (void*)(&b_SCIModuleLoc[0]);
  obj->MW_SCIHANDLE = MW_SCI_Open(SCIModuleVoidPtr, true, RxPinLoc, TxPinLoc);
  MW_SCI_SetBaudrate(obj->MW_SCIHANDLE, 9600U);
  StopBitsValue = MW_SCI_STOPBITS_1;
  ParityValue = MW_SCI_PARITY_NONE;
  MW_SCI_SetFrameFormat(obj->MW_SCIHANDLE, 8, ParityValue, StopBitsValue);
  obj->isSetupComplete = true;
}

/*
 * Start for atomic system:
 *    synthesized block
 *    synthesized block
 */
void Robot_Studen_SerialWrite1_Start(DW_SerialWrite1_Robot_Student_T *localDW)
{
  /* Start for MATLABSystem: '<S26>/Serial Write1' */
  localDW->obj.isInitialized = 0;
  localDW->obj.matlabCodegenIsDeleted = false;
  localDW->objisempty = true;
  Robot_Student__SystemCore_setup(&localDW->obj);
}

/*
 * Output and update for atomic system:
 *    synthesized block
 *    synthesized block
 */
void Robot_Student_2021_SerialWrite1(const uint8_T rtu_0[32],
  DW_SerialWrite1_Robot_Student_T *localDW)
{
  uint8_T TxDataLocChar[32];

  /* MATLABSystem: '<S26>/Serial Write1' */
  memcpy((void *)&TxDataLocChar[0], (void *)&rtu_0[0], (uint32_T)((size_t)32 *
          sizeof(uint8_T)));
  MW_SCI_Transmit(localDW->obj.MW_SCIHANDLE, &TxDataLocChar[0], 32U);
}

/*
 * Termination for atomic system:
 *    synthesized block
 *    synthesized block
 */
void Robot_Student_SerialWrite1_Term(DW_SerialWrite1_Robot_Student_T *localDW)
{
  /* Terminate for MATLABSystem: '<S26>/Serial Write1' */
  if (!localDW->obj.matlabCodegenIsDeleted) {
    localDW->obj.matlabCodegenIsDeleted = true;
    if ((localDW->obj.isInitialized == 1) && localDW->obj.isSetupComplete) {
      MW_SCI_Close(localDW->obj.MW_SCIHANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S26>/Serial Write1' */
}

/*
 * Output and update for atomic system:
 *    '<S19>/Angle2Z'
 *    '<S21>/Angle2Z'
 */
void Robot_Student_2021_v1_Angle2Z(const real_T rtu_u[3],
  B_Angle2Z_Robot_Student_2021__T *localB)
{
  real_T b_a;
  real_T d12;
  real_T fx1;
  real_T fy1;
  real_T fy2;
  fx1 = cos(-rtu_u[1] + 1.5707963267948966) * 0.08;
  fy1 = sin(-rtu_u[1] + 1.5707963267948966) * 0.08;
  fy2 = sin(rtu_u[2] + 0.43633231299858238) * 0.13 + 0.165;
  d12 = cos(rtu_u[2] + 0.43633231299858238) * 0.13 - fx1;
  b_a = fy2 - fy1;
  d12 = sqrt(d12 * d12 + b_a * b_a);
  fx1 = sqrt((0.165 - fy1) * (0.165 - fy1) + fx1 * fx1);
  fy1 = d12 * d12;
  localB->y = (fy2 - sin(((3.1415926535897931 - acos(((fy1 +
    0.016900000000000002) - fx1 * fx1) / (2.0 * d12 * 0.13))) - acos(((fy1 +
    0.0144) - 0.016900000000000002) / (2.0 * d12 * 0.12))) - (rtu_u[2] +
    0.43633231299858238)) * 0.185) - 0.013;
}

real_T rt_urand_Upu32_Yd_f_pw_snf(uint32_T *u)
{
  uint32_T hi;
  uint32_T lo;

  /* Uniform random number generator (random number between 0 and 1)

     #define IA      16807                      magic multiplier = 7^5
     #define IM      2147483647                 modulus = 2^31-1
     #define IQ      127773                     IM div IA
     #define IR      2836                       IM modulo IA
     #define S       4.656612875245797e-10      reciprocal of 2^31-1
     test = IA * (seed % IQ) - IR * (seed/IQ)
     seed = test < 0 ? (test + IM) : test
     return (seed*S)
   */
  lo = *u % 127773U * 16807U;
  hi = *u / 127773U * 2836U;
  if (lo < hi) {
    *u = 2147483647U - (hi - lo);
  } else {
    *u = lo - hi;
  }

  return (real_T)*u * 4.6566128752457969E-10;
}

real_T rt_nrand_Upu32_Yd_f_pw_snf(uint32_T *u)
{
  real_T si;
  real_T sr;
  real_T y;

  /* Normal (Gaussian) random number generator */
  do {
    sr = 2.0 * rt_urand_Upu32_Yd_f_pw_snf(u) - 1.0;
    si = 2.0 * rt_urand_Upu32_Yd_f_pw_snf(u) - 1.0;
    si = sr * sr + si * si;
  } while (si > 1.0);

  y = sqrt(-2.0 * log(si) / si) * sr;
  return y;
}

/* Function for Chart: '<S1>/Stateflow ' */
static void Robot__c3_Robot_Student_2021_v1(void)
{
  int32_T c_previousEvent;
  if (Robot_Student_2021_v1_DW.is_active_Object_Detection != 0U) {
    switch (Robot_Student_2021_v1_DW.is_Object_Detection) {
     case Robot_Student_2021_v_IN_Seeking:
      break;

     case Robot_Student_20_IN_WaitSeeking:
      if (Robot_Student_2021_v1_DW.sfEvent_b == Robot_Student_2_event_ScanAgain)
      {
        Robot_Student_2021_v1_DW.is_Object_Detection =
          Robot_Student_2021_v_IN_Seeking;
      }
      break;

     default:
      /* Unreachable state, for coverage only */
      Robot_Student_2021_v1_DW.is_Object_Detection = 0U;
      break;
    }
  }

  if (Robot_Student_2021_v1_DW.is_active_Robot_Arm != 0U) {
    switch (Robot_Student_2021_v1_DW.is_Robot_Arm) {
     case Robot_Student_2021_v_IN_Move_XY:
      break;

     case Robot_Student_202_IN_Start_Home:
      if (Robot_Student_2021_v1_DW.sfEvent_b == Robot_Student__event_GetProduct)
      {
        Robot_Student_2021_v1_DW.is_Robot_Arm = Robot_Student_2021_v_IN_Move_XY;
        c_previousEvent = Robot_Student_2021_v1_DW.sfEvent_b;
        Robot_Student_2021_v1_DW.sfEvent_b = Robot_Student_20_event_VacuumOn;

        /* Chart: '<S1>/Stateflow ' */
        Robot__c3_Robot_Student_2021_v1();
        Robot_Student_2021_v1_DW.sfEvent_b = c_previousEvent;
      }
      break;

     default:
      /* Unreachable state, for coverage only */
      Robot_Student_2021_v1_DW.is_Robot_Arm = 0U;
      break;
    }
  }
}

/* Model step function */
void Robot_Student_2021_v1_step(void)
{
  {
    real_T *lastU;
    int32_T i;

    /* Reset subsysRan breadcrumbs */
    srClearBC(Robot_Student_2021_v1_DW.Controller_SubsysRanBC);

    /* Reset subsysRan breadcrumbs */
    srClearBC(Robot_Student_2021_v1_DW.IfActionSubsystem_SubsysRanBC);

    /* Reset subsysRan breadcrumbs */
    srClearBC(Robot_Student_2021_v1_DW.IfActionSubsystem1_SubsysRanBC);

    /* Reset subsysRan breadcrumbs */
    srClearBC(Robot_Student_2021_v1_DW.Subsystem3_SubsysRanBC);

    /* S-Function (ec_Supervisor): '<S15>/S-Function' */

    /* Level2 S-Function Block: '<S15>/S-Function' (ec_Supervisor) */
    {
      SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[3];
      sfcnOutputs(rts,0);
    }

    /* S-Function (ec_Ebox): '<S12>/ec_Ebox' */

    /* Level2 S-Function Block: '<S12>/ec_Ebox' (ec_Ebox) */
    {
      SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[4];
      sfcnOutputs(rts,0);
    }

    /* S-Function (ec_Ebox): '<S13>/ec_Ebox' */

    /* Level2 S-Function Block: '<S13>/ec_Ebox' (ec_Ebox) */
    {
      SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[5];
      sfcnOutputs(rts,0);
    }

    /* S-Function (ec_Ebox): '<S14>/ec_Ebox' */

    /* Level2 S-Function Block: '<S14>/ec_Ebox' (ec_Ebox) */
    {
      SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[6];
      sfcnOutputs(rts,0);
    }

    /* Switch: '<S10>/Homing Running Switch' */
    if (Robot_Student_2021_v1_B.ec_Ebox_o1_d[1] >=
        Robot_Student_2021_v1_P.HomingRunningSwitch_Threshold_d) {
      /* Switch: '<S10>/Homing Running Switch' incorporates:
       *  Gain: '<S10>/Gain'
       *  Gain: '<S10>/Gain1'
       *  Gain: '<S10>/Gain2'
       *  Gain: '<S10>/Gain5'
       */
      Robot_Student_2021_v1_B.HomingRunningSwitch[0] =
        Robot_Student_2021_v1_P.Gain_Gain_p *
        Robot_Student_2021_v1_B.ec_Ebox_o2[0] *
        Robot_Student_2021_v1_P.Gain5_Gain;
      Robot_Student_2021_v1_B.HomingRunningSwitch[1] =
        Robot_Student_2021_v1_P.Gain1_Gain_c *
        Robot_Student_2021_v1_B.ec_Ebox_o2[1] *
        Robot_Student_2021_v1_P.Gain5_Gain;
      Robot_Student_2021_v1_B.HomingRunningSwitch[2] =
        Robot_Student_2021_v1_P.Gain2_Gain *
        Robot_Student_2021_v1_B.ec_Ebox_o2_o[0] *
        Robot_Student_2021_v1_P.Gain5_Gain;
    } else {
      /* Switch: '<S10>/Homing Running Switch' incorporates:
       *  Gain: '<S10>/Gain'
       *  Gain: '<S10>/Gain1'
       *  Gain: '<S10>/Gain2'
       */
      Robot_Student_2021_v1_B.HomingRunningSwitch[0] =
        Robot_Student_2021_v1_P.Gain_Gain_p *
        Robot_Student_2021_v1_B.ec_Ebox_o2[0];
      Robot_Student_2021_v1_B.HomingRunningSwitch[1] =
        Robot_Student_2021_v1_P.Gain1_Gain_c *
        Robot_Student_2021_v1_B.ec_Ebox_o2[1];
      Robot_Student_2021_v1_B.HomingRunningSwitch[2] =
        Robot_Student_2021_v1_P.Gain2_Gain *
        Robot_Student_2021_v1_B.ec_Ebox_o2_o[0];
    }

    /* End of Switch: '<S10>/Homing Running Switch' */

    /* Gain: '<S10>/Gain3' */
    Robot_Student_2021_v1_B.Gain3 = Robot_Student_2021_v1_P.Gain3_Gain *
      Robot_Student_2021_v1_B.ec_Ebox_o2_o[1];

    /* Gain: '<S10>/Gain6' */
    Robot_Student_2021_v1_B.Gain6 = Robot_Student_2021_v1_P.Gain6_Gain *
      Robot_Student_2021_v1_B.ec_Ebox_o1_d[0];

    /* Constant: '<S32>/Constant1' */
    Robot_Student_2021_v1_B.Constant1 = Robot_Student_2021_v1_P.Constant1_Value;

    /* Sum: '<S19>/Sum' incorporates:
     *  DiscreteIntegrator: '<S19>/Discrete-Time Integrator'
     *  DiscreteIntegrator: '<S32>/Discrete-Time Integrator'
     */
    Robot_Student_2021_v1_B.Sum =
      Robot_Student_2021_v1_DW.DiscreteTimeIntegrator_DSTATE +
      Robot_Student_2021_v1_DW.DiscreteTimeIntegrator_DSTATE_n;

    /* Sum: '<S19>/Sum2' */
    Robot_Student_2021_v1_B.Sum3_fz = Robot_Student_2021_v1_B.Sum -
      Robot_Student_2021_v1_B.HomingRunningSwitch[0];

    /* RelationalOperator: '<S19>/Relational Operator' incorporates:
     *  Constant: '<S19>/Constant'
     */
    Robot_Student_2021_v1_B.RelationalOperator =
      (Robot_Student_2021_v1_B.Sum3_fz <=
       Robot_Student_2021_v1_P.Constant_Value_g);

    /* RelationalOperator: '<S16>/Compare' incorporates:
     *  Constant: '<S16>/Constant'
     *  UnitDelay: '<S11>/Unit Delay'
     */
    Robot_Student_2021_v1_B.Compare = (Robot_Student_2021_v1_DW.UnitDelay_DSTATE
      == Robot_Student_2021_v1_P.CompareToConstant_const);

    /* MATLAB Function: '<S19>/Angle2Z' */
    Robot_Student_2021_v1_Angle2Z(Robot_Student_2021_v1_B.HomingRunningSwitch,
      &Robot_Student_2021_v1_B.sf_Angle2Z);

    /* Constant: '<S11>/set_robot_calibration_r' */
    Robot_Student_2021_v1_B.set_robot_calibration_r =
      Robot_Student_2021_v1_P.set_robot_calibration_r_Value;

    /* Chart: '<S19>/Supervisor' */
    if (Robot_Student_2021_v1_DW.temporalCounter_i1_p < 8191U) {
      Robot_Student_2021_v1_DW.temporalCounter_i1_p++;
    }

    Robot_Student_2021_v1_DW.sfEvent_f = Robot_Student_2021_v_CALL_EVENT;
    if (Robot_Student_2021_v1_DW.is_active_c5_Robot_Student_2021 == 0U) {
      Robot_Student_2021_v1_DW.is_active_c5_Robot_Student_2021 = 1U;
      Robot_Student_2021_v1_DW.is_c5_Robot_Student_2021_v1 =
        Robot_Student_2021_v_IN_Waiting;
      Robot_Student_2021_v1_DW.temporalCounter_i1_p = 0U;

      /* Homing has to wait for 3 sec
         as the new arm gets the 5V enable signal
         after pressing start to avoid moving to X0 too
         early */
      Robot_Student_2021_v1_B.Ready_n = 0.0;
      Robot_Student_2021_v1_B.toPoint_i = 0.0;
      Robot_Student_2021_v1_B.homingBusy_n = 1.0;
      Robot_Student_2021_v1_B.jogSpeed_p = -0.001;
      Robot_Student_2021_v1_B.homeControllerEnabled_i = 0.01;
    } else {
      switch (Robot_Student_2021_v1_DW.is_c5_Robot_Student_2021_v1) {
       case Robot_Student_IN_AirbagConveyor:
        Robot_Student_2021_v1_B.airBagEnabled_ab = 1.0;
        if (Robot_Student_2021_v1_DW.temporalCounter_i1_p >= 6144U) {
          Robot_Student_2021_v1_DW.is_c5_Robot_Student_2021_v1 =
            Robot_Student_IN_DisableOutputs;
          Robot_Student_2021_v1_B.controlEnabled_e = 0.0;
          Robot_Student_2021_v1_B.StopSim_n = 1.0;
        }
        break;

       case Robot_Student_202_IN_AirbagLeft:
        Robot_Student_2021_v1_B.airBagEnabled_ab = 1.0;
        if (Robot_Student_2021_v1_DW.temporalCounter_i1_p >= 6144U) {
          Robot_Student_2021_v1_DW.is_c5_Robot_Student_2021_v1 =
            Robot_Student_IN_DisableOutputs;
          Robot_Student_2021_v1_B.controlEnabled_e = 0.0;
          Robot_Student_2021_v1_B.StopSim_n = 1.0;
        }
        break;

       case Robot_Student_20_IN_AirbagLeft1:
        Robot_Student_2021_v1_B.airBagEnabled_ab = 1.0;
        if (Robot_Student_2021_v1_DW.temporalCounter_i1_p >= 6144U) {
          Robot_Student_2021_v1_DW.is_c5_Robot_Student_2021_v1 =
            Robot_Student_IN_DisableOutputs;
          Robot_Student_2021_v1_B.controlEnabled_e = 0.0;
          Robot_Student_2021_v1_B.StopSim_n = 1.0;
        }
        break;

       case Robot_Student_IN_CheckRobotIsON:
        if (Robot_Student_2021_v1_B.HomingRunningSwitch[0] < -3.0) {
          Robot_Student_2021_v1_DW.is_c5_Robot_Student_2021_v1 =
            Robot_Student_IN_STOPRobotIsOFF;
          Robot_Student_2021_v1_B.StopSim_n = 1.0;
        } else {
          Robot_Student_2021_v1_DW.is_c5_Robot_Student_2021_v1 =
            Robot_Student_2021_IN_RobotIsON;
          Robot_Student_2021_v1_DW.temporalCounter_i1_p = 0U;
        }
        break;

       case Robot_Student_IN_DisableOutputs:
        Robot_Student_2021_v1_B.controlEnabled_e = 0.0;
        Robot_Student_2021_v1_B.StopSim_n = 1.0;
        break;

       case Robot_Stu_IN_EnableRunAndSafety:
        Robot_Student_2021_v1_B.resetEnc_l = 0.0;
        if (Robot_Student_2021_v1_B.HomingRunningSwitch[0] > 2.5) {
          Robot_Student_2021_v1_DW.is_c5_Robot_Student_2021_v1 =
            Robot_Student_20_IN_AirbagLeft1;
          Robot_Student_2021_v1_DW.temporalCounter_i1_p = 0U;
          Robot_Student_2021_v1_DW.currentcarPos_k =
            Robot_Student_2021_v1_B.HomingRunningSwitch[0];
          Robot_Student_2021_v1_B.airBagEnabled_ab = 1.0;
          Robot_Student_2021_v1_B.airBagRef_pn =
            Robot_Student_2021_v1_DW.currentcarPos_k - 0.02;
        } else if (Robot_Student_2021_v1_B.HomingRunningSwitch[0] < -1.0) {
          Robot_Student_2021_v1_DW.is_c5_Robot_Student_2021_v1 =
            Robot_Student_202_IN_AirbagLeft;
          Robot_Student_2021_v1_DW.temporalCounter_i1_p = 0U;
          Robot_Student_2021_v1_DW.currentcarPos_k =
            Robot_Student_2021_v1_B.HomingRunningSwitch[0];
          Robot_Student_2021_v1_B.airBagEnabled_ab = 1.0;
          Robot_Student_2021_v1_B.airBagRef_pn =
            Robot_Student_2021_v1_DW.currentcarPos_k + 0.02;
        } else if ((Robot_Student_2021_v1_B.sf_Angle2Z.y < -0.04) &&
                   (Robot_Student_2021_v1_B.HomingRunningSwitch[0] < 1.3)) {
          Robot_Student_2021_v1_DW.is_c5_Robot_Student_2021_v1 =
            Robot_Student_IN_AirbagConveyor;
          Robot_Student_2021_v1_DW.temporalCounter_i1_p = 0U;
          Robot_Student_2021_v1_DW.currentcarPos_k =
            Robot_Student_2021_v1_B.HomingRunningSwitch[0];
          Robot_Student_2021_v1_B.airBagEnabled_ab = 1.0;
          Robot_Student_2021_v1_B.airBagRef_pn =
            Robot_Student_2021_v1_DW.currentcarPos_k + 0.02;
        }
        break;

       case Robot_Student_2021_v1_IN_Homing:
        /* Transition if homeswitch becomes high */
        if (Robot_Student_2021_v1_B.RelationalOperator) {
          Robot_Student_2021_v1_DW.is_c5_Robot_Student_2021_v1 =
            Robot_Student_2021__IN_MovetoX0;
          Robot_Student_2021_v1_DW.temporalCounter_i1_p = 0U;
          Robot_Student_2021_v1_B.jogSpeed_p = 0.0;
          Robot_Student_2021_v1_B.toPoint_i =
            Robot_Student_2021_v1_B.set_robot_calibration_r;
        }
        break;

       case Robot_Student_2021__IN_MovetoX0:
        /* Allow time for moving */
        if (Robot_Student_2021_v1_DW.temporalCounter_i1_p >= 6144U) {
          Robot_Student_2021_v1_DW.is_c5_Robot_Student_2021_v1 =
            Robot_Student_IN_CheckRobotIsON;
        }
        break;

       case Robot_Student_2021__IN_ResetEnc:
        Robot_Student_2021_v1_B.resetEnc_l = 1.0;
        if (Robot_Student_2021_v1_DW.temporalCounter_i1_p >= 2048U) {
          Robot_Student_2021_v1_DW.is_c5_Robot_Student_2021_v1 =
            Robot_Stu_IN_EnableRunAndSafety;
          Robot_Student_2021_v1_B.resetEnc_l = 0.0;
          Robot_Student_2021_v1_B.homingBusy_n = 0.0;
        }
        break;

       case Robot_Student_2021_IN_RobotIsON:
        if (Robot_Student_2021_v1_DW.temporalCounter_i1_p >= 2048U) {
          Robot_Student_2021_v1_DW.is_c5_Robot_Student_2021_v1 =
            Robot_Student_20_IN_WaitForRest;
          Robot_Student_2021_v1_B.Ready_n = 1.0;
        }
        break;

       case Robot_Student_IN_STOPRobotIsOFF:
        Robot_Student_2021_v1_B.StopSim_n = 1.0;
        break;

       case Robot_Student_20_IN_WaitForRest:
        if (Robot_Student_2021_v1_B.Compare) {
          Robot_Student_2021_v1_DW.is_c5_Robot_Student_2021_v1 =
            Robot_Student_2021__IN_ResetEnc;
          Robot_Student_2021_v1_DW.temporalCounter_i1_p = 0U;
          Robot_Student_2021_v1_B.homingBusy_n = 100.0;
          Robot_Student_2021_v1_B.resetEnc_l = 1.0;
          Robot_Student_2021_v1_B.homeControllerEnabled_i = 0.0;
        }
        break;

       case Robot_Student_2021_v_IN_Waiting:
        if (Robot_Student_2021_v1_DW.temporalCounter_i1_p >= 2048U) {
          Robot_Student_2021_v1_DW.is_c5_Robot_Student_2021_v1 =
            Robot_Student_2021__IN_Waiting1;
          Robot_Student_2021_v1_DW.temporalCounter_i1_p = 0U;

          /* Homing has to wait for 3 sec
             as the new arm gets the 5V enable signal
             after pressing start to avoid moving to X0 too
             early */
          Robot_Student_2021_v1_B.Ready_n = 0.0;
          Robot_Student_2021_v1_B.toPoint_i = 0.0;
          Robot_Student_2021_v1_B.homingBusy_n = 1.0;
          Robot_Student_2021_v1_B.jogSpeed_p = 0.0;
          Robot_Student_2021_v1_B.homeControllerEnabled_i = 1.0;
        } else {
          /* Homing has to wait for 3 sec
             as the new arm gets the 5V enable signal
             after pressing start to avoid moving to X0 too
             early */
          Robot_Student_2021_v1_B.Ready_n = 0.0;
          Robot_Student_2021_v1_B.toPoint_i = 0.0;
          Robot_Student_2021_v1_B.homingBusy_n = 1.0;
          Robot_Student_2021_v1_B.jogSpeed_p = -0.001;
          Robot_Student_2021_v1_B.homeControllerEnabled_i = 0.01;
        }
        break;

       default:
        /* case IN_Waiting1: */
        if (Robot_Student_2021_v1_DW.temporalCounter_i1_p >= 6144U) {
          Robot_Student_2021_v1_DW.is_c5_Robot_Student_2021_v1 =
            Robot_Student_2021_v1_IN_Homing;

          /* Set jog speed and homing state */
          Robot_Student_2021_v1_B.Ready_n = 0.0;
          Robot_Student_2021_v1_B.toPoint_i = 0.0;
          Robot_Student_2021_v1_B.homingBusy_n = 1.0;
          Robot_Student_2021_v1_B.jogSpeed_p = -0.4;
          Robot_Student_2021_v1_B.homeControllerEnabled_i = 1.0;
        } else {
          /* Homing has to wait for 3 sec
             as the new arm gets the 5V enable signal
             after pressing start to avoid moving to X0 too
             early */
          Robot_Student_2021_v1_B.Ready_n = 0.0;
          Robot_Student_2021_v1_B.toPoint_i = 0.0;
          Robot_Student_2021_v1_B.homingBusy_n = 1.0;
          Robot_Student_2021_v1_B.jogSpeed_p = 0.0;
          Robot_Student_2021_v1_B.homeControllerEnabled_i = 1.0;
        }
        break;
      }
    }

    /* End of Chart: '<S19>/Supervisor' */

    /* Constant: '<S39>/Constant1' */
    Robot_Student_2021_v1_B.Constant1_c =
      Robot_Student_2021_v1_P.Constant1_Value_c;

    /* Sum: '<S20>/Sum' incorporates:
     *  DiscreteIntegrator: '<S20>/Discrete-Time Integrator'
     *  DiscreteIntegrator: '<S39>/Discrete-Time Integrator'
     */
    Robot_Student_2021_v1_B.Sum_a =
      Robot_Student_2021_v1_DW.DiscreteTimeIntegrator_DSTATE_p +
      Robot_Student_2021_v1_DW.DiscreteTimeIntegrator_DSTAT_pn;

    /* Sum: '<S20>/Sum2' */
    Robot_Student_2021_v1_B.Sum4_k = Robot_Student_2021_v1_B.Sum_a -
      Robot_Student_2021_v1_B.HomingRunningSwitch[1];

    /* RelationalOperator: '<S20>/Relational Operator' incorporates:
     *  Constant: '<S20>/Constant'
     */
    Robot_Student_2021_v1_B.RelationalOperator_o =
      (Robot_Student_2021_v1_B.Sum4_k <=
       Robot_Student_2021_v1_P.Constant_Value_n);

    /* Constant: '<S11>/set_robot_calibration_x' */
    Robot_Student_2021_v1_B.set_robot_calibration_x =
      Robot_Student_2021_v1_P.set_robot_calibration_x_Value;

    /* Chart: '<S20>/Supervisor' */
    if (Robot_Student_2021_v1_DW.temporalCounter_i1_a < 8191U) {
      Robot_Student_2021_v1_DW.temporalCounter_i1_a++;
    }

    Robot_Student_2021_v1_DW.sfEvent_j = Robot_Student_2021_v_CALL_EVENT;
    if (Robot_Student_2021_v1_DW.is_active_c6_Robot_Student_2021 == 0U) {
      Robot_Student_2021_v1_DW.is_active_c6_Robot_Student_2021 = 1U;
      Robot_Student_2021_v1_DW.is_c6_Robot_Student_2021_v1 =
        Robot_Student_2021_IN_Waiting_o;
      Robot_Student_2021_v1_DW.temporalCounter_i1_a = 0U;

      /* Homing has to wait for 3 sec
         as the new arm gets the 5V enable signal
         after pressing start to avoid moving to X0 too
         early */
      Robot_Student_2021_v1_B.Ready_l = 0.0;
      Robot_Student_2021_v1_B.toPoint_h = 0.0;
      Robot_Student_2021_v1_B.homingBusy_d = 1.0;
      Robot_Student_2021_v1_B.jogSpeed_o = -0.001;
      Robot_Student_2021_v1_B.homeControllerEnabled_f = 0.01;
    } else {
      switch (Robot_Student_2021_v1_DW.is_c6_Robot_Student_2021_v1) {
       case Robot_Student_2_IN_AirbagLeft_h:
        Robot_Student_2021_v1_B.airBagEnabled_a = 1.0;
        if (Robot_Student_2021_v1_DW.temporalCounter_i1_a >= 6144U) {
          Robot_Student_2021_v1_DW.is_c6_Robot_Student_2021_v1 =
            Robot_Stude_IN_DisableOutputs_n;
          Robot_Student_2021_v1_B.controlEnabled_b = 0.0;
          Robot_Student_2021_v1_B.StopSim_p = 1.0;
        }
        break;

       case Robot_Student_20_IN_AirbagRight:
        Robot_Student_2021_v1_B.airBagEnabled_a = 1.0;
        if (Robot_Student_2021_v1_DW.temporalCounter_i1_a >= 6144U) {
          Robot_Student_2021_v1_DW.is_c6_Robot_Student_2021_v1 =
            Robot_Stude_IN_DisableOutputs_n;
          Robot_Student_2021_v1_B.controlEnabled_b = 0.0;
          Robot_Student_2021_v1_B.StopSim_p = 1.0;
        }
        break;

       case Robot_Stude_IN_DisableOutputs_n:
        Robot_Student_2021_v1_B.controlEnabled_b = 0.0;
        Robot_Student_2021_v1_B.StopSim_p = 1.0;
        break;

       case Robot_S_IN_EnableRunAndSafety_n:
        Robot_Student_2021_v1_B.resetEnc_n = 0.0;
        if (Robot_Student_2021_v1_B.HomingRunningSwitch[1] < -0.5) {
          Robot_Student_2021_v1_DW.is_c6_Robot_Student_2021_v1 =
            Robot_Student_2_IN_AirbagLeft_h;
          Robot_Student_2021_v1_DW.temporalCounter_i1_a = 0U;
          Robot_Student_2021_v1_DW.currentcarPos_f =
            Robot_Student_2021_v1_B.HomingRunningSwitch[1];
          Robot_Student_2021_v1_B.airBagEnabled_a = 1.0;
          Robot_Student_2021_v1_B.airBagRef_p =
            Robot_Student_2021_v1_DW.currentcarPos_f + 0.02;
        } else if (Robot_Student_2021_v1_B.HomingRunningSwitch[1] > 0.7) {
          Robot_Student_2021_v1_DW.is_c6_Robot_Student_2021_v1 =
            Robot_Student_20_IN_AirbagRight;
          Robot_Student_2021_v1_DW.temporalCounter_i1_a = 0U;
          Robot_Student_2021_v1_DW.currentcarPos_f =
            Robot_Student_2021_v1_B.HomingRunningSwitch[1];
          Robot_Student_2021_v1_B.airBagEnabled_a = 1.0;
          Robot_Student_2021_v1_B.airBagRef_p =
            Robot_Student_2021_v1_DW.currentcarPos_f - 0.02;
        }
        break;

       case Robot_Student_2021__IN_Homing_c:
        /* Transition if homeswitch becomes high */
        if (Robot_Student_2021_v1_B.RelationalOperator_o) {
          Robot_Student_2021_v1_DW.is_c6_Robot_Student_2021_v1 =
            Robot_Student_202_IN_MovetoX0_i;
          Robot_Student_2021_v1_DW.temporalCounter_i1_a = 0U;
          Robot_Student_2021_v1_B.jogSpeed_o = 0.0;
          Robot_Student_2021_v1_B.toPoint_h = 0.6412;
        }
        break;

       case Robot_Student_202_IN_MovetoX0_i:
        /* Allow time for moving */
        if (Robot_Student_2021_v1_DW.temporalCounter_i1_a >= 6144U) {
          Robot_Student_2021_v1_DW.is_c6_Robot_Student_2021_v1 =
            Robot_Student__IN_WaitForRest_f;
          Robot_Student_2021_v1_B.Ready_l = 1.0;
        }
        break;

       case Robot_Student_202_IN_ResetEnc_o:
        Robot_Student_2021_v1_B.resetEnc_n = 1.0;
        if (Robot_Student_2021_v1_DW.temporalCounter_i1_a >= 2048U) {
          Robot_Student_2021_v1_DW.is_c6_Robot_Student_2021_v1 =
            Robot_S_IN_EnableRunAndSafety_n;
          Robot_Student_2021_v1_B.resetEnc_n = 0.0;
          Robot_Student_2021_v1_B.homingBusy_d = 0.0;
        }
        break;

       case Robot_Student__IN_WaitForRest_f:
        if (Robot_Student_2021_v1_B.Compare) {
          Robot_Student_2021_v1_DW.is_c6_Robot_Student_2021_v1 =
            Robot_Student_202_IN_ResetEnc_o;
          Robot_Student_2021_v1_DW.temporalCounter_i1_a = 0U;
          Robot_Student_2021_v1_B.resetEnc_n = 1.0;
          Robot_Student_2021_v1_B.homeControllerEnabled_f = 0.0;
        }
        break;

       case Robot_Student_2021_IN_Waiting_o:
        if (Robot_Student_2021_v1_DW.temporalCounter_i1_a >= 4096U) {
          Robot_Student_2021_v1_DW.is_c6_Robot_Student_2021_v1 =
            Robot_Student_202_IN_Waiting1_e;
          Robot_Student_2021_v1_DW.temporalCounter_i1_a = 0U;

          /* Homing has to wait for 3 sec
             as the new arm gets the 5V enable signal
             after pressing start to avoid moving to X0 too
             early */
          Robot_Student_2021_v1_B.Ready_l = 0.0;
          Robot_Student_2021_v1_B.toPoint_h = 0.0;
          Robot_Student_2021_v1_B.homingBusy_d = 1.0;
          Robot_Student_2021_v1_B.jogSpeed_o = 0.0;
          Robot_Student_2021_v1_B.homeControllerEnabled_f = 1.0;
        } else {
          /* Homing has to wait for 3 sec
             as the new arm gets the 5V enable signal
             after pressing start to avoid moving to X0 too
             early */
          Robot_Student_2021_v1_B.Ready_l = 0.0;
          Robot_Student_2021_v1_B.toPoint_h = 0.0;
          Robot_Student_2021_v1_B.homingBusy_d = 1.0;
          Robot_Student_2021_v1_B.jogSpeed_o = -0.001;
          Robot_Student_2021_v1_B.homeControllerEnabled_f = 0.01;
        }
        break;

       default:
        /* case IN_Waiting1: */
        if (Robot_Student_2021_v1_DW.temporalCounter_i1_a >= 6144U) {
          Robot_Student_2021_v1_DW.is_c6_Robot_Student_2021_v1 =
            Robot_Student_2021__IN_Homing_c;

          /* Set jog speed and homing state */
          Robot_Student_2021_v1_B.jogSpeed_o = -0.2;
          Robot_Student_2021_v1_B.homeControllerEnabled_f = 1.0;
        } else {
          /* Homing has to wait for 3 sec
             as the new arm gets the 5V enable signal
             after pressing start to avoid moving to X0 too
             early */
          Robot_Student_2021_v1_B.Ready_l = 0.0;
          Robot_Student_2021_v1_B.toPoint_h = 0.0;
          Robot_Student_2021_v1_B.homingBusy_d = 1.0;
          Robot_Student_2021_v1_B.jogSpeed_o = 0.0;
          Robot_Student_2021_v1_B.homeControllerEnabled_f = 1.0;
        }
        break;
      }
    }

    /* End of Chart: '<S20>/Supervisor' */

    /* Constant: '<S49>/Constant1' */
    Robot_Student_2021_v1_B.Constant1_k =
      Robot_Student_2021_v1_P.Constant1_Value_e;

    /* Sum: '<S21>/Sum' incorporates:
     *  DiscreteIntegrator: '<S21>/Discrete-Time Integrator'
     *  DiscreteIntegrator: '<S49>/Discrete-Time Integrator'
     */
    Robot_Student_2021_v1_B.Sum_g =
      Robot_Student_2021_v1_DW.DiscreteTimeIntegrator_DSTATE_c +
      Robot_Student_2021_v1_DW.DiscreteTimeIntegrator_DSTATE_i;

    /* Sum: '<S21>/Sum2' */
    Robot_Student_2021_v1_B.HomingRunningSwitch1_l =
      Robot_Student_2021_v1_B.Sum_g -
      Robot_Student_2021_v1_B.HomingRunningSwitch[2];

    /* RelationalOperator: '<S21>/Relational Operator' incorporates:
     *  Constant: '<S21>/Constant'
     */
    Robot_Student_2021_v1_B.RelationalOperator_n =
      (Robot_Student_2021_v1_B.HomingRunningSwitch1_l >=
       Robot_Student_2021_v1_P.Constant_Value_p);

    /* MATLAB Function: '<S21>/Angle2Z' */
    Robot_Student_2021_v1_Angle2Z(Robot_Student_2021_v1_B.HomingRunningSwitch,
      &Robot_Student_2021_v1_B.sf_Angle2Z_c);

    /* Constant: '<S11>/set_robot_calibration_z' */
    Robot_Student_2021_v1_B.set_robot_calibration_z =
      Robot_Student_2021_v1_P.set_robot_calibration_z_Value;

    /* Chart: '<S21>/Supervisor' */
    if (Robot_Student_2021_v1_DW.temporalCounter_i1_e < 8191U) {
      Robot_Student_2021_v1_DW.temporalCounter_i1_e++;
    }

    Robot_Student_2021_v1_DW.sfEvent_o = Robot_Student_2021_v_CALL_EVENT;
    if (Robot_Student_2021_v1_DW.is_active_c7_Robot_Student_2021 == 0U) {
      Robot_Student_2021_v1_DW.is_active_c7_Robot_Student_2021 = 1U;
      Robot_Student_2021_v1_DW.is_c7_Robot_Student_2021_v1 =
        Robot_Student_2021_IN_Waiting_l;
      Robot_Student_2021_v1_DW.temporalCounter_i1_e = 0U;

      /* Homing has to wait for 3 sec
         as the new arm gets the 5V enable signal
         after pressing start to avoid moving to X0 too
         early */
      Robot_Student_2021_v1_B.Ready_p = 0.0;
      Robot_Student_2021_v1_B.toPoint = 0.0;
      Robot_Student_2021_v1_B.homingBusy_b = 1.0;
      Robot_Student_2021_v1_B.jogSpeed_a = 0.001;
      Robot_Student_2021_v1_B.homeControllerEnabled_h = 0.1;
    } else {
      switch (Robot_Student_2021_v1_DW.is_c7_Robot_Student_2021_v1) {
       case Robot_Student_IN_AirbagConveyor:
        Robot_Student_2021_v1_B.airBagEnabled = 1.0;
        if (Robot_Student_2021_v1_DW.temporalCounter_i1_e >= 6144U) {
          Robot_Student_2021_v1_DW.is_c7_Robot_Student_2021_v1 =
            Robot_Stude_IN_DisableOutputs_j;
          Robot_Student_2021_v1_B.controlEnabled = 0.0;
          Robot_Student_2021_v1_B.StopSim_o = 1.0;
        }
        break;

       case Robot_Student_202_IN_AirbagDrop:
        Robot_Student_2021_v1_B.airBagEnabled = 1.0;
        if (Robot_Student_2021_v1_DW.temporalCounter_i1_e >= 6144U) {
          Robot_Student_2021_v1_DW.is_c7_Robot_Student_2021_v1 =
            Robot_Stude_IN_DisableOutputs_j;
          Robot_Student_2021_v1_B.controlEnabled = 0.0;
          Robot_Student_2021_v1_B.StopSim_o = 1.0;
        }
        break;

       case Robot_Student_2021_IN_AirbagTop:
        Robot_Student_2021_v1_B.airBagEnabled = 1.0;
        if (Robot_Student_2021_v1_DW.temporalCounter_i1_e >= 6144U) {
          Robot_Student_2021_v1_DW.is_c7_Robot_Student_2021_v1 =
            Robot_Stude_IN_DisableOutputs_j;
          Robot_Student_2021_v1_B.controlEnabled = 0.0;
          Robot_Student_2021_v1_B.StopSim_o = 1.0;
        }
        break;

       case Robot_Stude_IN_DisableOutputs_j:
        Robot_Student_2021_v1_B.controlEnabled = 0.0;
        Robot_Student_2021_v1_B.StopSim_o = 1.0;
        break;

       case Robot_S_IN_EnableRunAndSafety_g:
        Robot_Student_2021_v1_B.resetEnc_a = 0.0;
        if ((Robot_Student_2021_v1_B.sf_Angle2Z_c.y < -0.04) &&
            (Robot_Student_2021_v1_B.HomingRunningSwitch[0] < 1.3)) {
          Robot_Student_2021_v1_DW.is_c7_Robot_Student_2021_v1 =
            Robot_Student_IN_AirbagConveyor;
          Robot_Student_2021_v1_DW.temporalCounter_i1_e = 0U;
          Robot_Student_2021_v1_DW.currentcarPos =
            Robot_Student_2021_v1_B.HomingRunningSwitch[2];
          Robot_Student_2021_v1_B.airBagEnabled = 1.0;
          Robot_Student_2021_v1_B.airBagRef =
            Robot_Student_2021_v1_DW.currentcarPos + 0.1;
        } else if (Robot_Student_2021_v1_B.HomingRunningSwitch[2] > 0.22) {
          Robot_Student_2021_v1_DW.is_c7_Robot_Student_2021_v1 =
            Robot_Student_2021_IN_AirbagTop;
          Robot_Student_2021_v1_DW.temporalCounter_i1_e = 0U;
          Robot_Student_2021_v1_DW.currentcarPos =
            Robot_Student_2021_v1_B.HomingRunningSwitch[2];
          Robot_Student_2021_v1_B.airBagEnabled = 1.0;
          Robot_Student_2021_v1_B.airBagRef =
            Robot_Student_2021_v1_DW.currentcarPos - 0.02;
        } else if ((Robot_Student_2021_v1_B.sf_Angle2Z_c.y < -0.085) &&
                   (Robot_Student_2021_v1_B.HomingRunningSwitch[0] > 1.3)) {
          Robot_Student_2021_v1_DW.is_c7_Robot_Student_2021_v1 =
            Robot_Student_202_IN_AirbagDrop;
          Robot_Student_2021_v1_DW.temporalCounter_i1_e = 0U;
          Robot_Student_2021_v1_DW.currentcarPos =
            Robot_Student_2021_v1_B.HomingRunningSwitch[2];
          Robot_Student_2021_v1_B.airBagEnabled = 1.0;
          Robot_Student_2021_v1_B.airBagRef =
            Robot_Student_2021_v1_DW.currentcarPos + 0.02;
        }
        break;

       case Robot_Student_2021__IN_Homing_l:
        /* Transition if homeswitch becomes high */
        if (Robot_Student_2021_v1_B.RelationalOperator_n) {
          Robot_Student_2021_v1_DW.is_c7_Robot_Student_2021_v1 =
            Robot_Student_202_IN_MovetoX0_n;
          Robot_Student_2021_v1_DW.temporalCounter_i1_e = 0U;
          Robot_Student_2021_v1_B.jogSpeed_a = 0.0;
          Robot_Student_2021_v1_B.toPoint = -0.34;
        }
        break;

       case Robot_Student_202_IN_MovetoX0_n:
        /* Allow time for moving */
        if (Robot_Student_2021_v1_DW.temporalCounter_i1_e >= 6144U) {
          Robot_Student_2021_v1_DW.is_c7_Robot_Student_2021_v1 =
            Robot_Student__IN_WaitForRest_i;
          Robot_Student_2021_v1_B.Ready_p = 1.0;
        }
        break;

       case Robot_Student_202_IN_ResetEnc_f:
        Robot_Student_2021_v1_B.resetEnc_a = 1.0;
        if (Robot_Student_2021_v1_DW.temporalCounter_i1_e >= 2048U) {
          Robot_Student_2021_v1_DW.is_c7_Robot_Student_2021_v1 =
            Robot_S_IN_EnableRunAndSafety_g;
          Robot_Student_2021_v1_B.resetEnc_a = 0.0;
          Robot_Student_2021_v1_B.homingBusy_b = 0.0;
        }
        break;

       case Robot_Student__IN_WaitForRest_i:
        if (Robot_Student_2021_v1_B.Compare) {
          Robot_Student_2021_v1_DW.is_c7_Robot_Student_2021_v1 =
            Robot_Student_202_IN_ResetEnc_f;
          Robot_Student_2021_v1_DW.temporalCounter_i1_e = 0U;
          Robot_Student_2021_v1_B.resetEnc_a = 1.0;
          Robot_Student_2021_v1_B.homeControllerEnabled_h = 0.0;
          Robot_Student_2021_v1_B.Ready_p = 1.0;
        }
        break;

       case Robot_Student_2021_IN_Waiting_l:
        if (Robot_Student_2021_v1_DW.temporalCounter_i1_e >= 4096U) {
          Robot_Student_2021_v1_DW.is_c7_Robot_Student_2021_v1 =
            Robot_Student_202_IN_Waiting1_p;
          Robot_Student_2021_v1_DW.temporalCounter_i1_e = 0U;

          /* Homing has to wait for 3 sec
             as the new arm gets the 5V enable signal
             after pressing start to avoid moving to X0 too
             early */
          Robot_Student_2021_v1_B.Ready_p = 0.0;
          Robot_Student_2021_v1_B.toPoint = 0.0;
          Robot_Student_2021_v1_B.jogSpeed_a = 0.0;
          Robot_Student_2021_v1_B.homeControllerEnabled_h = 1.0;
        } else {
          /* Homing has to wait for 3 sec
             as the new arm gets the 5V enable signal
             after pressing start to avoid moving to X0 too
             early */
          Robot_Student_2021_v1_B.Ready_p = 0.0;
          Robot_Student_2021_v1_B.toPoint = 0.0;
          Robot_Student_2021_v1_B.homingBusy_b = 1.0;
          Robot_Student_2021_v1_B.jogSpeed_a = 0.001;
          Robot_Student_2021_v1_B.homeControllerEnabled_h = 0.1;
        }
        break;

       default:
        /* case IN_Waiting1: */
        if (Robot_Student_2021_v1_DW.temporalCounter_i1_e >= 4096U) {
          Robot_Student_2021_v1_DW.is_c7_Robot_Student_2021_v1 =
            Robot_Student_2021__IN_Homing_l;

          /* Set jog speed and homing state */
          Robot_Student_2021_v1_B.toPoint = 0.0;
          Robot_Student_2021_v1_B.Ready_p = 0.0;
          Robot_Student_2021_v1_B.homingBusy_b = 1.0;
          Robot_Student_2021_v1_B.jogSpeed_a = 0.2;
          Robot_Student_2021_v1_B.homeControllerEnabled_h = 1.0;
        } else {
          /* Homing has to wait for 3 sec
             as the new arm gets the 5V enable signal
             after pressing start to avoid moving to X0 too
             early */
          Robot_Student_2021_v1_B.Ready_p = 0.0;
          Robot_Student_2021_v1_B.toPoint = 0.0;
          Robot_Student_2021_v1_B.jogSpeed_a = 0.0;
          Robot_Student_2021_v1_B.homeControllerEnabled_h = 1.0;
        }
        break;
      }
    }

    /* End of Chart: '<S21>/Supervisor' */

    /* Chart: '<S22>/Supervisor' */
    if (Robot_Student_2021_v1_DW.temporalCounter_i1 < 8191U) {
      Robot_Student_2021_v1_DW.temporalCounter_i1++;
    }

    Robot_Student_2021_v1_DW.sfEvent = Robot_Student_2021_v_CALL_EVENT;
    if (Robot_Student_2021_v1_DW.is_active_c4_Robot_Student_2021 == 0U) {
      Robot_Student_2021_v1_DW.is_active_c4_Robot_Student_2021 = 1U;
      Robot_Student_2021_v1_DW.is_c4_Robot_Student_2021_v1 =
        Robot_Student_202_IN_Waiting_ov;
      Robot_Student_2021_v1_DW.temporalCounter_i1 = 0U;

      /* Homing has to wait for 3 sec
         as the new arm gets the 5V enable signal
         after pressing start to avoi d moving to X0 too
         early */
    } else {
      switch (Robot_Student_2021_v1_DW.is_c4_Robot_Student_2021_v1) {
       case Robot_Stude_IN_CheckRobotIsON_f:
        Robot_Student_2021_v1_B.jogSpeed = 0.0;
        if (Robot_Student_2021_v1_DW.temporalCounter_i1 >= 2048U) {
          Robot_Student_2021_v1_DW.is_c4_Robot_Student_2021_v1 =
            Robot_Student__IN_WaitForRest_o;
          Robot_Student_2021_v1_B.Ready = 1.0;
        }
        break;

       case Robot_S_IN_EnableRunAndSafety_e:
        Robot_Student_2021_v1_B.resetEnc = 0.0;
        Robot_Student_2021_v1_B.homingBusy = 0.0;
        break;

       case Robot_Student_2021__IN_Homing_e:
        Robot_Student_2021_v1_B.Ready = 0.0;
        Robot_Student_2021_v1_B.homingBusy = 1.0;
        Robot_Student_2021_v1_B.jogSpeed = 20.0;
        Robot_Student_2021_v1_B.homeControllerEnabled = 1.0;
        if (Robot_Student_2021_v1_DW.temporalCounter_i1 >= 6144U) {
          Robot_Student_2021_v1_DW.is_c4_Robot_Student_2021_v1 =
            Robot_Student_202_IN_MovetoX0_o;
          Robot_Student_2021_v1_DW.temporalCounter_i1 = 0U;
          Robot_Student_2021_v1_B.jogSpeed = -20.0;
        }
        break;

       case Robot_Student_202_IN_MovetoX0_o:
        Robot_Student_2021_v1_B.jogSpeed = -20.0;

        /* Allow time for moving */
        if (Robot_Student_2021_v1_DW.temporalCounter_i1 >= 6144U) {
          Robot_Student_2021_v1_DW.is_c4_Robot_Student_2021_v1 =
            Robot_Stude_IN_CheckRobotIsON_f;
          Robot_Student_2021_v1_DW.temporalCounter_i1 = 0U;
          Robot_Student_2021_v1_B.jogSpeed = 0.0;
        }
        break;

       case Robot_Student_20_IN_ResetEnc_ol:
        Robot_Student_2021_v1_B.resetEnc = 1.0;
        Robot_Student_2021_v1_B.homeControllerEnabled = 0.0;
        if (Robot_Student_2021_v1_DW.temporalCounter_i1 >= 2048U) {
          Robot_Student_2021_v1_DW.is_c4_Robot_Student_2021_v1 =
            Robot_S_IN_EnableRunAndSafety_e;
          Robot_Student_2021_v1_B.resetEnc = 0.0;
          Robot_Student_2021_v1_B.homingBusy = 0.0;
        }
        break;

       case Robot_Student__IN_WaitForRest_o:
        Robot_Student_2021_v1_B.Ready = 1.0;
        if (Robot_Student_2021_v1_B.Compare) {
          Robot_Student_2021_v1_DW.is_c4_Robot_Student_2021_v1 =
            Robot_Student_20_IN_ResetEnc_ol;
          Robot_Student_2021_v1_DW.temporalCounter_i1 = 0U;
          Robot_Student_2021_v1_B.resetEnc = 1.0;
          Robot_Student_2021_v1_B.homeControllerEnabled = 0.0;
        }
        break;

       default:
        /* case IN_Waiting: */
        if (Robot_Student_2021_v1_DW.temporalCounter_i1 >= 2048U) {
          Robot_Student_2021_v1_DW.is_c4_Robot_Student_2021_v1 =
            Robot_Student_2021__IN_Homing_e;
          Robot_Student_2021_v1_DW.temporalCounter_i1 = 0U;

          /* Set jog speed and homing state */
          Robot_Student_2021_v1_B.Ready = 0.0;
          Robot_Student_2021_v1_B.homingBusy = 1.0;
          Robot_Student_2021_v1_B.jogSpeed = 20.0;
          Robot_Student_2021_v1_B.homeControllerEnabled = 1.0;
        }
        break;
      }
    }

    /* End of Chart: '<S22>/Supervisor' */

    /* Sum: '<S17>/Add' */
    Robot_Student_2021_v1_B.u = ((Robot_Student_2021_v1_B.homingBusy_n +
      Robot_Student_2021_v1_B.homingBusy_d) +
      Robot_Student_2021_v1_B.homingBusy_b) + Robot_Student_2021_v1_B.homingBusy;

    /* Signum: '<S17>/Sign' */
    if (Robot_Student_2021_v1_B.u < 0.0) {
      Robot_Student_2021_v1_B.u = -1.0;
    } else if (Robot_Student_2021_v1_B.u > 0.0) {
      Robot_Student_2021_v1_B.u = 1.0;
    } else if (Robot_Student_2021_v1_B.u == 0.0) {
      Robot_Student_2021_v1_B.u = 0.0;
    } else {
      Robot_Student_2021_v1_B.u = (rtNaN);
    }

    /* End of Signum: '<S17>/Sign' */

    /* Sum: '<S17>/Add1' incorporates:
     *  Constant: '<S17>/Constant'
     */
    Robot_Student_2021_v1_B.Add1 = Robot_Student_2021_v1_P.Constant_Value -
      Robot_Student_2021_v1_B.u;

    /* Outputs for Enabled SubSystem: '<Root>/Controller' incorporates:
     *  EnablePort: '<S1>/Enable '
     */
    Robot_Student_2021_v1_DW.Controller_MODE = (Robot_Student_2021_v1_B.Add1 >
      0.0);
    if (Robot_Student_2021_v1_DW.Controller_MODE) {
      /* SignalConversion: '<S3>/Signal Conversion' incorporates:
       *  Constant: '<S3>/[x,y,nproducts]'
       */
      Robot_Student_2021_v1_B.SignalConversion =
        Robot_Student_2021_v1_P.xynproducts_Value[0];

      /* SignalConversion: '<S3>/Signal Conversion1' incorporates:
       *  Constant: '<S3>/[x,y,nproducts]'
       */
      Robot_Student_2021_v1_B.SignalConversion1 =
        Robot_Student_2021_v1_P.xynproducts_Value[1];

      /* SignalConversion: '<S1>/Signal Conversion2' */
      Robot_Student_2021_v1_B.SignalConversion2 =
        Robot_Student_2021_v1_B.HomingRunningSwitch[0];

      /* Sum: '<S1>/Sum6' incorporates:
       *  Constant: '<S1>/Feedfoward Z'
       *  Constant: '<S1>/Reference X'
       *  Gain: '<S8>/Gain'
       *  Sum: '<S1>/Sum1'
       */
      Robot_Student_2021_v1_B.Sum6 = (Robot_Student_2021_v1_P.ReferenceX_Value -
        Robot_Student_2021_v1_B.SignalConversion2) *
        Robot_Student_2021_v1_P.Gain_Gain +
        Robot_Student_2021_v1_P.FeedfowardZ_Value;

      /* SignalConversion: '<S1>/Signal Conversion1' */
      Robot_Student_2021_v1_B.SignalConversion1_a =
        Robot_Student_2021_v1_B.HomingRunningSwitch[1];

      /* Sum: '<S1>/Sum5' incorporates:
       *  Constant: '<S1>/Feedfoward X'
       *  Constant: '<S1>/Reference Z'
       *  Gain: '<S7>/Gain1'
       *  Sum: '<S1>/Sum7'
       */
      Robot_Student_2021_v1_B.Sum5 = (Robot_Student_2021_v1_P.ReferenceZ_Value -
        Robot_Student_2021_v1_B.SignalConversion1_a) *
        Robot_Student_2021_v1_P.Gain1_Gain +
        Robot_Student_2021_v1_P.FeedfowardX_Value;

      /* SignalConversion: '<S1>/Signal Conversion' */
      Robot_Student_2021_v1_B.SignalConversion_k =
        Robot_Student_2021_v1_B.HomingRunningSwitch[2];

      /* ManualSwitch: '<S1>/Manual Switch2' */
      if (Robot_Student_2021_v1_P.ManualSwitch2_CurrentSetting == 1) {
        /* ManualSwitch: '<S1>/Manual Switch2' incorporates:
         *  RandomNumber: '<S1>/Random Number'
         */
        Robot_Student_2021_v1_B.Doubleclickswitch =
          Robot_Student_2021_v1_DW.NextOutput;
      } else {
        /* ManualSwitch: '<S1>/Manual Switch2' incorporates:
         *  Constant: '<S1>/Reference R'
         */
        Robot_Student_2021_v1_B.Doubleclickswitch =
          Robot_Student_2021_v1_P.ReferenceR_Value;
      }

      /* End of ManualSwitch: '<S1>/Manual Switch2' */
      /* Sum: '<S1>/Sum4' incorporates:
       *  Constant: '<S1>/Feedfoward R'
       *  Gain: '<S5>/Gain1'
       */
      Robot_Student_2021_v1_B.Sum4 = Robot_Student_2021_v1_P.Gain1_Gain_g *
        Robot_Student_2021_v1_B.Doubleclickswitch +
        Robot_Student_2021_v1_P.FeedfowardR_Value;

      /* DiscreteIntegrator: '<S1>/Discrete  integrator' */
      Robot_Student_2021_v1_B.Conveyorreferencemm =
        Robot_Student_2021_v1_DW.Discreteintegrator_DSTATE;

      /* Gain: '<S4>/Gain1' incorporates:
       *  Sum: '<S1>/Sum3'
       */
      Robot_Student_2021_v1_B.Gain1_g =
        (Robot_Student_2021_v1_B.Conveyorreferencemm -
         Robot_Student_2021_v1_B.Gain3) * Robot_Student_2021_v1_P.Gain1_Gain_gq;

      /* S-Function (dweakint): '<S4>/Dctintegrator3' */

      /* Level2 S-Function Block: '<S4>/Dctintegrator3' (dweakint) */
      {
        SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[0];
        sfcnOutputs(rts,0);
      }

      /* S-Function (dlowpass1): '<S4>/Dct1lowpass' */

      /* Level2 S-Function Block: '<S4>/Dct1lowpass' (dlowpass1) */
      {
        SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[1];
        sfcnOutputs(rts,0);
      }

      /* S-Function (dleadlag): '<S4>/Dctleadlag' */

      /* Level2 S-Function Block: '<S4>/Dctleadlag' (dleadlag) */
      {
        SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[2];
        sfcnOutputs(rts,0);
      }

      /* Chart: '<S1>/Stateflow ' */
      Robot_Student_2021_v1_DW.sfEvent_b = Robot_Student_2021_v_CALL_EVENT;
      Robot__c3_Robot_Student_2021_v1();

      /* Saturate: '<S1>/Saturation ' incorporates:
       *  Constant: '<S1>/Conveyor speed [mm//s]'
       */
      if (Robot_Student_2021_v1_P.Conveyorspeedmms_Value >
          Robot_Student_2021_v1_P.Saturation_UpperSat) {
        /* Saturate: '<S1>/Saturation ' */
        Robot_Student_2021_v1_B.Saturation_m =
          Robot_Student_2021_v1_P.Saturation_UpperSat;
      } else if (Robot_Student_2021_v1_P.Conveyorspeedmms_Value <
                 Robot_Student_2021_v1_P.Saturation_LowerSat) {
        /* Saturate: '<S1>/Saturation ' */
        Robot_Student_2021_v1_B.Saturation_m =
          Robot_Student_2021_v1_P.Saturation_LowerSat;
      } else {
        /* Saturate: '<S1>/Saturation ' */
        Robot_Student_2021_v1_B.Saturation_m =
          Robot_Student_2021_v1_P.Conveyorspeedmms_Value;
      }

      /* End of Saturate: '<S1>/Saturation ' */

      /* Gain: '<S6>/Gain1' incorporates:
       *  Constant: '<S1>/Reference Vacuum [bar]'
       *  Sum: '<S1>/Sum9'
       */
      Robot_Student_2021_v1_B.Gain1_o =
        (Robot_Student_2021_v1_P.ReferenceVacuumbar_Value -
         Robot_Student_2021_v1_B.Gain6) * Robot_Student_2021_v1_P.Gain1_Gain_b;

      /* ManualSwitch: '<S1>/Manual Switch' */
      if (Robot_Student_2021_v1_P.ManualSwitch_CurrentSetting == 1) {
        /* ManualSwitch: '<S1>/Manual Switch' incorporates:
         *  Constant: '<S1>/Suck'
         */
        Robot_Student_2021_v1_B.Doubleclickswitch_c =
          Robot_Student_2021_v1_P.Suck_Value;
      } else {
        /* ManualSwitch: '<S1>/Manual Switch' incorporates:
         *  Constant: '<S1>/ Blow'
         */
        Robot_Student_2021_v1_B.Doubleclickswitch_c =
          Robot_Student_2021_v1_P.Blow_Value;
      }

      /* End of ManualSwitch: '<S1>/Manual Switch' */

      /* ManualSwitch: '<S1>/Manual Switch1' incorporates:
       *  StringConstant: '<S1>/Color; specified in 8 hex digits, wwrrggbb'
       *  StringConstant: '<S1>/Default object detection color; set to white'
       */
      if (Robot_Student_2021_v1_P.ManualSwitch1_CurrentSetting == 1) {
        strncpy(&Robot_Student_2021_v1_B.ManualSwitch1[0],
                &Robot_Student_2021_v1_P.Colorspecifiedin8hexdigitswwrrg[0],
                255U);
        Robot_Student_2021_v1_B.ManualSwitch1[255] = '\x00';
      } else {
        strncpy(&Robot_Student_2021_v1_B.ManualSwitch1[0],
                &Robot_Student_2021_v1_P.Defaultobjectdetectioncolorsett[0],
                255U);
        Robot_Student_2021_v1_B.ManualSwitch1[255] = '\x00';
      }

      /* End of ManualSwitch: '<S1>/Manual Switch1' */

      /* Constant: '<S1>/Color' */
      Robot_Student_2021_v1_B.Color = Robot_Student_2021_v1_P.Color_Value;

      /* Constant: '<S1>/Plot' */
      Robot_Student_2021_v1_B.Plot = Robot_Student_2021_v1_P.Plot_Value;

      /* Constant: '<S1>/Stop' */
      Robot_Student_2021_v1_B.Stop = Robot_Student_2021_v1_P.Stop_Value;
      srUpdateBC(Robot_Student_2021_v1_DW.Controller_SubsysRanBC);
    }

    /* End of Outputs for SubSystem: '<Root>/Controller' */

    /* Assignment: '<S10>/Assignment' incorporates:
     *  Constant: '<S10>/Enable//Ventiel'
     */
    memcpy(&Robot_Student_2021_v1_B.Assignment[0],
           &Robot_Student_2021_v1_P.EnableVentiel_Value[0], sizeof(real_T) << 3U);

    /* Assignment: '<S10>/Assignment' */
    Robot_Student_2021_v1_B.Assignment[1] =
      Robot_Student_2021_v1_B.Doubleclickswitch_c;

    /* Gain: '<S12>/Gain' */
    Robot_Student_2021_v1_B.Gain[0] = Robot_Student_2021_v1_P.Gain_Gain_j * 0.0;
    Robot_Student_2021_v1_B.Gain[1] = Robot_Student_2021_v1_P.Gain_Gain_j * 0.0;

    /* Derivative: '<S29>/Derivative' incorporates:
     *  Derivative: '<S29>/Derivative1'
     *  Derivative: '<S38>/Derivative'
     *  Derivative: '<S38>/Derivative1'
     *  Derivative: '<S54>/Derivative'
     *  Derivative: '<S54>/Derivative1'
     */
    Robot_Student_2021_v1_B.u = Robot_Student_2021_v1_M->Timing.t[0];
    if ((Robot_Student_2021_v1_DW.TimeStampA >= Robot_Student_2021_v1_B.u) &&
        (Robot_Student_2021_v1_DW.TimeStampB >= Robot_Student_2021_v1_B.u)) {
      /* Derivative: '<S29>/Derivative' */
      Robot_Student_2021_v1_B.Derivative = 0.0;
    } else {
      Robot_Student_2021_v1_B.lastTime = Robot_Student_2021_v1_DW.TimeStampA;
      lastU = &Robot_Student_2021_v1_DW.LastUAtTimeA;
      if (Robot_Student_2021_v1_DW.TimeStampA <
          Robot_Student_2021_v1_DW.TimeStampB) {
        if (Robot_Student_2021_v1_DW.TimeStampB < Robot_Student_2021_v1_B.u) {
          Robot_Student_2021_v1_B.lastTime = Robot_Student_2021_v1_DW.TimeStampB;
          lastU = &Robot_Student_2021_v1_DW.LastUAtTimeB;
        }
      } else if (Robot_Student_2021_v1_DW.TimeStampA >=
                 Robot_Student_2021_v1_B.u) {
        Robot_Student_2021_v1_B.lastTime = Robot_Student_2021_v1_DW.TimeStampB;
        lastU = &Robot_Student_2021_v1_DW.LastUAtTimeB;
      }

      /* Derivative: '<S29>/Derivative' */
      Robot_Student_2021_v1_B.Derivative = (Robot_Student_2021_v1_B.Sum - *lastU)
        / (Robot_Student_2021_v1_B.u - Robot_Student_2021_v1_B.lastTime);
    }

    /* End of Derivative: '<S29>/Derivative' */

    /* Derivative: '<S29>/Derivative1' */
    if ((Robot_Student_2021_v1_DW.TimeStampA_p >= Robot_Student_2021_v1_B.u) &&
        (Robot_Student_2021_v1_DW.TimeStampB_f >= Robot_Student_2021_v1_B.u)) {
      Robot_Student_2021_v1_B.Derivative1 = 0.0;
    } else {
      Robot_Student_2021_v1_B.lastTime = Robot_Student_2021_v1_DW.TimeStampA_p;
      lastU = &Robot_Student_2021_v1_DW.LastUAtTimeA_f;
      if (Robot_Student_2021_v1_DW.TimeStampA_p <
          Robot_Student_2021_v1_DW.TimeStampB_f) {
        if (Robot_Student_2021_v1_DW.TimeStampB_f < Robot_Student_2021_v1_B.u) {
          Robot_Student_2021_v1_B.lastTime =
            Robot_Student_2021_v1_DW.TimeStampB_f;
          lastU = &Robot_Student_2021_v1_DW.LastUAtTimeB_d;
        }
      } else if (Robot_Student_2021_v1_DW.TimeStampA_p >=
                 Robot_Student_2021_v1_B.u) {
        Robot_Student_2021_v1_B.lastTime = Robot_Student_2021_v1_DW.TimeStampB_f;
        lastU = &Robot_Student_2021_v1_DW.LastUAtTimeB_d;
      }

      Robot_Student_2021_v1_B.Derivative1 = (Robot_Student_2021_v1_B.Derivative
        - *lastU) / (Robot_Student_2021_v1_B.u -
                     Robot_Student_2021_v1_B.lastTime);
    }

    /* Gain: '<S28>/Gain' */
    Robot_Student_2021_v1_B.Gain_c = Robot_Student_2021_v1_P.Gain_Gain_ph *
      Robot_Student_2021_v1_B.Sum3_fz;

    /* S-Function (dweakint): '<S28>/Dctintegrator' */

    /* Level2 S-Function Block: '<S28>/Dctintegrator' (dweakint) */
    {
      SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[7];
      sfcnOutputs(rts,0);
    }

    /* S-Function (dleadlag): '<S28>/Dctleadlag' */

    /* Level2 S-Function Block: '<S28>/Dctleadlag' (dleadlag) */
    {
      SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[8];
      sfcnOutputs(rts,0);
    }

    /* S-Function (dlowpass1): '<S28>/Dct1lowpass' */

    /* Level2 S-Function Block: '<S28>/Dct1lowpass' (dlowpass1) */
    {
      SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[9];
      sfcnOutputs(rts,0);
    }

    /* Logic: '<S19>/Logical Operator1' */
    Robot_Student_2021_v1_B.LogicalOperator1 =
      !(Robot_Student_2021_v1_B.airBagEnabled_ab != 0.0);

    /* Gain: '<S30>/Gain' incorporates:
     *  Sum: '<S19>/Sum1'
     */
    Robot_Student_2021_v1_B.Gain_f = (Robot_Student_2021_v1_B.airBagRef_pn -
      Robot_Student_2021_v1_B.HomingRunningSwitch[0]) *
      Robot_Student_2021_v1_P.Gain_Gain_ju;

    /* S-Function (dleadlag): '<S30>/Dctleadlag' */

    /* Level2 S-Function Block: '<S30>/Dctleadlag' (dleadlag) */
    {
      SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[10];
      sfcnOutputs(rts,0);
    }

    /* S-Function (dlowpass1): '<S30>/Dct1lowpass' */

    /* Level2 S-Function Block: '<S30>/Dct1lowpass' (dlowpass1) */
    {
      SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[11];
      sfcnOutputs(rts,0);
    }

    /* Switch: '<S19>/AirbagSwitch' */
    if (Robot_Student_2021_v1_B.LogicalOperator1) {
      /* Switch: '<S19>/Homing Running Switch' */
      if (Robot_Student_2021_v1_B.homingBusy_n >=
          Robot_Student_2021_v1_P.HomingRunningSwitch_Threshold) {
        /* Signum: '<S29>/Sign' */
        if (Robot_Student_2021_v1_B.Derivative < 0.0) {
          Robot_Student_2021_v1_B.lastTime = -1.0;
        } else if (Robot_Student_2021_v1_B.Derivative > 0.0) {
          Robot_Student_2021_v1_B.lastTime = 1.0;
        } else if (Robot_Student_2021_v1_B.Derivative == 0.0) {
          Robot_Student_2021_v1_B.lastTime = 0.0;
        } else {
          Robot_Student_2021_v1_B.lastTime = (rtNaN);
        }

        /* End of Signum: '<S29>/Sign' */

        /* Product: '<S19>/Product' incorporates:
         *  Gain: '<S29>/Kfa'
         *  Gain: '<S29>/Kfc'
         *  Gain: '<S29>/Kfv'
         *  Sum: '<S19>/Sum3'
         *  Sum: '<S29>/Sum'
         *  Sum: '<S29>/Sum1'
         */
        Robot_Student_2021_v1_B.Sum3_fz = (((Robot_Student_2021_v1_P.Kfv_Gain *
          Robot_Student_2021_v1_B.Derivative + Robot_Student_2021_v1_P.Kfa_Gain *
          Robot_Student_2021_v1_B.Derivative1) +
          Robot_Student_2021_v1_P.Kfc_Gain * Robot_Student_2021_v1_B.lastTime) +
          Robot_Student_2021_v1_B.Dct1lowpass) *
          Robot_Student_2021_v1_B.homeControllerEnabled_i;

        /* Saturate: '<S19>/Saturation' */
        if (Robot_Student_2021_v1_B.Sum3_fz >
            Robot_Student_2021_v1_P.Saturation_UpperSat_i) {
          Robot_Student_2021_v1_B.Sum3_fz =
            Robot_Student_2021_v1_P.Saturation_UpperSat_i;
        } else if (Robot_Student_2021_v1_B.Sum3_fz <
                   Robot_Student_2021_v1_P.Saturation_LowerSat_m) {
          Robot_Student_2021_v1_B.Sum3_fz =
            Robot_Student_2021_v1_P.Saturation_LowerSat_m;
        }

        /* End of Saturate: '<S19>/Saturation' */
      } else {
        Robot_Student_2021_v1_B.Sum3_fz = Robot_Student_2021_v1_B.Sum4;
      }

      /* End of Switch: '<S19>/Homing Running Switch' */
    } else {
      Robot_Student_2021_v1_B.Sum3_fz = Robot_Student_2021_v1_B.Dct1lowpass_n;
    }

    /* End of Switch: '<S19>/AirbagSwitch' */

    /* Sum: '<S10>/Sum3' incorporates:
     *  Constant: '<S10>/Voltage middle'
     *  Product: '<S19>/Product1'
     */
    Robot_Student_2021_v1_B.Sum3_fz = Robot_Student_2021_v1_B.Sum3_fz *
      Robot_Student_2021_v1_B.controlEnabled_e +
      Robot_Student_2021_v1_P.Voltagemiddle_Value;

    /* Derivative: '<S38>/Derivative' */
    if ((Robot_Student_2021_v1_DW.TimeStampA_d >= Robot_Student_2021_v1_B.u) &&
        (Robot_Student_2021_v1_DW.TimeStampB_p >= Robot_Student_2021_v1_B.u)) {
      /* Derivative: '<S38>/Derivative' */
      Robot_Student_2021_v1_B.Derivative_i = 0.0;
    } else {
      Robot_Student_2021_v1_B.lastTime = Robot_Student_2021_v1_DW.TimeStampA_d;
      lastU = &Robot_Student_2021_v1_DW.LastUAtTimeA_i;
      if (Robot_Student_2021_v1_DW.TimeStampA_d <
          Robot_Student_2021_v1_DW.TimeStampB_p) {
        if (Robot_Student_2021_v1_DW.TimeStampB_p < Robot_Student_2021_v1_B.u) {
          Robot_Student_2021_v1_B.lastTime =
            Robot_Student_2021_v1_DW.TimeStampB_p;
          lastU = &Robot_Student_2021_v1_DW.LastUAtTimeB_m;
        }
      } else if (Robot_Student_2021_v1_DW.TimeStampA_d >=
                 Robot_Student_2021_v1_B.u) {
        Robot_Student_2021_v1_B.lastTime = Robot_Student_2021_v1_DW.TimeStampB_p;
        lastU = &Robot_Student_2021_v1_DW.LastUAtTimeB_m;
      }

      /* Derivative: '<S38>/Derivative' */
      Robot_Student_2021_v1_B.Derivative_i = (Robot_Student_2021_v1_B.Sum_a -
        *lastU) / (Robot_Student_2021_v1_B.u - Robot_Student_2021_v1_B.lastTime);
    }

    /* Derivative: '<S38>/Derivative1' */
    if ((Robot_Student_2021_v1_DW.TimeStampA_h >= Robot_Student_2021_v1_B.u) &&
        (Robot_Student_2021_v1_DW.TimeStampB_c >= Robot_Student_2021_v1_B.u)) {
      Robot_Student_2021_v1_B.Derivative1 = 0.0;
    } else {
      Robot_Student_2021_v1_B.lastTime = Robot_Student_2021_v1_DW.TimeStampA_h;
      lastU = &Robot_Student_2021_v1_DW.LastUAtTimeA_id;
      if (Robot_Student_2021_v1_DW.TimeStampA_h <
          Robot_Student_2021_v1_DW.TimeStampB_c) {
        if (Robot_Student_2021_v1_DW.TimeStampB_c < Robot_Student_2021_v1_B.u) {
          Robot_Student_2021_v1_B.lastTime =
            Robot_Student_2021_v1_DW.TimeStampB_c;
          lastU = &Robot_Student_2021_v1_DW.LastUAtTimeB_o;
        }
      } else if (Robot_Student_2021_v1_DW.TimeStampA_h >=
                 Robot_Student_2021_v1_B.u) {
        Robot_Student_2021_v1_B.lastTime = Robot_Student_2021_v1_DW.TimeStampB_c;
        lastU = &Robot_Student_2021_v1_DW.LastUAtTimeB_o;
      }

      Robot_Student_2021_v1_B.Derivative1 =
        (Robot_Student_2021_v1_B.Derivative_i - *lastU) /
        (Robot_Student_2021_v1_B.u - Robot_Student_2021_v1_B.lastTime);
    }

    /* Gain: '<S36>/Gain1' */
    Robot_Student_2021_v1_B.Gain1 = Robot_Student_2021_v1_P.Gain1_Gain_h *
      Robot_Student_2021_v1_B.Sum4_k;

    /* S-Function (dweakint): '<S36>/Dctintegrator' */

    /* Level2 S-Function Block: '<S36>/Dctintegrator' (dweakint) */
    {
      SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[12];
      sfcnOutputs(rts,0);
    }

    /* S-Function (dleadlag): '<S36>/Dctleadlag' */

    /* Level2 S-Function Block: '<S36>/Dctleadlag' (dleadlag) */
    {
      SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[13];
      sfcnOutputs(rts,0);
    }

    /* S-Function (dlowpass1): '<S36>/Dct1lowpass' */

    /* Level2 S-Function Block: '<S36>/Dct1lowpass' (dlowpass1) */
    {
      SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[14];
      sfcnOutputs(rts,0);
    }

    /* Logic: '<S20>/Logical Operator1' */
    Robot_Student_2021_v1_B.LogicalOperator1_d =
      !(Robot_Student_2021_v1_B.airBagEnabled_a != 0.0);

    /* Gain: '<S37>/Gain1' incorporates:
     *  Sum: '<S20>/Sum1'
     */
    Robot_Student_2021_v1_B.Gain1_p = (Robot_Student_2021_v1_B.airBagRef_p -
      Robot_Student_2021_v1_B.HomingRunningSwitch[1]) *
      Robot_Student_2021_v1_P.Gain1_Gain_d;

    /* S-Function (dleadlag): '<S37>/Dctleadlag' */

    /* Level2 S-Function Block: '<S37>/Dctleadlag' (dleadlag) */
    {
      SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[15];
      sfcnOutputs(rts,0);
    }

    /* S-Function (dlowpass1): '<S37>/Dct1lowpass' */

    /* Level2 S-Function Block: '<S37>/Dct1lowpass' (dlowpass1) */
    {
      SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[16];
      sfcnOutputs(rts,0);
    }

    /* Switch: '<S20>/AirbagSwitch' */
    if (Robot_Student_2021_v1_B.LogicalOperator1_d) {
      /* Switch: '<S20>/Homing Running Switch' incorporates:
       *  Gain: '<S38>/Kfa'
       *  Gain: '<S38>/Kfc'
       *  Gain: '<S38>/Kfv'
       *  Product: '<S20>/Product'
       *  Sum: '<S20>/Sum3'
       *  Sum: '<S38>/Sum'
       *  Sum: '<S38>/Sum1'
       */
      if (Robot_Student_2021_v1_B.homingBusy_d >=
          Robot_Student_2021_v1_P.HomingRunningSwitch_Threshold_o) {
        /* Signum: '<S38>/Sign' */
        if (Robot_Student_2021_v1_B.Derivative_i < 0.0) {
          Robot_Student_2021_v1_B.lastTime = -1.0;
        } else if (Robot_Student_2021_v1_B.Derivative_i > 0.0) {
          Robot_Student_2021_v1_B.lastTime = 1.0;
        } else if (Robot_Student_2021_v1_B.Derivative_i == 0.0) {
          Robot_Student_2021_v1_B.lastTime = 0.0;
        } else {
          Robot_Student_2021_v1_B.lastTime = (rtNaN);
        }

        /* End of Signum: '<S38>/Sign' */
        Robot_Student_2021_v1_B.Sum4_k = (((Robot_Student_2021_v1_P.Kfv_Gain_c *
          Robot_Student_2021_v1_B.Derivative_i +
          Robot_Student_2021_v1_P.Kfa_Gain_g *
          Robot_Student_2021_v1_B.Derivative1) +
          Robot_Student_2021_v1_P.Kfc_Gain_b * Robot_Student_2021_v1_B.lastTime)
          + Robot_Student_2021_v1_B.Dct1lowpass_f) *
          Robot_Student_2021_v1_B.homeControllerEnabled_f;
      } else {
        Robot_Student_2021_v1_B.Sum4_k = Robot_Student_2021_v1_B.Sum5;
      }

      /* End of Switch: '<S20>/Homing Running Switch' */
    } else {
      Robot_Student_2021_v1_B.Sum4_k = Robot_Student_2021_v1_B.Dct1lowpass_o;
    }

    /* End of Switch: '<S20>/AirbagSwitch' */

    /* Saturate: '<S10>/Saturation' */
    if (Robot_Student_2021_v1_B.Sum3_fz >
        Robot_Student_2021_v1_P.Saturation_UpperSat_k) {
      Robot_Student_2021_v1_B.Sum3_fz =
        Robot_Student_2021_v1_P.Saturation_UpperSat_k;
    } else if (Robot_Student_2021_v1_B.Sum3_fz <
               Robot_Student_2021_v1_P.Saturation_LowerSat_i) {
      Robot_Student_2021_v1_B.Sum3_fz =
        Robot_Student_2021_v1_P.Saturation_LowerSat_i;
    }

    /* Saturate: '<S12>/Saturation' */
    if (Robot_Student_2021_v1_B.Sum3_fz >
        Robot_Student_2021_v1_P.Saturation_UpperSat_j) {
      /* Saturate: '<S12>/Saturation' */
      Robot_Student_2021_v1_B.Saturation[0] =
        Robot_Student_2021_v1_P.Saturation_UpperSat_j;
    } else if (Robot_Student_2021_v1_B.Sum3_fz <
               Robot_Student_2021_v1_P.Saturation_LowerSat_f) {
      /* Saturate: '<S12>/Saturation' */
      Robot_Student_2021_v1_B.Saturation[0] =
        Robot_Student_2021_v1_P.Saturation_LowerSat_f;
    } else {
      /* Saturate: '<S12>/Saturation' */
      Robot_Student_2021_v1_B.Saturation[0] = Robot_Student_2021_v1_B.Sum3_fz;
    }

    /* Sum: '<S10>/Sum4' incorporates:
     *  Constant: '<S10>/Voltage middle'
     *  Product: '<S20>/Product1'
     */
    Robot_Student_2021_v1_B.Sum3_fz =
      Robot_Student_2021_v1_P.Voltagemiddle_Value -
      Robot_Student_2021_v1_B.Sum4_k * Robot_Student_2021_v1_B.controlEnabled_b;

    /* Saturate: '<S10>/Saturation' */
    if (Robot_Student_2021_v1_B.Sum3_fz >
        Robot_Student_2021_v1_P.Saturation_UpperSat_k) {
      Robot_Student_2021_v1_B.Sum3_fz =
        Robot_Student_2021_v1_P.Saturation_UpperSat_k;
    } else if (Robot_Student_2021_v1_B.Sum3_fz <
               Robot_Student_2021_v1_P.Saturation_LowerSat_i) {
      Robot_Student_2021_v1_B.Sum3_fz =
        Robot_Student_2021_v1_P.Saturation_LowerSat_i;
    }

    /* Saturate: '<S12>/Saturation' */
    if (Robot_Student_2021_v1_B.Sum3_fz >
        Robot_Student_2021_v1_P.Saturation_UpperSat_j) {
      /* Saturate: '<S12>/Saturation' */
      Robot_Student_2021_v1_B.Saturation[1] =
        Robot_Student_2021_v1_P.Saturation_UpperSat_j;
    } else if (Robot_Student_2021_v1_B.Sum3_fz <
               Robot_Student_2021_v1_P.Saturation_LowerSat_f) {
      /* Saturate: '<S12>/Saturation' */
      Robot_Student_2021_v1_B.Saturation[1] =
        Robot_Student_2021_v1_P.Saturation_LowerSat_f;
    } else {
      /* Saturate: '<S12>/Saturation' */
      Robot_Student_2021_v1_B.Saturation[1] = Robot_Student_2021_v1_B.Sum3_fz;
    }

    /* Gain: '<S13>/Gain' */
    Robot_Student_2021_v1_B.Gain_h[0] = Robot_Student_2021_v1_P.Gain_Gain_ps *
      0.0;
    Robot_Student_2021_v1_B.Gain_h[1] = Robot_Student_2021_v1_P.Gain_Gain_ps *
      0.0;

    /* Derivative: '<S54>/Derivative' */
    if ((Robot_Student_2021_v1_DW.TimeStampA_k >= Robot_Student_2021_v1_B.u) &&
        (Robot_Student_2021_v1_DW.TimeStampB_d >= Robot_Student_2021_v1_B.u)) {
      /* Derivative: '<S54>/Derivative' */
      Robot_Student_2021_v1_B.Derivative_n = 0.0;
    } else {
      Robot_Student_2021_v1_B.lastTime = Robot_Student_2021_v1_DW.TimeStampA_k;
      lastU = &Robot_Student_2021_v1_DW.LastUAtTimeA_h;
      if (Robot_Student_2021_v1_DW.TimeStampA_k <
          Robot_Student_2021_v1_DW.TimeStampB_d) {
        if (Robot_Student_2021_v1_DW.TimeStampB_d < Robot_Student_2021_v1_B.u) {
          Robot_Student_2021_v1_B.lastTime =
            Robot_Student_2021_v1_DW.TimeStampB_d;
          lastU = &Robot_Student_2021_v1_DW.LastUAtTimeB_k;
        }
      } else if (Robot_Student_2021_v1_DW.TimeStampA_k >=
                 Robot_Student_2021_v1_B.u) {
        Robot_Student_2021_v1_B.lastTime = Robot_Student_2021_v1_DW.TimeStampB_d;
        lastU = &Robot_Student_2021_v1_DW.LastUAtTimeB_k;
      }

      /* Derivative: '<S54>/Derivative' */
      Robot_Student_2021_v1_B.Derivative_n = (Robot_Student_2021_v1_B.Sum_g -
        *lastU) / (Robot_Student_2021_v1_B.u - Robot_Student_2021_v1_B.lastTime);
    }

    /* Derivative: '<S54>/Derivative1' */
    if ((Robot_Student_2021_v1_DW.TimeStampA_j >= Robot_Student_2021_v1_B.u) &&
        (Robot_Student_2021_v1_DW.TimeStampB_k >= Robot_Student_2021_v1_B.u)) {
      Robot_Student_2021_v1_B.Sum3_fz = 0.0;
    } else {
      Robot_Student_2021_v1_B.lastTime = Robot_Student_2021_v1_DW.TimeStampA_j;
      lastU = &Robot_Student_2021_v1_DW.LastUAtTimeA_j;
      if (Robot_Student_2021_v1_DW.TimeStampA_j <
          Robot_Student_2021_v1_DW.TimeStampB_k) {
        if (Robot_Student_2021_v1_DW.TimeStampB_k < Robot_Student_2021_v1_B.u) {
          Robot_Student_2021_v1_B.lastTime =
            Robot_Student_2021_v1_DW.TimeStampB_k;
          lastU = &Robot_Student_2021_v1_DW.LastUAtTimeB_d3;
        }
      } else if (Robot_Student_2021_v1_DW.TimeStampA_j >=
                 Robot_Student_2021_v1_B.u) {
        Robot_Student_2021_v1_B.lastTime = Robot_Student_2021_v1_DW.TimeStampB_k;
        lastU = &Robot_Student_2021_v1_DW.LastUAtTimeB_d3;
      }

      Robot_Student_2021_v1_B.Sum3_fz = (Robot_Student_2021_v1_B.Derivative_n - *
        lastU) / (Robot_Student_2021_v1_B.u - Robot_Student_2021_v1_B.lastTime);
    }

    /* Gain: '<S46>/Gain' */
    Robot_Student_2021_v1_B.Gain_e = Robot_Student_2021_v1_P.Gain_Gain_d *
      Robot_Student_2021_v1_B.HomingRunningSwitch1_l;

    /* S-Function (dweakint): '<S46>/Dctintegrator' */

    /* Level2 S-Function Block: '<S46>/Dctintegrator' (dweakint) */
    {
      SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[17];
      sfcnOutputs(rts,0);
    }

    /* S-Function (dleadlag): '<S46>/Dctleadlag' */

    /* Level2 S-Function Block: '<S46>/Dctleadlag' (dleadlag) */
    {
      SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[18];
      sfcnOutputs(rts,0);
    }

    /* S-Function (dlowpass1): '<S46>/Dct1lowpass' */

    /* Level2 S-Function Block: '<S46>/Dct1lowpass' (dlowpass1) */
    {
      SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[19];
      sfcnOutputs(rts,0);
    }

    /* Logic: '<S21>/Logical Operator1' */
    Robot_Student_2021_v1_B.LogicalOperator1_o =
      !(Robot_Student_2021_v1_B.airBagEnabled != 0.0);

    /* Gain: '<S47>/Gain' incorporates:
     *  Sum: '<S21>/Sum1'
     */
    Robot_Student_2021_v1_B.Gain_i = (Robot_Student_2021_v1_B.airBagRef -
      Robot_Student_2021_v1_B.HomingRunningSwitch[2]) *
      Robot_Student_2021_v1_P.Gain_Gain_pq;

    /* S-Function (dleadlag): '<S47>/Dctleadlag' */

    /* Level2 S-Function Block: '<S47>/Dctleadlag' (dleadlag) */
    {
      SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[20];
      sfcnOutputs(rts,0);
    }

    /* S-Function (dlowpass1): '<S47>/Dct1lowpass' */

    /* Level2 S-Function Block: '<S47>/Dct1lowpass' (dlowpass1) */
    {
      SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[21];
      sfcnOutputs(rts,0);
    }

    /* Switch: '<S21>/AirbagSwitch' */
    if (Robot_Student_2021_v1_B.LogicalOperator1_o) {
      /* Switch: '<S21>/Homing Running Switch' incorporates:
       *  Gain: '<S54>/Kfa'
       *  Gain: '<S54>/Kfc'
       *  Gain: '<S54>/Kfv'
       *  Product: '<S21>/Product'
       *  Sum: '<S21>/Sum3'
       *  Sum: '<S54>/Sum'
       *  Sum: '<S54>/Sum1'
       */
      if (Robot_Student_2021_v1_B.homingBusy_b >=
          Robot_Student_2021_v1_P.HomingRunningSwitch_Threshold_j) {
        /* Signum: '<S54>/Sign' */
        if (Robot_Student_2021_v1_B.Derivative_n < 0.0) {
          Robot_Student_2021_v1_B.u = -1.0;
        } else if (Robot_Student_2021_v1_B.Derivative_n > 0.0) {
          Robot_Student_2021_v1_B.u = 1.0;
        } else if (Robot_Student_2021_v1_B.Derivative_n == 0.0) {
          Robot_Student_2021_v1_B.u = 0.0;
        } else {
          Robot_Student_2021_v1_B.u = (rtNaN);
        }

        /* End of Signum: '<S54>/Sign' */
        Robot_Student_2021_v1_B.HomingRunningSwitch1_l =
          (((Robot_Student_2021_v1_P.Kfv_Gain_f *
             Robot_Student_2021_v1_B.Derivative_n +
             Robot_Student_2021_v1_P.Kfa_Gain_j *
             Robot_Student_2021_v1_B.Sum3_fz) +
            Robot_Student_2021_v1_P.Kfc_Gain_g * Robot_Student_2021_v1_B.u) +
           Robot_Student_2021_v1_B.Dct1lowpass_ft) *
          Robot_Student_2021_v1_B.homeControllerEnabled_h;
      } else {
        Robot_Student_2021_v1_B.HomingRunningSwitch1_l =
          Robot_Student_2021_v1_B.Sum6;
      }

      /* End of Switch: '<S21>/Homing Running Switch' */
    } else {
      Robot_Student_2021_v1_B.HomingRunningSwitch1_l =
        Robot_Student_2021_v1_B.Dct1lowpass_a;
    }

    /* End of Switch: '<S21>/AirbagSwitch' */

    /* Sum: '<S10>/Sum5' incorporates:
     *  Constant: '<S10>/Voltage middle'
     *  Product: '<S21>/Product1'
     */
    Robot_Student_2021_v1_B.HomingRunningSwitch1_l =
      Robot_Student_2021_v1_B.HomingRunningSwitch1_l *
      Robot_Student_2021_v1_B.controlEnabled +
      Robot_Student_2021_v1_P.Voltagemiddle_Value;

    /* DiscreteIntegrator: '<S22>/Discrete-Time Integrator' */
    Robot_Student_2021_v1_B.DiscreteTimeIntegrator =
      Robot_Student_2021_v1_DW.DiscreteTimeIntegrator_DSTATE_k;

    /* Gain: '<S57>/Gain1' incorporates:
     *  Sum: '<S22>/Sum1'
     */
    Robot_Student_2021_v1_B.Gain1_n =
      (Robot_Student_2021_v1_B.DiscreteTimeIntegrator -
       Robot_Student_2021_v1_B.Gain3) * Robot_Student_2021_v1_P.Gain1_Gain_p;

    /* S-Function (dweakint): '<S57>/Dctintegrator3' */

    /* Level2 S-Function Block: '<S57>/Dctintegrator3' (dweakint) */
    {
      SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[22];
      sfcnOutputs(rts,0);
    }

    /* S-Function (dlowpass1): '<S57>/Dct1lowpass' */

    /* Level2 S-Function Block: '<S57>/Dct1lowpass' (dlowpass1) */
    {
      SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[23];
      sfcnOutputs(rts,0);
    }

    /* S-Function (dleadlag): '<S57>/Dctleadlag' */

    /* Level2 S-Function Block: '<S57>/Dctleadlag' (dleadlag) */
    {
      SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[24];
      sfcnOutputs(rts,0);
    }

    /* Switch: '<S22>/Homing Running Switch' incorporates:
     *  Product: '<S22>/Product'
     */
    if (Robot_Student_2021_v1_B.homingBusy >=
        Robot_Student_2021_v1_P.HomingRunningSwitch_Threshold_c) {
      Robot_Student_2021_v1_B.u = Robot_Student_2021_v1_B.Dctleadlag_f *
        Robot_Student_2021_v1_B.homeControllerEnabled;
    } else {
      Robot_Student_2021_v1_B.u = Robot_Student_2021_v1_B.Dctleadlag_d;
    }

    /* End of Switch: '<S22>/Homing Running Switch' */

    /* Sum: '<S10>/Sum1' incorporates:
     *  Constant: '<S10>/Voltage middle'
     *  Gain: '<S10>/Gain4'
     */
    Robot_Student_2021_v1_B.Sum1 = Robot_Student_2021_v1_P.Gain4_Gain *
      Robot_Student_2021_v1_B.u + Robot_Student_2021_v1_P.Voltagemiddle_Value;

    /* Saturate: '<S10>/Saturation1' */
    if (Robot_Student_2021_v1_B.HomingRunningSwitch1_l >
        Robot_Student_2021_v1_P.Saturation1_UpperSat) {
      Robot_Student_2021_v1_B.HomingRunningSwitch1_l =
        Robot_Student_2021_v1_P.Saturation1_UpperSat;
    } else if (Robot_Student_2021_v1_B.HomingRunningSwitch1_l <
               Robot_Student_2021_v1_P.Saturation1_LowerSat) {
      Robot_Student_2021_v1_B.HomingRunningSwitch1_l =
        Robot_Student_2021_v1_P.Saturation1_LowerSat;
    }

    /* Saturate: '<S13>/Saturation' */
    if (Robot_Student_2021_v1_B.HomingRunningSwitch1_l >
        Robot_Student_2021_v1_P.Saturation_UpperSat_g) {
      /* Saturate: '<S13>/Saturation' */
      Robot_Student_2021_v1_B.Saturation_n[0] =
        Robot_Student_2021_v1_P.Saturation_UpperSat_g;
    } else if (Robot_Student_2021_v1_B.HomingRunningSwitch1_l <
               Robot_Student_2021_v1_P.Saturation_LowerSat_g) {
      /* Saturate: '<S13>/Saturation' */
      Robot_Student_2021_v1_B.Saturation_n[0] =
        Robot_Student_2021_v1_P.Saturation_LowerSat_g;
    } else {
      /* Saturate: '<S13>/Saturation' */
      Robot_Student_2021_v1_B.Saturation_n[0] =
        Robot_Student_2021_v1_B.HomingRunningSwitch1_l;
    }

    /* Saturate: '<S10>/Saturation1' */
    if (Robot_Student_2021_v1_B.Sum1 >
        Robot_Student_2021_v1_P.Saturation1_UpperSat) {
      Robot_Student_2021_v1_B.HomingRunningSwitch1_l =
        Robot_Student_2021_v1_P.Saturation1_UpperSat;
    } else if (Robot_Student_2021_v1_B.Sum1 <
               Robot_Student_2021_v1_P.Saturation1_LowerSat) {
      Robot_Student_2021_v1_B.HomingRunningSwitch1_l =
        Robot_Student_2021_v1_P.Saturation1_LowerSat;
    } else {
      Robot_Student_2021_v1_B.HomingRunningSwitch1_l =
        Robot_Student_2021_v1_B.Sum1;
    }

    /* Saturate: '<S13>/Saturation' */
    if (Robot_Student_2021_v1_B.HomingRunningSwitch1_l >
        Robot_Student_2021_v1_P.Saturation_UpperSat_g) {
      /* Saturate: '<S13>/Saturation' */
      Robot_Student_2021_v1_B.Saturation_n[1] =
        Robot_Student_2021_v1_P.Saturation_UpperSat_g;
    } else if (Robot_Student_2021_v1_B.HomingRunningSwitch1_l <
               Robot_Student_2021_v1_P.Saturation_LowerSat_g) {
      /* Saturate: '<S13>/Saturation' */
      Robot_Student_2021_v1_B.Saturation_n[1] =
        Robot_Student_2021_v1_P.Saturation_LowerSat_g;
    } else {
      /* Saturate: '<S13>/Saturation' */
      Robot_Student_2021_v1_B.Saturation_n[1] =
        Robot_Student_2021_v1_B.HomingRunningSwitch1_l;
    }

    /* Gain: '<S14>/Gain' */
    Robot_Student_2021_v1_B.Gain_ii[0] = Robot_Student_2021_v1_P.Gain_Gain_m *
      0.0;
    Robot_Student_2021_v1_B.Gain_ii[1] = Robot_Student_2021_v1_P.Gain_Gain_m *
      0.0;

    /* Switch: '<S10>/Homing Running Switch1' incorporates:
     *  Constant: '<S10>/Constant1'
     */
    if (Robot_Student_2021_v1_B.Doubleclickswitch_c >=
        Robot_Student_2021_v1_P.HomingRunningSwitch1_Threshol_k) {
      Robot_Student_2021_v1_B.HomingRunningSwitch1_l =
        Robot_Student_2021_v1_P.Constant1_Value_f;
    } else {
      Robot_Student_2021_v1_B.HomingRunningSwitch1_l =
        Robot_Student_2021_v1_B.Gain1_o;
    }

    /* End of Switch: '<S10>/Homing Running Switch1' */

    /* Saturate: '<S10>/Saturation2' */
    if (Robot_Student_2021_v1_B.HomingRunningSwitch1_l >
        Robot_Student_2021_v1_P.Saturation2_UpperSat) {
      Robot_Student_2021_v1_B.HomingRunningSwitch1_l =
        Robot_Student_2021_v1_P.Saturation2_UpperSat;
    } else if (Robot_Student_2021_v1_B.HomingRunningSwitch1_l <
               Robot_Student_2021_v1_P.Saturation2_LowerSat) {
      Robot_Student_2021_v1_B.HomingRunningSwitch1_l =
        Robot_Student_2021_v1_P.Saturation2_LowerSat;
    }

    /* Saturate: '<S14>/Saturation' */
    if (Robot_Student_2021_v1_B.HomingRunningSwitch1_l >
        Robot_Student_2021_v1_P.Saturation_UpperSat_a) {
      /* Saturate: '<S14>/Saturation' */
      Robot_Student_2021_v1_B.Saturation_a[0] =
        Robot_Student_2021_v1_P.Saturation_UpperSat_a;
    } else if (Robot_Student_2021_v1_B.HomingRunningSwitch1_l <
               Robot_Student_2021_v1_P.Saturation_LowerSat_c) {
      /* Saturate: '<S14>/Saturation' */
      Robot_Student_2021_v1_B.Saturation_a[0] =
        Robot_Student_2021_v1_P.Saturation_LowerSat_c;
    } else {
      /* Saturate: '<S14>/Saturation' */
      Robot_Student_2021_v1_B.Saturation_a[0] =
        Robot_Student_2021_v1_B.HomingRunningSwitch1_l;
    }

    /* Saturate: '<S10>/Saturation2' */
    if (0.0 > Robot_Student_2021_v1_P.Saturation2_UpperSat) {
      Robot_Student_2021_v1_B.HomingRunningSwitch1_l =
        Robot_Student_2021_v1_P.Saturation2_UpperSat;
    } else if (0.0 < Robot_Student_2021_v1_P.Saturation2_LowerSat) {
      Robot_Student_2021_v1_B.HomingRunningSwitch1_l =
        Robot_Student_2021_v1_P.Saturation2_LowerSat;
    } else {
      Robot_Student_2021_v1_B.HomingRunningSwitch1_l = 0.0;
    }

    /* Saturate: '<S14>/Saturation' */
    if (Robot_Student_2021_v1_B.HomingRunningSwitch1_l >
        Robot_Student_2021_v1_P.Saturation_UpperSat_a) {
      /* Saturate: '<S14>/Saturation' */
      Robot_Student_2021_v1_B.Saturation_a[1] =
        Robot_Student_2021_v1_P.Saturation_UpperSat_a;
    } else if (Robot_Student_2021_v1_B.HomingRunningSwitch1_l <
               Robot_Student_2021_v1_P.Saturation_LowerSat_c) {
      /* Saturate: '<S14>/Saturation' */
      Robot_Student_2021_v1_B.Saturation_a[1] =
        Robot_Student_2021_v1_P.Saturation_LowerSat_c;
    } else {
      /* Saturate: '<S14>/Saturation' */
      Robot_Student_2021_v1_B.Saturation_a[1] =
        Robot_Student_2021_v1_B.HomingRunningSwitch1_l;
    }

    /* Switch: '<S18>/Homing Running Switch' incorporates:
     *  UnitDelay: '<S11>/Unit Delay1'
     */
    if (Robot_Student_2021_v1_DW.UnitDelay1_DSTATE >=
        Robot_Student_2021_v1_P.HomingRunningSwitch_Threshold_f) {
      /* Switch: '<S18>/Homing Running Switch1' incorporates:
       *  StringConstant: '<S11>/Homing Orange'
       *  Switch: '<S18>/Homing Running Switch'
       */
      if (Robot_Student_2021_v1_DW.UnitDelay1_DSTATE >=
          Robot_Student_2021_v1_P.HomingRunningSwitch1_Threshold) {
        /* Switch: '<S18>/Homing Running Switch2' incorporates:
         *  StringConstant: '<S11>/Airbag Red'
         *  StringConstant: '<S11>/Ready Green'
         *  Switch: '<S18>/Homing Running Switch'
         */
        if (Robot_Student_2021_v1_DW.UnitDelay1_DSTATE >=
            Robot_Student_2021_v1_P.HomingRunningSwitch2_Threshold) {
          strncpy(&Robot_Student_2021_v1_B.HomingRunningSwitch_c[0],
                  &Robot_Student_2021_v1_P.ReadyGreen_String[0], 255U);
          Robot_Student_2021_v1_B.HomingRunningSwitch_c[255] = '\x00';
        } else {
          strncpy(&Robot_Student_2021_v1_B.HomingRunningSwitch_c[0],
                  &Robot_Student_2021_v1_P.AirbagRed_String[0], 255U);
          Robot_Student_2021_v1_B.HomingRunningSwitch_c[255] = '\x00';
        }

        /* End of Switch: '<S18>/Homing Running Switch2' */
      } else {
        strncpy(&Robot_Student_2021_v1_B.HomingRunningSwitch_c[0],
                &Robot_Student_2021_v1_P.HomingOrange_String[0], 255U);
        Robot_Student_2021_v1_B.HomingRunningSwitch_c[255] = '\x00';
      }

      /* End of Switch: '<S18>/Homing Running Switch1' */
    } else {
      strncpy(&Robot_Student_2021_v1_B.HomingRunningSwitch_c[0],
              &Robot_Student_2021_v1_B.ManualSwitch1[0], 255U);
      Robot_Student_2021_v1_B.HomingRunningSwitch_c[255] = '\x00';
    }

    /* End of Switch: '<S18>/Homing Running Switch' */

    /* Outputs for Enabled SubSystem: '<S23>/Subsystem3' incorporates:
     *  EnablePort: '<S25>/Enable'
     */
    /* Logic: '<S24>/NOT' incorporates:
     *  Delay: '<S24>/Delay'
     *  StringCompare: '<S24>/String Compare'
     */
    if (strcmp(&Robot_Student_2021_v1_B.HomingRunningSwitch_c[0],
               &Robot_Student_2021_v1_DW.Delay_DSTATE[0]) != 0) {
      /* If: '<S25>/If' incorporates:
       *  Constant: '<S26>/Constant1'
       *  Constant: '<S27>/Constant'
       *  StringCompare: '<S25>/String Compare'
       *  StringConstant: '<S25>/String Constant4'
       */
      if (strcmp(&Robot_Student_2021_v1_B.HomingRunningSwitch_c[0],
                 &Robot_Student_2021_v1_P.StringConstant4_String[0]) == 0) {
        /* Outputs for IfAction SubSystem: '<S25>/If Action Subsystem' incorporates:
         *  ActionPort: '<S26>/Action Port'
         */
        /* StringToASCII: '<S26>/String to ASCII1' */
        strncpy(&Robot_Student_2021_v1_B.cv[0],
                &Robot_Student_2021_v1_B.HomingRunningSwitch_c[0], 31U);
        for (i = 0; i < 31; i++) {
          Robot_Student_2021_v1_B.MatrixConcatenate1[i] = (uint8_T)
            Robot_Student_2021_v1_B.cv[i];
        }

        /* End of StringToASCII: '<S26>/String to ASCII1' */
        Robot_Student_2021_v1_B.MatrixConcatenate1[31] =
          Robot_Student_2021_v1_P.Constant1_Value_b;
        Robot_Student_2021_SerialWrite1
          (Robot_Student_2021_v1_B.MatrixConcatenate1,
           &Robot_Student_2021_v1_DW.SerialWrite1);

        /* End of Outputs for SubSystem: '<S25>/If Action Subsystem' */

        /* Update for IfAction SubSystem: '<S25>/If Action Subsystem' incorporates:
         *  ActionPort: '<S26>/Action Port'
         */
        /* Update for If: '<S25>/If' incorporates:
         *  Constant: '<S26>/Constant1'
         */
        srUpdateBC(Robot_Student_2021_v1_DW.IfActionSubsystem_SubsysRanBC);

        /* End of Update for SubSystem: '<S25>/If Action Subsystem' */
      } else {
        /* Outputs for IfAction SubSystem: '<S25>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S27>/Action Port'
         */
        /* StringConcatenate: '<S27>/String Concatenate' incorporates:
         *  StringConstant: '<S27>/String Constant1'
         *  StringConstant: '<S27>/String Constant3'
         */
        Robot_Student_2021_v1_B.rtb_StringConcatenate_m[0] = '\x00';
        strncat(&Robot_Student_2021_v1_B.rtb_StringConcatenate_m[0],
                &Robot_Student_2021_v1_P.StringConstant3_String[0], 255U);
        i = (int32_T)strlen(&Robot_Student_2021_v1_B.rtb_StringConcatenate_m[0]);
        strncat(&Robot_Student_2021_v1_B.rtb_StringConcatenate_m[i],
                &Robot_Student_2021_v1_B.HomingRunningSwitch_c[0], 255U - i);
        i += (int32_T)strlen(&Robot_Student_2021_v1_B.rtb_StringConcatenate_m[i]);
        strncat(&Robot_Student_2021_v1_B.rtb_StringConcatenate_m[i],
                &Robot_Student_2021_v1_P.StringConstant1_String[0], 255U - i);

        /* StringToASCII: '<S27>/String to ASCII' incorporates:
         *  StringConcatenate: '<S27>/String Concatenate'
         */
        strncpy(&Robot_Student_2021_v1_B.cv[0],
                &Robot_Student_2021_v1_B.rtb_StringConcatenate_m[0], 31U);
        for (i = 0; i < 31; i++) {
          Robot_Student_2021_v1_B.MatrixConcatenate[i] = (uint8_T)
            Robot_Student_2021_v1_B.cv[i];
        }

        /* End of StringToASCII: '<S27>/String to ASCII' */
        Robot_Student_2021_v1_B.MatrixConcatenate[31] =
          Robot_Student_2021_v1_P.Constant_Value_c;
        Robot_Student_2021_SerialWrite1
          (Robot_Student_2021_v1_B.MatrixConcatenate,
           &Robot_Student_2021_v1_DW.SerialWrite);

        /* End of Outputs for SubSystem: '<S25>/If Action Subsystem1' */

        /* Update for IfAction SubSystem: '<S25>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S27>/Action Port'
         */
        /* Update for If: '<S25>/If' incorporates:
         *  Constant: '<S27>/Constant'
         */
        srUpdateBC(Robot_Student_2021_v1_DW.IfActionSubsystem1_SubsysRanBC);

        /* End of Update for SubSystem: '<S25>/If Action Subsystem1' */
      }

      /* End of If: '<S25>/If' */
      srUpdateBC(Robot_Student_2021_v1_DW.Subsystem3_SubsysRanBC);
    }

    /* End of Logic: '<S24>/NOT' */
    /* End of Outputs for SubSystem: '<S23>/Subsystem3' */

    /* Sum: '<S11>/Add' */
    Robot_Student_2021_v1_B.Add = ((Robot_Student_2021_v1_B.Ready_n +
      Robot_Student_2021_v1_B.Ready_l) + Robot_Student_2021_v1_B.Ready_p) +
      Robot_Student_2021_v1_B.Ready;

    /* Sum: '<S11>/Add1' incorporates:
     *  Gain: '<S11>/Gain'
     *  Logic: '<S11>/NOT'
     */
    Robot_Student_2021_v1_B.Add1_c = (((Robot_Student_2021_v1_P.Gain_Gain_l *
      Robot_Student_2021_v1_B.airBagEnabled_ab +
      Robot_Student_2021_v1_P.Gain_Gain_l *
      Robot_Student_2021_v1_B.airBagEnabled_a) +
      Robot_Student_2021_v1_P.Gain_Gain_l *
      Robot_Student_2021_v1_B.airBagEnabled) + (real_T)
      !(Robot_Student_2021_v1_B.Add1 != 0.0)) +
      Robot_Student_2021_v1_B.homingBusy_n;

    /* S-Function (ec_EboxResetEnc): '<S19>/Reset EncoderR' */

    /* Level2 S-Function Block: '<S19>/Reset EncoderR' (ec_EboxResetEnc) */
    {
      SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[25];
      sfcnOutputs(rts,0);
    }

    /* Stop: '<S19>/Stop Simulation' */
    if (Robot_Student_2021_v1_B.StopSim_n != 0.0) {
      rtmSetStopRequested(Robot_Student_2021_v1_M, 1);
    }

    /* End of Stop: '<S19>/Stop Simulation' */

    /* Sum: '<S56>/Diff' incorporates:
     *  Sum: '<S32>/Sum'
     */
    Robot_Student_2021_v1_B.LimitAcceleration_b =
      Robot_Student_2021_v1_B.toPoint_i + Robot_Student_2021_v1_B.Constant1;

    /* RateLimiter: '<S32>/Limit Speed' */
    Robot_Student_2021_v1_B.HomingRunningSwitch1_l =
      Robot_Student_2021_v1_B.LimitAcceleration_b -
      Robot_Student_2021_v1_DW.PrevY;
    if (Robot_Student_2021_v1_B.HomingRunningSwitch1_l >
        Robot_Student_2021_v1_P.LimitSpeed_RisingLim *
        Robot_Student_2021_v1_period) {
      /* Sum: '<S56>/Diff' */
      Robot_Student_2021_v1_B.LimitAcceleration_b =
        Robot_Student_2021_v1_P.LimitSpeed_RisingLim *
        Robot_Student_2021_v1_period + Robot_Student_2021_v1_DW.PrevY;
    } else if (Robot_Student_2021_v1_B.HomingRunningSwitch1_l <
               Robot_Student_2021_v1_P.LimitSpeed_FallingLim *
               Robot_Student_2021_v1_period) {
      /* Sum: '<S56>/Diff' */
      Robot_Student_2021_v1_B.LimitAcceleration_b =
        Robot_Student_2021_v1_P.LimitSpeed_FallingLim *
        Robot_Student_2021_v1_period + Robot_Student_2021_v1_DW.PrevY;
    }

    Robot_Student_2021_v1_DW.PrevY = Robot_Student_2021_v1_B.LimitAcceleration_b;

    /* End of RateLimiter: '<S32>/Limit Speed' */

    /* SampleTimeMath: '<S35>/TSamp'
     *
     * About '<S35>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    Robot_Student_2021_v1_B.TSamp = Robot_Student_2021_v1_B.LimitAcceleration_b *
      Robot_Student_2021_v1_P.TSamp_WtEt;

    /* Sum: '<S56>/Diff' incorporates:
     *  Sum: '<S35>/Diff'
     *  UnitDelay: '<S35>/UD'
     */
    Robot_Student_2021_v1_B.LimitAcceleration_b = Robot_Student_2021_v1_B.TSamp
      - Robot_Student_2021_v1_DW.UD_DSTATE;

    /* RateLimiter: '<S32>/Limit Acceleration' */
    Robot_Student_2021_v1_B.HomingRunningSwitch1_l =
      Robot_Student_2021_v1_B.LimitAcceleration_b -
      Robot_Student_2021_v1_DW.PrevY_n;
    if (Robot_Student_2021_v1_B.HomingRunningSwitch1_l >
        Robot_Student_2021_v1_P.LimitAcceleration_RisingLim *
        Robot_Student_2021_v1_period) {
      /* RateLimiter: '<S32>/Limit Acceleration' */
      Robot_Student_2021_v1_B.LimitAcceleration =
        Robot_Student_2021_v1_P.LimitAcceleration_RisingLim *
        Robot_Student_2021_v1_period + Robot_Student_2021_v1_DW.PrevY_n;
    } else if (Robot_Student_2021_v1_B.HomingRunningSwitch1_l <
               Robot_Student_2021_v1_P.LimitAcceleration_FallingLim *
               Robot_Student_2021_v1_period) {
      /* RateLimiter: '<S32>/Limit Acceleration' */
      Robot_Student_2021_v1_B.LimitAcceleration =
        Robot_Student_2021_v1_P.LimitAcceleration_FallingLim *
        Robot_Student_2021_v1_period + Robot_Student_2021_v1_DW.PrevY_n;
    } else {
      /* RateLimiter: '<S32>/Limit Acceleration' */
      Robot_Student_2021_v1_B.LimitAcceleration =
        Robot_Student_2021_v1_B.LimitAcceleration_b;
    }

    Robot_Student_2021_v1_DW.PrevY_n = Robot_Student_2021_v1_B.LimitAcceleration;

    /* End of RateLimiter: '<S32>/Limit Acceleration' */

    /* S-Function (ec_EboxResetEnc): '<S20>/Reset EncoderX' */

    /* Level2 S-Function Block: '<S20>/Reset EncoderX' (ec_EboxResetEnc) */
    {
      SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[26];
      sfcnOutputs(rts,0);
    }

    /* Stop: '<S20>/Stop Simulation' */
    if (Robot_Student_2021_v1_B.StopSim_p != 0.0) {
      rtmSetStopRequested(Robot_Student_2021_v1_M, 1);
    }

    /* End of Stop: '<S20>/Stop Simulation' */

    /* Sum: '<S56>/Diff' incorporates:
     *  Sum: '<S39>/Sum'
     */
    Robot_Student_2021_v1_B.LimitAcceleration_b =
      Robot_Student_2021_v1_B.toPoint_h + Robot_Student_2021_v1_B.Constant1_c;

    /* RateLimiter: '<S39>/Limit Speed' */
    Robot_Student_2021_v1_B.HomingRunningSwitch1_l =
      Robot_Student_2021_v1_B.LimitAcceleration_b -
      Robot_Student_2021_v1_DW.PrevY_h;
    if (Robot_Student_2021_v1_B.HomingRunningSwitch1_l >
        Robot_Student_2021_v1_P.LimitSpeed_RisingLim_d *
        Robot_Student_2021_v1_period) {
      /* Sum: '<S56>/Diff' */
      Robot_Student_2021_v1_B.LimitAcceleration_b =
        Robot_Student_2021_v1_P.LimitSpeed_RisingLim_d *
        Robot_Student_2021_v1_period + Robot_Student_2021_v1_DW.PrevY_h;
    } else if (Robot_Student_2021_v1_B.HomingRunningSwitch1_l <
               Robot_Student_2021_v1_P.LimitSpeed_FallingLim_j *
               Robot_Student_2021_v1_period) {
      /* Sum: '<S56>/Diff' */
      Robot_Student_2021_v1_B.LimitAcceleration_b =
        Robot_Student_2021_v1_P.LimitSpeed_FallingLim_j *
        Robot_Student_2021_v1_period + Robot_Student_2021_v1_DW.PrevY_h;
    }

    Robot_Student_2021_v1_DW.PrevY_h =
      Robot_Student_2021_v1_B.LimitAcceleration_b;

    /* End of RateLimiter: '<S39>/Limit Speed' */

    /* SampleTimeMath: '<S45>/TSamp'
     *
     * About '<S45>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    Robot_Student_2021_v1_B.TSamp_m =
      Robot_Student_2021_v1_B.LimitAcceleration_b *
      Robot_Student_2021_v1_P.TSamp_WtEt_h;

    /* Sum: '<S56>/Diff' incorporates:
     *  Sum: '<S45>/Diff'
     *  UnitDelay: '<S45>/UD'
     */
    Robot_Student_2021_v1_B.LimitAcceleration_b =
      Robot_Student_2021_v1_B.TSamp_m - Robot_Student_2021_v1_DW.UD_DSTATE_n;

    /* RateLimiter: '<S39>/Limit Acceleration' */
    Robot_Student_2021_v1_B.HomingRunningSwitch1_l =
      Robot_Student_2021_v1_B.LimitAcceleration_b -
      Robot_Student_2021_v1_DW.PrevY_m;
    if (Robot_Student_2021_v1_B.HomingRunningSwitch1_l >
        Robot_Student_2021_v1_P.LimitAcceleration_RisingLim_c *
        Robot_Student_2021_v1_period) {
      /* RateLimiter: '<S39>/Limit Acceleration' */
      Robot_Student_2021_v1_B.LimitAcceleration_c =
        Robot_Student_2021_v1_P.LimitAcceleration_RisingLim_c *
        Robot_Student_2021_v1_period + Robot_Student_2021_v1_DW.PrevY_m;
    } else if (Robot_Student_2021_v1_B.HomingRunningSwitch1_l <
               Robot_Student_2021_v1_P.LimitAcceleration_FallingLim_m *
               Robot_Student_2021_v1_period) {
      /* RateLimiter: '<S39>/Limit Acceleration' */
      Robot_Student_2021_v1_B.LimitAcceleration_c =
        Robot_Student_2021_v1_P.LimitAcceleration_FallingLim_m *
        Robot_Student_2021_v1_period + Robot_Student_2021_v1_DW.PrevY_m;
    } else {
      /* RateLimiter: '<S39>/Limit Acceleration' */
      Robot_Student_2021_v1_B.LimitAcceleration_c =
        Robot_Student_2021_v1_B.LimitAcceleration_b;
    }

    Robot_Student_2021_v1_DW.PrevY_m =
      Robot_Student_2021_v1_B.LimitAcceleration_c;

    /* End of RateLimiter: '<S39>/Limit Acceleration' */

    /* S-Function (ec_EboxResetEnc): '<S21>/Reset EncoderX' */

    /* Level2 S-Function Block: '<S21>/Reset EncoderX' (ec_EboxResetEnc) */
    {
      SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[27];
      sfcnOutputs(rts,0);
    }

    /* Stop: '<S21>/Stop Simulation' */
    if (Robot_Student_2021_v1_B.StopSim_o != 0.0) {
      rtmSetStopRequested(Robot_Student_2021_v1_M, 1);
    }

    /* End of Stop: '<S21>/Stop Simulation' */

    /* Sum: '<S56>/Diff' incorporates:
     *  Sum: '<S49>/Sum'
     */
    Robot_Student_2021_v1_B.LimitAcceleration_b =
      Robot_Student_2021_v1_B.toPoint + Robot_Student_2021_v1_B.Constant1_k;

    /* RateLimiter: '<S49>/Limit Speed' */
    Robot_Student_2021_v1_B.HomingRunningSwitch1_l =
      Robot_Student_2021_v1_B.LimitAcceleration_b -
      Robot_Student_2021_v1_DW.PrevY_c;
    if (Robot_Student_2021_v1_B.HomingRunningSwitch1_l >
        Robot_Student_2021_v1_P.LimitSpeed_RisingLim_m *
        Robot_Student_2021_v1_period) {
      /* Sum: '<S56>/Diff' */
      Robot_Student_2021_v1_B.LimitAcceleration_b =
        Robot_Student_2021_v1_P.LimitSpeed_RisingLim_m *
        Robot_Student_2021_v1_period + Robot_Student_2021_v1_DW.PrevY_c;
    } else if (Robot_Student_2021_v1_B.HomingRunningSwitch1_l <
               Robot_Student_2021_v1_P.LimitSpeed_FallingLim_jw *
               Robot_Student_2021_v1_period) {
      /* Sum: '<S56>/Diff' */
      Robot_Student_2021_v1_B.LimitAcceleration_b =
        Robot_Student_2021_v1_P.LimitSpeed_FallingLim_jw *
        Robot_Student_2021_v1_period + Robot_Student_2021_v1_DW.PrevY_c;
    }

    Robot_Student_2021_v1_DW.PrevY_c =
      Robot_Student_2021_v1_B.LimitAcceleration_b;

    /* End of RateLimiter: '<S49>/Limit Speed' */

    /* SampleTimeMath: '<S56>/TSamp'
     *
     * About '<S56>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    Robot_Student_2021_v1_B.TSamp_j =
      Robot_Student_2021_v1_B.LimitAcceleration_b *
      Robot_Student_2021_v1_P.TSamp_WtEt_i;

    /* Sum: '<S56>/Diff' incorporates:
     *  UnitDelay: '<S56>/UD'
     */
    Robot_Student_2021_v1_B.LimitAcceleration_b =
      Robot_Student_2021_v1_B.TSamp_j - Robot_Student_2021_v1_DW.UD_DSTATE_e;

    /* RateLimiter: '<S49>/Limit Acceleration' */
    Robot_Student_2021_v1_B.HomingRunningSwitch1_l =
      Robot_Student_2021_v1_B.LimitAcceleration_b -
      Robot_Student_2021_v1_DW.PrevY_mz;
    if (Robot_Student_2021_v1_B.HomingRunningSwitch1_l >
        Robot_Student_2021_v1_P.LimitAcceleration_RisingLim_j *
        Robot_Student_2021_v1_period) {
      /* Sum: '<S56>/Diff' incorporates:
       *  RateLimiter: '<S49>/Limit Acceleration'
       */
      Robot_Student_2021_v1_B.LimitAcceleration_b =
        Robot_Student_2021_v1_P.LimitAcceleration_RisingLim_j *
        Robot_Student_2021_v1_period + Robot_Student_2021_v1_DW.PrevY_mz;
    } else if (Robot_Student_2021_v1_B.HomingRunningSwitch1_l <
               Robot_Student_2021_v1_P.LimitAcceleration_FallingLim_h *
               Robot_Student_2021_v1_period) {
      /* Sum: '<S56>/Diff' incorporates:
       *  RateLimiter: '<S49>/Limit Acceleration'
       */
      Robot_Student_2021_v1_B.LimitAcceleration_b =
        Robot_Student_2021_v1_P.LimitAcceleration_FallingLim_h *
        Robot_Student_2021_v1_period + Robot_Student_2021_v1_DW.PrevY_mz;
    }

    Robot_Student_2021_v1_DW.PrevY_mz =
      Robot_Student_2021_v1_B.LimitAcceleration_b;

    /* End of RateLimiter: '<S49>/Limit Acceleration' */

    /* S-Function (ec_EboxResetEnc): '<S22>/Reset EncoderConv' */

    /* Level2 S-Function Block: '<S22>/Reset EncoderConv' (ec_EboxResetEnc) */
    {
      SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[28];
      sfcnOutputs(rts,0);
    }

    /* Stop: '<S22>/Stop Simulation' */
    if (Robot_Student_2021_v1_B.StopSim != 0.0) {
      rtmSetStopRequested(Robot_Student_2021_v1_M, 1);
    }

    /* End of Stop: '<S22>/Stop Simulation' */
  }

  {
    real_T *lastU;

    /* Update for DiscreteIntegrator: '<S19>/Discrete-Time Integrator' */
    Robot_Student_2021_v1_DW.DiscreteTimeIntegrator_DSTATE +=
      Robot_Student_2021_v1_P.DiscreteTimeIntegrator_gainval *
      Robot_Student_2021_v1_B.jogSpeed_p;

    /* Update for DiscreteIntegrator: '<S32>/Discrete-Time Integrator' */
    Robot_Student_2021_v1_DW.DiscreteTimeIntegrator_DSTATE_n +=
      Robot_Student_2021_v1_P.DiscreteTimeIntegrator_gainva_b *
      Robot_Student_2021_v1_B.LimitAcceleration;

    /* Update for UnitDelay: '<S11>/Unit Delay' */
    Robot_Student_2021_v1_DW.UnitDelay_DSTATE = Robot_Student_2021_v1_B.Add;

    /* Update for DiscreteIntegrator: '<S20>/Discrete-Time Integrator' */
    Robot_Student_2021_v1_DW.DiscreteTimeIntegrator_DSTATE_p +=
      Robot_Student_2021_v1_P.DiscreteTimeIntegrator_gainva_a *
      Robot_Student_2021_v1_B.jogSpeed_o;

    /* Update for DiscreteIntegrator: '<S39>/Discrete-Time Integrator' */
    Robot_Student_2021_v1_DW.DiscreteTimeIntegrator_DSTAT_pn +=
      Robot_Student_2021_v1_P.DiscreteTimeIntegrator_gainva_i *
      Robot_Student_2021_v1_B.LimitAcceleration_c;

    /* Update for DiscreteIntegrator: '<S21>/Discrete-Time Integrator' */
    Robot_Student_2021_v1_DW.DiscreteTimeIntegrator_DSTATE_c +=
      Robot_Student_2021_v1_P.DiscreteTimeIntegrator_gainv_ip *
      Robot_Student_2021_v1_B.jogSpeed_a;

    /* Update for DiscreteIntegrator: '<S49>/Discrete-Time Integrator' */
    Robot_Student_2021_v1_DW.DiscreteTimeIntegrator_DSTATE_i +=
      Robot_Student_2021_v1_P.DiscreteTimeIntegrator_gainva_n *
      Robot_Student_2021_v1_B.LimitAcceleration_b;

    /* Update for Enabled SubSystem: '<Root>/Controller' incorporates:
     *  EnablePort: '<S1>/Enable '
     */
    if (Robot_Student_2021_v1_DW.Controller_MODE) {
      /* Update for RandomNumber: '<S1>/Random Number' */
      Robot_Student_2021_v1_DW.NextOutput = rt_nrand_Upu32_Yd_f_pw_snf
        (&Robot_Student_2021_v1_DW.RandSeed) *
        Robot_Student_2021_v1_P.RandomNumber_StdDev +
        Robot_Student_2021_v1_P.RandomNumber_Mean;

      /* Update for DiscreteIntegrator: '<S1>/Discrete  integrator' */
      Robot_Student_2021_v1_DW.Discreteintegrator_DSTATE +=
        Robot_Student_2021_v1_P.Discreteintegrator_gainval *
        Robot_Student_2021_v1_B.Saturation_m;
    }

    /* End of Update for SubSystem: '<Root>/Controller' */

    /* Update for Derivative: '<S29>/Derivative' */
    if (Robot_Student_2021_v1_DW.TimeStampA == (rtInf)) {
      Robot_Student_2021_v1_DW.TimeStampA = Robot_Student_2021_v1_M->Timing.t[0];
      lastU = &Robot_Student_2021_v1_DW.LastUAtTimeA;
    } else if (Robot_Student_2021_v1_DW.TimeStampB == (rtInf)) {
      Robot_Student_2021_v1_DW.TimeStampB = Robot_Student_2021_v1_M->Timing.t[0];
      lastU = &Robot_Student_2021_v1_DW.LastUAtTimeB;
    } else if (Robot_Student_2021_v1_DW.TimeStampA <
               Robot_Student_2021_v1_DW.TimeStampB) {
      Robot_Student_2021_v1_DW.TimeStampA = Robot_Student_2021_v1_M->Timing.t[0];
      lastU = &Robot_Student_2021_v1_DW.LastUAtTimeA;
    } else {
      Robot_Student_2021_v1_DW.TimeStampB = Robot_Student_2021_v1_M->Timing.t[0];
      lastU = &Robot_Student_2021_v1_DW.LastUAtTimeB;
    }

    *lastU = Robot_Student_2021_v1_B.Sum;

    /* End of Update for Derivative: '<S29>/Derivative' */

    /* Update for Derivative: '<S29>/Derivative1' */
    if (Robot_Student_2021_v1_DW.TimeStampA_p == (rtInf)) {
      Robot_Student_2021_v1_DW.TimeStampA_p = Robot_Student_2021_v1_M->Timing.t
        [0];
      lastU = &Robot_Student_2021_v1_DW.LastUAtTimeA_f;
    } else if (Robot_Student_2021_v1_DW.TimeStampB_f == (rtInf)) {
      Robot_Student_2021_v1_DW.TimeStampB_f = Robot_Student_2021_v1_M->Timing.t
        [0];
      lastU = &Robot_Student_2021_v1_DW.LastUAtTimeB_d;
    } else if (Robot_Student_2021_v1_DW.TimeStampA_p <
               Robot_Student_2021_v1_DW.TimeStampB_f) {
      Robot_Student_2021_v1_DW.TimeStampA_p = Robot_Student_2021_v1_M->Timing.t
        [0];
      lastU = &Robot_Student_2021_v1_DW.LastUAtTimeA_f;
    } else {
      Robot_Student_2021_v1_DW.TimeStampB_f = Robot_Student_2021_v1_M->Timing.t
        [0];
      lastU = &Robot_Student_2021_v1_DW.LastUAtTimeB_d;
    }

    *lastU = Robot_Student_2021_v1_B.Derivative;

    /* End of Update for Derivative: '<S29>/Derivative1' */

    /* Update for Derivative: '<S38>/Derivative' */
    if (Robot_Student_2021_v1_DW.TimeStampA_d == (rtInf)) {
      Robot_Student_2021_v1_DW.TimeStampA_d = Robot_Student_2021_v1_M->Timing.t
        [0];
      lastU = &Robot_Student_2021_v1_DW.LastUAtTimeA_i;
    } else if (Robot_Student_2021_v1_DW.TimeStampB_p == (rtInf)) {
      Robot_Student_2021_v1_DW.TimeStampB_p = Robot_Student_2021_v1_M->Timing.t
        [0];
      lastU = &Robot_Student_2021_v1_DW.LastUAtTimeB_m;
    } else if (Robot_Student_2021_v1_DW.TimeStampA_d <
               Robot_Student_2021_v1_DW.TimeStampB_p) {
      Robot_Student_2021_v1_DW.TimeStampA_d = Robot_Student_2021_v1_M->Timing.t
        [0];
      lastU = &Robot_Student_2021_v1_DW.LastUAtTimeA_i;
    } else {
      Robot_Student_2021_v1_DW.TimeStampB_p = Robot_Student_2021_v1_M->Timing.t
        [0];
      lastU = &Robot_Student_2021_v1_DW.LastUAtTimeB_m;
    }

    *lastU = Robot_Student_2021_v1_B.Sum_a;

    /* End of Update for Derivative: '<S38>/Derivative' */

    /* Update for Derivative: '<S38>/Derivative1' */
    if (Robot_Student_2021_v1_DW.TimeStampA_h == (rtInf)) {
      Robot_Student_2021_v1_DW.TimeStampA_h = Robot_Student_2021_v1_M->Timing.t
        [0];
      lastU = &Robot_Student_2021_v1_DW.LastUAtTimeA_id;
    } else if (Robot_Student_2021_v1_DW.TimeStampB_c == (rtInf)) {
      Robot_Student_2021_v1_DW.TimeStampB_c = Robot_Student_2021_v1_M->Timing.t
        [0];
      lastU = &Robot_Student_2021_v1_DW.LastUAtTimeB_o;
    } else if (Robot_Student_2021_v1_DW.TimeStampA_h <
               Robot_Student_2021_v1_DW.TimeStampB_c) {
      Robot_Student_2021_v1_DW.TimeStampA_h = Robot_Student_2021_v1_M->Timing.t
        [0];
      lastU = &Robot_Student_2021_v1_DW.LastUAtTimeA_id;
    } else {
      Robot_Student_2021_v1_DW.TimeStampB_c = Robot_Student_2021_v1_M->Timing.t
        [0];
      lastU = &Robot_Student_2021_v1_DW.LastUAtTimeB_o;
    }

    *lastU = Robot_Student_2021_v1_B.Derivative_i;

    /* End of Update for Derivative: '<S38>/Derivative1' */

    /* Update for Derivative: '<S54>/Derivative' */
    if (Robot_Student_2021_v1_DW.TimeStampA_k == (rtInf)) {
      Robot_Student_2021_v1_DW.TimeStampA_k = Robot_Student_2021_v1_M->Timing.t
        [0];
      lastU = &Robot_Student_2021_v1_DW.LastUAtTimeA_h;
    } else if (Robot_Student_2021_v1_DW.TimeStampB_d == (rtInf)) {
      Robot_Student_2021_v1_DW.TimeStampB_d = Robot_Student_2021_v1_M->Timing.t
        [0];
      lastU = &Robot_Student_2021_v1_DW.LastUAtTimeB_k;
    } else if (Robot_Student_2021_v1_DW.TimeStampA_k <
               Robot_Student_2021_v1_DW.TimeStampB_d) {
      Robot_Student_2021_v1_DW.TimeStampA_k = Robot_Student_2021_v1_M->Timing.t
        [0];
      lastU = &Robot_Student_2021_v1_DW.LastUAtTimeA_h;
    } else {
      Robot_Student_2021_v1_DW.TimeStampB_d = Robot_Student_2021_v1_M->Timing.t
        [0];
      lastU = &Robot_Student_2021_v1_DW.LastUAtTimeB_k;
    }

    *lastU = Robot_Student_2021_v1_B.Sum_g;

    /* End of Update for Derivative: '<S54>/Derivative' */

    /* Update for Derivative: '<S54>/Derivative1' */
    if (Robot_Student_2021_v1_DW.TimeStampA_j == (rtInf)) {
      Robot_Student_2021_v1_DW.TimeStampA_j = Robot_Student_2021_v1_M->Timing.t
        [0];
      lastU = &Robot_Student_2021_v1_DW.LastUAtTimeA_j;
    } else if (Robot_Student_2021_v1_DW.TimeStampB_k == (rtInf)) {
      Robot_Student_2021_v1_DW.TimeStampB_k = Robot_Student_2021_v1_M->Timing.t
        [0];
      lastU = &Robot_Student_2021_v1_DW.LastUAtTimeB_d3;
    } else if (Robot_Student_2021_v1_DW.TimeStampA_j <
               Robot_Student_2021_v1_DW.TimeStampB_k) {
      Robot_Student_2021_v1_DW.TimeStampA_j = Robot_Student_2021_v1_M->Timing.t
        [0];
      lastU = &Robot_Student_2021_v1_DW.LastUAtTimeA_j;
    } else {
      Robot_Student_2021_v1_DW.TimeStampB_k = Robot_Student_2021_v1_M->Timing.t
        [0];
      lastU = &Robot_Student_2021_v1_DW.LastUAtTimeB_d3;
    }

    *lastU = Robot_Student_2021_v1_B.Derivative_n;

    /* End of Update for Derivative: '<S54>/Derivative1' */

    /* Update for DiscreteIntegrator: '<S22>/Discrete-Time Integrator' */
    Robot_Student_2021_v1_DW.DiscreteTimeIntegrator_DSTATE_k +=
      Robot_Student_2021_v1_P.DiscreteTimeIntegrator_gainva_c *
      Robot_Student_2021_v1_B.jogSpeed;

    /* Update for UnitDelay: '<S11>/Unit Delay1' */
    Robot_Student_2021_v1_DW.UnitDelay1_DSTATE = Robot_Student_2021_v1_B.Add1_c;

    /* Update for Delay: '<S24>/Delay' */
    strncpy(&Robot_Student_2021_v1_DW.Delay_DSTATE[0],
            &Robot_Student_2021_v1_B.HomingRunningSwitch_c[0], 255U);
    Robot_Student_2021_v1_DW.Delay_DSTATE[255] = '\x00';

    /* Update for UnitDelay: '<S35>/UD' */
    Robot_Student_2021_v1_DW.UD_DSTATE = Robot_Student_2021_v1_B.TSamp;

    /* Update for UnitDelay: '<S45>/UD' */
    Robot_Student_2021_v1_DW.UD_DSTATE_n = Robot_Student_2021_v1_B.TSamp_m;

    /* Update for UnitDelay: '<S56>/UD' */
    Robot_Student_2021_v1_DW.UD_DSTATE_e = Robot_Student_2021_v1_B.TSamp_j;
  }

  /* External mode */
  rtExtModeUploadCheckTrigger(2);

  {                                    /* Sample time: [0.0s, 0.0s] */
    rtExtModeUpload(0, (real_T)Robot_Student_2021_v1_M->Timing.t[0]);
  }

  {                                    /* Sample time: [0.00048828125s, 0.0s] */
    rtExtModeUpload(1, (real_T)Robot_Student_2021_v1_M->Timing.t[1]);
  }

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.0s, 0.0s] */
    if ((rtmGetTFinal(Robot_Student_2021_v1_M)!=-1) &&
        !((rtmGetTFinal(Robot_Student_2021_v1_M)-
           Robot_Student_2021_v1_M->Timing.t[0]) >
          Robot_Student_2021_v1_M->Timing.t[0] * (DBL_EPSILON))) {
      rtmSetErrorStatus(Robot_Student_2021_v1_M, "Simulation finished");
    }

    if (rtmGetStopRequested(Robot_Student_2021_v1_M)) {
      rtmSetErrorStatus(Robot_Student_2021_v1_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++Robot_Student_2021_v1_M->Timing.clockTick0)) {
    ++Robot_Student_2021_v1_M->Timing.clockTickH0;
  }

  Robot_Student_2021_v1_M->Timing.t[0] =
    Robot_Student_2021_v1_M->Timing.clockTick0 *
    Robot_Student_2021_v1_M->Timing.stepSize0 +
    Robot_Student_2021_v1_M->Timing.clockTickH0 *
    Robot_Student_2021_v1_M->Timing.stepSize0 * 4294967296.0;

  {
    /* Update absolute timer for sample time: [0.00048828125s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick1"
     * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++Robot_Student_2021_v1_M->Timing.clockTick1)) {
      ++Robot_Student_2021_v1_M->Timing.clockTickH1;
    }

    Robot_Student_2021_v1_M->Timing.t[1] =
      Robot_Student_2021_v1_M->Timing.clockTick1 *
      Robot_Student_2021_v1_M->Timing.stepSize1 +
      Robot_Student_2021_v1_M->Timing.clockTickH1 *
      Robot_Student_2021_v1_M->Timing.stepSize1 * 4294967296.0;
  }
}

/* Model initialize function */
void Robot_Student_2021_v1_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)Robot_Student_2021_v1_M, 0,
                sizeof(RT_MODEL_Robot_Student_2021_v1_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&Robot_Student_2021_v1_M->solverInfo,
                          &Robot_Student_2021_v1_M->Timing.simTimeStep);
    rtsiSetTPtr(&Robot_Student_2021_v1_M->solverInfo, &rtmGetTPtr
                (Robot_Student_2021_v1_M));
    rtsiSetStepSizePtr(&Robot_Student_2021_v1_M->solverInfo,
                       &Robot_Student_2021_v1_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&Robot_Student_2021_v1_M->solverInfo,
                          (&rtmGetErrorStatus(Robot_Student_2021_v1_M)));
    rtsiSetRTModelPtr(&Robot_Student_2021_v1_M->solverInfo,
                      Robot_Student_2021_v1_M);
  }

  rtsiSetSimTimeStep(&Robot_Student_2021_v1_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&Robot_Student_2021_v1_M->solverInfo,"FixedStepDiscrete");
  Robot_Student_2021_v1_M->solverInfoPtr = (&Robot_Student_2021_v1_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = Robot_Student_2021_v1_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    Robot_Student_2021_v1_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    Robot_Student_2021_v1_M->Timing.sampleTimes =
      (&Robot_Student_2021_v1_M->Timing.sampleTimesArray[0]);
    Robot_Student_2021_v1_M->Timing.offsetTimes =
      (&Robot_Student_2021_v1_M->Timing.offsetTimesArray[0]);

    /* task periods */
    Robot_Student_2021_v1_M->Timing.sampleTimes[0] = (0.0);
    Robot_Student_2021_v1_M->Timing.sampleTimes[1] = (0.00048828125);

    /* task offsets */
    Robot_Student_2021_v1_M->Timing.offsetTimes[0] = (0.0);
    Robot_Student_2021_v1_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(Robot_Student_2021_v1_M, &Robot_Student_2021_v1_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = Robot_Student_2021_v1_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    Robot_Student_2021_v1_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(Robot_Student_2021_v1_M, -1);
  Robot_Student_2021_v1_M->Timing.stepSize0 = 0.00048828125;
  Robot_Student_2021_v1_M->Timing.stepSize1 = 0.00048828125;

  /* External mode info */
  Robot_Student_2021_v1_M->Sizes.checksums[0] = (987665910U);
  Robot_Student_2021_v1_M->Sizes.checksums[1] = (3204608967U);
  Robot_Student_2021_v1_M->Sizes.checksums[2] = (3901648840U);
  Robot_Student_2021_v1_M->Sizes.checksums[3] = (1043714098U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[27];
    Robot_Student_2021_v1_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = (sysRanDType *)
      &Robot_Student_2021_v1_DW.Controller_SubsysRanBC;
    systemRan[2] = (sysRanDType *)
      &Robot_Student_2021_v1_DW.Controller_SubsysRanBC;
    systemRan[3] = (sysRanDType *)
      &Robot_Student_2021_v1_DW.Controller_SubsysRanBC;
    systemRan[4] = (sysRanDType *)
      &Robot_Student_2021_v1_DW.Controller_SubsysRanBC;
    systemRan[5] = (sysRanDType *)
      &Robot_Student_2021_v1_DW.Controller_SubsysRanBC;
    systemRan[6] = &rtAlwaysEnabled;
    systemRan[7] = (sysRanDType *)
      &Robot_Student_2021_v1_DW.IfActionSubsystem_SubsysRanBC;
    systemRan[8] = (sysRanDType *)
      &Robot_Student_2021_v1_DW.IfActionSubsystem_SubsysRanBC;
    systemRan[9] = (sysRanDType *)
      &Robot_Student_2021_v1_DW.IfActionSubsystem1_SubsysRanBC;
    systemRan[10] = (sysRanDType *)
      &Robot_Student_2021_v1_DW.IfActionSubsystem1_SubsysRanBC;
    systemRan[11] = (sysRanDType *)
      &Robot_Student_2021_v1_DW.Subsystem3_SubsysRanBC;
    systemRan[12] = &rtAlwaysEnabled;
    systemRan[13] = &rtAlwaysEnabled;
    systemRan[14] = &rtAlwaysEnabled;
    systemRan[15] = &rtAlwaysEnabled;
    systemRan[16] = &rtAlwaysEnabled;
    systemRan[17] = &rtAlwaysEnabled;
    systemRan[18] = &rtAlwaysEnabled;
    systemRan[19] = &rtAlwaysEnabled;
    systemRan[20] = &rtAlwaysEnabled;
    systemRan[21] = &rtAlwaysEnabled;
    systemRan[22] = &rtAlwaysEnabled;
    systemRan[23] = &rtAlwaysEnabled;
    systemRan[24] = &rtAlwaysEnabled;
    systemRan[25] = &rtAlwaysEnabled;
    systemRan[26] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(Robot_Student_2021_v1_M->extModeInfo,
      &Robot_Student_2021_v1_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(Robot_Student_2021_v1_M->extModeInfo,
                        Robot_Student_2021_v1_M->Sizes.checksums);
    rteiSetTPtr(Robot_Student_2021_v1_M->extModeInfo, rtmGetTPtr
                (Robot_Student_2021_v1_M));
  }

  Robot_Student_2021_v1_M->solverInfoPtr = (&Robot_Student_2021_v1_M->solverInfo);
  Robot_Student_2021_v1_M->Timing.stepSize = (0.00048828125);
  rtsiSetFixedStepSize(&Robot_Student_2021_v1_M->solverInfo, 0.00048828125);
  rtsiSetSolverMode(&Robot_Student_2021_v1_M->solverInfo,
                    SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  (void) memset(((void *) &Robot_Student_2021_v1_B), 0,
                sizeof(B_Robot_Student_2021_v1_T));

  /* states (dwork) */
  (void) memset((void *)&Robot_Student_2021_v1_DW, 0,
                sizeof(DW_Robot_Student_2021_v1_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    Robot_Student_2021_v1_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 17;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &Robot_Student_2021_v1_M->NonInlinedSFcns.sfcnInfo;
    Robot_Student_2021_v1_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(Robot_Student_2021_v1_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo,
      &Robot_Student_2021_v1_M->Sizes.numSampTimes);
    Robot_Student_2021_v1_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr
      (Robot_Student_2021_v1_M)[0]);
    Robot_Student_2021_v1_M->NonInlinedSFcns.taskTimePtrs[1] = &(rtmGetTPtr
      (Robot_Student_2021_v1_M)[1]);
    rtssSetTPtrPtr(sfcnInfo,
                   Robot_Student_2021_v1_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(Robot_Student_2021_v1_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(Robot_Student_2021_v1_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (Robot_Student_2021_v1_M));
    rtssSetStepSizePtr(sfcnInfo, &Robot_Student_2021_v1_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested
      (Robot_Student_2021_v1_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &Robot_Student_2021_v1_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &Robot_Student_2021_v1_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &Robot_Student_2021_v1_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo, &Robot_Student_2021_v1_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &Robot_Student_2021_v1_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &Robot_Student_2021_v1_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &Robot_Student_2021_v1_M->solverInfoPtr);
  }

  Robot_Student_2021_v1_M->Sizes.numSFcns = (29);

  /* register each child */
  {
    (void) memset((void *)
                  &Robot_Student_2021_v1_M->NonInlinedSFcns.childSFunctions[0],
                  0,
                  29*sizeof(SimStruct));
    Robot_Student_2021_v1_M->childSfunctions =
      (&Robot_Student_2021_v1_M->NonInlinedSFcns.childSFunctionPtrs[0]);

    {
      int_T i;
      for (i = 0; i < 29; i++) {
        Robot_Student_2021_v1_M->childSfunctions[i] =
          (&Robot_Student_2021_v1_M->NonInlinedSFcns.childSFunctions[i]);
      }
    }

    /* Level2 S-Function Block: Robot_Student_2021_v1/<S4>/Dctintegrator3 (dweakint) */
    {
      SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &Robot_Student_2021_v1_M->
                         NonInlinedSFcns.blkInfo2[0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Robot_Student_2021_v1_M->NonInlinedSFcns.inputOutputPortInfo2[0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Robot_Student_2021_v1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods4[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Robot_Student_2021_v1_M->NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn0.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn0.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn0.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn0.UPtrs0;
          sfcnUPtrs[0] = &Robot_Student_2021_v1_B.Gain1_g;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn0.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn0.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &Robot_Student_2021_v1_B.Dctintegrator3_n));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctintegrator3");
      ssSetPath(rts,
                "Robot_Student_2021_v1/Controller/Controller Conveyor/Dctintegrator3");
      ssSetRTModel(rts,Robot_Student_2021_v1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Robot_Student_2021_v1_P.Dctintegrator3_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Robot_Student_2021_v1_P.Dctintegrator3_P2_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &Robot_Student_2021_v1_DW.Dctintegrator3_RWORK_g[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Robot_Student_2021_v1_DW.Dctintegrator3_RWORK_g[0]);
      }

      /* registration */
      dweakint(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Robot_Student_2021_v1/<S4>/Dct1lowpass (dlowpass1) */
    {
      SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &Robot_Student_2021_v1_M->
                         NonInlinedSFcns.blkInfo2[1]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Robot_Student_2021_v1_M->NonInlinedSFcns.inputOutputPortInfo2[1]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Robot_Student_2021_v1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods2[1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods3[1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods4[1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Robot_Student_2021_v1_M->NonInlinedSFcns.statesInfo2[1]);
        ssSetPeriodicStatesInfo(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn1.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn1.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn1.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn1.UPtrs0;
          sfcnUPtrs[0] = &Robot_Student_2021_v1_B.Dctintegrator3_n;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn1.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn1.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn1.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &Robot_Student_2021_v1_B.Dct1lowpass_ab));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dct1lowpass");
      ssSetPath(rts,
                "Robot_Student_2021_v1/Controller/Controller Conveyor/Dct1lowpass");
      ssSetRTModel(rts,Robot_Student_2021_v1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Robot_Student_2021_v1_P.Dct1lowpass_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Robot_Student_2021_v1_P.Dct1lowpass_P2_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &Robot_Student_2021_v1_DW.Dct1lowpass_RWORK_c[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Robot_Student_2021_v1_DW.Dct1lowpass_RWORK_c[0]);
      }

      /* registration */
      dlowpass1(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Robot_Student_2021_v1/<S4>/Dctleadlag (dleadlag) */
    {
      SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &Robot_Student_2021_v1_M->
                         NonInlinedSFcns.blkInfo2[2]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Robot_Student_2021_v1_M->NonInlinedSFcns.inputOutputPortInfo2[2]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Robot_Student_2021_v1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods2[2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods3[2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods4[2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Robot_Student_2021_v1_M->NonInlinedSFcns.statesInfo2[2]);
        ssSetPeriodicStatesInfo(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn2.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn2.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn2.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn2.UPtrs0;
          sfcnUPtrs[0] = &Robot_Student_2021_v1_B.Dct1lowpass_ab;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn2.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn2.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn2.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &Robot_Student_2021_v1_B.Dctleadlag_d));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctleadlag");
      ssSetPath(rts,
                "Robot_Student_2021_v1/Controller/Controller Conveyor/Dctleadlag");
      ssSetRTModel(rts,Robot_Student_2021_v1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Robot_Student_2021_v1_P.Dctleadlag_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Robot_Student_2021_v1_P.Dctleadlag_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Robot_Student_2021_v1_P.Dctleadlag_P3_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &Robot_Student_2021_v1_DW.Dctleadlag_RWORK_g[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn2.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn2.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Robot_Student_2021_v1_DW.Dctleadlag_RWORK_g[0]);
      }

      /* registration */
      dleadlag(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Robot_Student_2021_v1/<S15>/S-Function (ec_Supervisor) */
    {
      SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &Robot_Student_2021_v1_M->
                         NonInlinedSFcns.blkInfo2[3]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Robot_Student_2021_v1_M->NonInlinedSFcns.inputOutputPortInfo2[3]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Robot_Student_2021_v1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods2[3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods3[3]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods4[3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Robot_Student_2021_v1_M->NonInlinedSFcns.statesInfo2[3]);
        ssSetPeriodicStatesInfo(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.periodicStatesInfo[3]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn3.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn3.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn3.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &Robot_Student_2021_v1_B.SFunction));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "Robot_Student_2021_v1/RobotArm/IO/Supervisor/S-Function");
      ssSetRTModel(rts,Robot_Student_2021_v1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Robot_Student_2021_v1_P.SFunction_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Robot_Student_2021_v1_P.SFunction_P2_Size);
      }

      /* registration */
      ec_Supervisor(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: Robot_Student_2021_v1/<S12>/ec_Ebox (ec_Ebox) */
    {
      SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[4];

      /* timing info */
      time_T *sfcnPeriod =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn4.sfcnPeriod;
      time_T *sfcnOffset =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn4.sfcnOffset;
      int_T *sfcnTsMap =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn4.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &Robot_Student_2021_v1_M->
                         NonInlinedSFcns.blkInfo2[4]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Robot_Student_2021_v1_M->NonInlinedSFcns.inputOutputPortInfo2[4]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Robot_Student_2021_v1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods2[4]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods3[4]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods4[4]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Robot_Student_2021_v1_M->NonInlinedSFcns.statesInfo2[4]);
        ssSetPeriodicStatesInfo(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.periodicStatesInfo[4]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 3);
        ssSetPortInfoForInputs(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn4.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn4.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        ssSetInputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn4.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);
        ssSetInputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn4.UPtrs0;
          sfcnUPtrs[0] = Robot_Student_2021_v1_B.Saturation;
          sfcnUPtrs[1] = &Robot_Student_2021_v1_B.Saturation[1];
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 2);
        }

        /* port 1 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn4.UPtrs1;
          sfcnUPtrs[0] = Robot_Student_2021_v1_B.Gain;
          sfcnUPtrs[1] = &Robot_Student_2021_v1_B.Gain[1];
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 2);
        }

        /* port 2 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn4.UPtrs2;

          {
            int_T i1;
            for (i1=0; i1 < 8; i1++) {
              sfcnUPtrs[i1] = ((const real_T*) &Robot_Student_2021_v1_RGND);
            }
          }

          ssSetInputPortSignalPtrs(rts, 2, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 8);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn4.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn4.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn4.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 2);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            Robot_Student_2021_v1_B.ec_Ebox_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 2);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            Robot_Student_2021_v1_B.ec_Ebox_o2));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 8);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            Robot_Student_2021_v1_B.ec_Ebox_o3));
        }
      }

      /* path info */
      ssSetModelName(rts, "ec_Ebox");
      ssSetPath(rts, "Robot_Student_2021_v1/RobotArm/IO/Ebox/ec_Ebox");
      ssSetRTModel(rts,Robot_Student_2021_v1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn4.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)Robot_Student_2021_v1_P.ec_Ebox_P1_Size);
      }

      /* registration */
      ec_Ebox(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetInputPortConnected(rts, 2, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
      ssSetInputPortBufferDstPort(rts, 2, -1);
    }

    /* Level2 S-Function Block: Robot_Student_2021_v1/<S13>/ec_Ebox (ec_Ebox) */
    {
      SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[5];

      /* timing info */
      time_T *sfcnPeriod =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn5.sfcnPeriod;
      time_T *sfcnOffset =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn5.sfcnOffset;
      int_T *sfcnTsMap =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn5.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &Robot_Student_2021_v1_M->
                         NonInlinedSFcns.blkInfo2[5]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Robot_Student_2021_v1_M->NonInlinedSFcns.inputOutputPortInfo2[5]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Robot_Student_2021_v1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods2[5]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods3[5]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods4[5]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Robot_Student_2021_v1_M->NonInlinedSFcns.statesInfo2[5]);
        ssSetPeriodicStatesInfo(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.periodicStatesInfo[5]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 3);
        ssSetPortInfoForInputs(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn5.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn5.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        ssSetInputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn5.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);
        ssSetInputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn5.UPtrs0;
          sfcnUPtrs[0] = Robot_Student_2021_v1_B.Saturation_n;
          sfcnUPtrs[1] = &Robot_Student_2021_v1_B.Saturation_n[1];
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 2);
        }

        /* port 1 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn5.UPtrs1;
          sfcnUPtrs[0] = Robot_Student_2021_v1_B.Gain_h;
          sfcnUPtrs[1] = &Robot_Student_2021_v1_B.Gain_h[1];
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 2);
        }

        /* port 2 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn5.UPtrs2;

          {
            int_T i1;
            for (i1=0; i1 < 8; i1++) {
              sfcnUPtrs[i1] = ((const real_T*) &Robot_Student_2021_v1_RGND);
            }
          }

          ssSetInputPortSignalPtrs(rts, 2, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 8);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn5.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn5.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn5.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 2);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            Robot_Student_2021_v1_B.ec_Ebox_o1_o));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 2);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            Robot_Student_2021_v1_B.ec_Ebox_o2_o));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 8);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            Robot_Student_2021_v1_B.ec_Ebox_o3_l));
        }
      }

      /* path info */
      ssSetModelName(rts, "ec_Ebox");
      ssSetPath(rts, "Robot_Student_2021_v1/RobotArm/IO/Ebox1/ec_Ebox");
      ssSetRTModel(rts,Robot_Student_2021_v1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn5.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Robot_Student_2021_v1_P.ec_Ebox_P1_Size_o);
      }

      /* registration */
      ec_Ebox(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetInputPortConnected(rts, 2, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
      ssSetInputPortBufferDstPort(rts, 2, -1);
    }

    /* Level2 S-Function Block: Robot_Student_2021_v1/<S14>/ec_Ebox (ec_Ebox) */
    {
      SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[6];

      /* timing info */
      time_T *sfcnPeriod =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn6.sfcnPeriod;
      time_T *sfcnOffset =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn6.sfcnOffset;
      int_T *sfcnTsMap =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn6.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &Robot_Student_2021_v1_M->
                         NonInlinedSFcns.blkInfo2[6]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Robot_Student_2021_v1_M->NonInlinedSFcns.inputOutputPortInfo2[6]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Robot_Student_2021_v1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods2[6]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods3[6]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods4[6]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Robot_Student_2021_v1_M->NonInlinedSFcns.statesInfo2[6]);
        ssSetPeriodicStatesInfo(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.periodicStatesInfo[6]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 3);
        ssSetPortInfoForInputs(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn6.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn6.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        ssSetInputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn6.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);
        ssSetInputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn6.UPtrs0;
          sfcnUPtrs[0] = Robot_Student_2021_v1_B.Saturation_a;
          sfcnUPtrs[1] = &Robot_Student_2021_v1_B.Saturation_a[1];
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 2);
        }

        /* port 1 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn6.UPtrs1;
          sfcnUPtrs[0] = Robot_Student_2021_v1_B.Gain_ii;
          sfcnUPtrs[1] = &Robot_Student_2021_v1_B.Gain_ii[1];
          ssSetInputPortSignalPtrs(rts, 1, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 2);
        }

        /* port 2 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn6.UPtrs2;

          {
            int_T i1;
            const real_T *u2 = Robot_Student_2021_v1_B.Assignment;
            for (i1=0; i1 < 8; i1++) {
              sfcnUPtrs[i1] = &u2[i1];
            }
          }

          ssSetInputPortSignalPtrs(rts, 2, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 8);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn6.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn6.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn6.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 2);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            Robot_Student_2021_v1_B.ec_Ebox_o1_d));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 2);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            Robot_Student_2021_v1_B.ec_Ebox_o2_j));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 8);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            Robot_Student_2021_v1_B.ec_Ebox_o3_k));
        }
      }

      /* path info */
      ssSetModelName(rts, "ec_Ebox");
      ssSetPath(rts, "Robot_Student_2021_v1/RobotArm/IO/Ebox2/ec_Ebox");
      ssSetRTModel(rts,Robot_Student_2021_v1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn6.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Robot_Student_2021_v1_P.ec_Ebox_P1_Size_m);
      }

      /* registration */
      ec_Ebox(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetInputPortConnected(rts, 2, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
      ssSetInputPortBufferDstPort(rts, 2, -1);
    }

    /* Level2 S-Function Block: Robot_Student_2021_v1/<S28>/Dctintegrator (dweakint) */
    {
      SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[7];

      /* timing info */
      time_T *sfcnPeriod =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn7.sfcnPeriod;
      time_T *sfcnOffset =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn7.sfcnOffset;
      int_T *sfcnTsMap =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn7.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &Robot_Student_2021_v1_M->
                         NonInlinedSFcns.blkInfo2[7]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Robot_Student_2021_v1_M->NonInlinedSFcns.inputOutputPortInfo2[7]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Robot_Student_2021_v1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods2[7]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods3[7]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods4[7]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Robot_Student_2021_v1_M->NonInlinedSFcns.statesInfo2[7]);
        ssSetPeriodicStatesInfo(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.periodicStatesInfo[7]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn7.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn7.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn7.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn7.UPtrs0;
          sfcnUPtrs[0] = &Robot_Student_2021_v1_B.Gain_c;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn7.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn7.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn7.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &Robot_Student_2021_v1_B.Dctintegrator));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctintegrator");
      ssSetPath(rts,
                "Robot_Student_2021_v1/RobotArm/Supervisor/Supervisory Controller R/ /Dctintegrator");
      ssSetRTModel(rts,Robot_Student_2021_v1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn7.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Robot_Student_2021_v1_P.Dctintegrator_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Robot_Student_2021_v1_P.Dctintegrator_P2_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &Robot_Student_2021_v1_DW.Dctintegrator_RWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn7.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn7.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Robot_Student_2021_v1_DW.Dctintegrator_RWORK[0]);
      }

      /* registration */
      dweakint(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Robot_Student_2021_v1/<S28>/Dctleadlag (dleadlag) */
    {
      SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[8];

      /* timing info */
      time_T *sfcnPeriod =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn8.sfcnPeriod;
      time_T *sfcnOffset =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn8.sfcnOffset;
      int_T *sfcnTsMap =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn8.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &Robot_Student_2021_v1_M->
                         NonInlinedSFcns.blkInfo2[8]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Robot_Student_2021_v1_M->NonInlinedSFcns.inputOutputPortInfo2[8]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Robot_Student_2021_v1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods2[8]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods3[8]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods4[8]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Robot_Student_2021_v1_M->NonInlinedSFcns.statesInfo2[8]);
        ssSetPeriodicStatesInfo(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.periodicStatesInfo[8]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn8.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn8.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn8.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn8.UPtrs0;
          sfcnUPtrs[0] = &Robot_Student_2021_v1_B.Dctintegrator;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn8.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn8.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn8.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &Robot_Student_2021_v1_B.Dctleadlag));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctleadlag");
      ssSetPath(rts,
                "Robot_Student_2021_v1/RobotArm/Supervisor/Supervisory Controller R/ /Dctleadlag");
      ssSetRTModel(rts,Robot_Student_2021_v1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn8.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Robot_Student_2021_v1_P.Dctleadlag_P1_Size_p);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Robot_Student_2021_v1_P.Dctleadlag_P2_Size_p);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Robot_Student_2021_v1_P.Dctleadlag_P3_Size_c);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &Robot_Student_2021_v1_DW.Dctleadlag_RWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn8.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn8.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Robot_Student_2021_v1_DW.Dctleadlag_RWORK[0]);
      }

      /* registration */
      dleadlag(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Robot_Student_2021_v1/<S28>/Dct1lowpass (dlowpass1) */
    {
      SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[9];

      /* timing info */
      time_T *sfcnPeriod =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn9.sfcnPeriod;
      time_T *sfcnOffset =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn9.sfcnOffset;
      int_T *sfcnTsMap =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn9.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &Robot_Student_2021_v1_M->
                         NonInlinedSFcns.blkInfo2[9]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Robot_Student_2021_v1_M->NonInlinedSFcns.inputOutputPortInfo2[9]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Robot_Student_2021_v1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods2[9]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods3[9]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods4[9]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Robot_Student_2021_v1_M->NonInlinedSFcns.statesInfo2[9]);
        ssSetPeriodicStatesInfo(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.periodicStatesInfo[9]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn9.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn9.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn9.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn9.UPtrs0;
          sfcnUPtrs[0] = &Robot_Student_2021_v1_B.Dctleadlag;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn9.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn9.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn9.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &Robot_Student_2021_v1_B.Dct1lowpass));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dct1lowpass");
      ssSetPath(rts,
                "Robot_Student_2021_v1/RobotArm/Supervisor/Supervisory Controller R/ /Dct1lowpass");
      ssSetRTModel(rts,Robot_Student_2021_v1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn9.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Robot_Student_2021_v1_P.Dct1lowpass_P1_Size_f);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Robot_Student_2021_v1_P.Dct1lowpass_P2_Size_g);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &Robot_Student_2021_v1_DW.Dct1lowpass_RWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn9.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn9.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Robot_Student_2021_v1_DW.Dct1lowpass_RWORK[0]);
      }

      /* registration */
      dlowpass1(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Robot_Student_2021_v1/<S30>/Dctleadlag (dleadlag) */
    {
      SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[10];

      /* timing info */
      time_T *sfcnPeriod =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn10.sfcnPeriod;
      time_T *sfcnOffset =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn10.sfcnOffset;
      int_T *sfcnTsMap =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn10.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &Robot_Student_2021_v1_M->
                         NonInlinedSFcns.blkInfo2[10]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Robot_Student_2021_v1_M->NonInlinedSFcns.inputOutputPortInfo2[10]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Robot_Student_2021_v1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods2[10]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods3[10]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods4[10]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Robot_Student_2021_v1_M->NonInlinedSFcns.statesInfo2
                         [10]);
        ssSetPeriodicStatesInfo(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.periodicStatesInfo[10]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn10.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn10.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn10.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn10.UPtrs0;
          sfcnUPtrs[0] = &Robot_Student_2021_v1_B.Gain_f;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn10.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn10.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn10.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &Robot_Student_2021_v1_B.Dctleadlag_j));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctleadlag");
      ssSetPath(rts,
                "Robot_Student_2021_v1/RobotArm/Supervisor/Supervisory Controller R/   /Dctleadlag");
      ssSetRTModel(rts,Robot_Student_2021_v1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn10.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Robot_Student_2021_v1_P.Dctleadlag_P1_Size_n);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Robot_Student_2021_v1_P.Dctleadlag_P2_Size_b);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Robot_Student_2021_v1_P.Dctleadlag_P3_Size_d);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &Robot_Student_2021_v1_DW.Dctleadlag_RWORK_b[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn10.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn10.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Robot_Student_2021_v1_DW.Dctleadlag_RWORK_b[0]);
      }

      /* registration */
      dleadlag(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Robot_Student_2021_v1/<S30>/Dct1lowpass (dlowpass1) */
    {
      SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[11];

      /* timing info */
      time_T *sfcnPeriod =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn11.sfcnPeriod;
      time_T *sfcnOffset =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn11.sfcnOffset;
      int_T *sfcnTsMap =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn11.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &Robot_Student_2021_v1_M->
                         NonInlinedSFcns.blkInfo2[11]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Robot_Student_2021_v1_M->NonInlinedSFcns.inputOutputPortInfo2[11]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Robot_Student_2021_v1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods2[11]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods3[11]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods4[11]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Robot_Student_2021_v1_M->NonInlinedSFcns.statesInfo2
                         [11]);
        ssSetPeriodicStatesInfo(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.periodicStatesInfo[11]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn11.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn11.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn11.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn11.UPtrs0;
          sfcnUPtrs[0] = &Robot_Student_2021_v1_B.Dctleadlag_j;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn11.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn11.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn11.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &Robot_Student_2021_v1_B.Dct1lowpass_n));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dct1lowpass");
      ssSetPath(rts,
                "Robot_Student_2021_v1/RobotArm/Supervisor/Supervisory Controller R/   /Dct1lowpass");
      ssSetRTModel(rts,Robot_Student_2021_v1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn11.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Robot_Student_2021_v1_P.Dct1lowpass_P1_Size_p);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Robot_Student_2021_v1_P.Dct1lowpass_P2_Size_gi);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &Robot_Student_2021_v1_DW.Dct1lowpass_RWORK_g[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn11.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn11.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Robot_Student_2021_v1_DW.Dct1lowpass_RWORK_g[0]);
      }

      /* registration */
      dlowpass1(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Robot_Student_2021_v1/<S36>/Dctintegrator (dweakint) */
    {
      SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[12];

      /* timing info */
      time_T *sfcnPeriod =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn12.sfcnPeriod;
      time_T *sfcnOffset =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn12.sfcnOffset;
      int_T *sfcnTsMap =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn12.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &Robot_Student_2021_v1_M->
                         NonInlinedSFcns.blkInfo2[12]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Robot_Student_2021_v1_M->NonInlinedSFcns.inputOutputPortInfo2[12]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Robot_Student_2021_v1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods2[12]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods3[12]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods4[12]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Robot_Student_2021_v1_M->NonInlinedSFcns.statesInfo2
                         [12]);
        ssSetPeriodicStatesInfo(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.periodicStatesInfo[12]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn12.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn12.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn12.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn12.UPtrs0;
          sfcnUPtrs[0] = &Robot_Student_2021_v1_B.Gain1;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn12.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn12.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn12.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &Robot_Student_2021_v1_B.Dctintegrator_i));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctintegrator");
      ssSetPath(rts,
                "Robot_Student_2021_v1/RobotArm/Supervisor/Supervisory Controller X/Controller X1/Dctintegrator");
      ssSetRTModel(rts,Robot_Student_2021_v1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn12.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Robot_Student_2021_v1_P.Dctintegrator_P1_Size_c);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Robot_Student_2021_v1_P.Dctintegrator_P2_Size_j);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &Robot_Student_2021_v1_DW.Dctintegrator_RWORK_b[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn12.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn12.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Robot_Student_2021_v1_DW.Dctintegrator_RWORK_b[0]);
      }

      /* registration */
      dweakint(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Robot_Student_2021_v1/<S36>/Dctleadlag (dleadlag) */
    {
      SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[13];

      /* timing info */
      time_T *sfcnPeriod =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn13.sfcnPeriod;
      time_T *sfcnOffset =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn13.sfcnOffset;
      int_T *sfcnTsMap =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn13.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &Robot_Student_2021_v1_M->
                         NonInlinedSFcns.blkInfo2[13]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Robot_Student_2021_v1_M->NonInlinedSFcns.inputOutputPortInfo2[13]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Robot_Student_2021_v1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods2[13]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods3[13]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods4[13]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Robot_Student_2021_v1_M->NonInlinedSFcns.statesInfo2
                         [13]);
        ssSetPeriodicStatesInfo(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.periodicStatesInfo[13]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn13.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn13.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn13.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn13.UPtrs0;
          sfcnUPtrs[0] = &Robot_Student_2021_v1_B.Dctintegrator_i;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn13.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn13.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn13.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &Robot_Student_2021_v1_B.Dctleadlag_n));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctleadlag");
      ssSetPath(rts,
                "Robot_Student_2021_v1/RobotArm/Supervisor/Supervisory Controller X/Controller X1/Dctleadlag");
      ssSetRTModel(rts,Robot_Student_2021_v1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn13.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Robot_Student_2021_v1_P.Dctleadlag_P1_Size_ph);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Robot_Student_2021_v1_P.Dctleadlag_P2_Size_l);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Robot_Student_2021_v1_P.Dctleadlag_P3_Size_j);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &Robot_Student_2021_v1_DW.Dctleadlag_RWORK_a[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn13.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn13.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Robot_Student_2021_v1_DW.Dctleadlag_RWORK_a[0]);
      }

      /* registration */
      dleadlag(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Robot_Student_2021_v1/<S36>/Dct1lowpass (dlowpass1) */
    {
      SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[14];

      /* timing info */
      time_T *sfcnPeriod =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn14.sfcnPeriod;
      time_T *sfcnOffset =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn14.sfcnOffset;
      int_T *sfcnTsMap =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn14.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &Robot_Student_2021_v1_M->
                         NonInlinedSFcns.blkInfo2[14]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Robot_Student_2021_v1_M->NonInlinedSFcns.inputOutputPortInfo2[14]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Robot_Student_2021_v1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods2[14]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods3[14]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods4[14]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Robot_Student_2021_v1_M->NonInlinedSFcns.statesInfo2
                         [14]);
        ssSetPeriodicStatesInfo(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.periodicStatesInfo[14]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn14.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn14.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn14.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn14.UPtrs0;
          sfcnUPtrs[0] = &Robot_Student_2021_v1_B.Dctleadlag_n;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn14.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn14.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn14.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &Robot_Student_2021_v1_B.Dct1lowpass_f));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dct1lowpass");
      ssSetPath(rts,
                "Robot_Student_2021_v1/RobotArm/Supervisor/Supervisory Controller X/Controller X1/Dct1lowpass");
      ssSetRTModel(rts,Robot_Student_2021_v1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn14.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Robot_Student_2021_v1_P.Dct1lowpass_P1_Size_m);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Robot_Student_2021_v1_P.Dct1lowpass_P2_Size_i);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &Robot_Student_2021_v1_DW.Dct1lowpass_RWORK_m[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn14.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn14.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Robot_Student_2021_v1_DW.Dct1lowpass_RWORK_m[0]);
      }

      /* registration */
      dlowpass1(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Robot_Student_2021_v1/<S37>/Dctleadlag (dleadlag) */
    {
      SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[15];

      /* timing info */
      time_T *sfcnPeriod =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn15.sfcnPeriod;
      time_T *sfcnOffset =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn15.sfcnOffset;
      int_T *sfcnTsMap =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn15.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &Robot_Student_2021_v1_M->
                         NonInlinedSFcns.blkInfo2[15]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Robot_Student_2021_v1_M->NonInlinedSFcns.inputOutputPortInfo2[15]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Robot_Student_2021_v1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods2[15]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods3[15]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods4[15]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Robot_Student_2021_v1_M->NonInlinedSFcns.statesInfo2
                         [15]);
        ssSetPeriodicStatesInfo(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.periodicStatesInfo[15]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn15.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn15.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn15.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn15.UPtrs0;
          sfcnUPtrs[0] = &Robot_Student_2021_v1_B.Gain1_p;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn15.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn15.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn15.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &Robot_Student_2021_v1_B.Dctleadlag_e));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctleadlag");
      ssSetPath(rts,
                "Robot_Student_2021_v1/RobotArm/Supervisor/Supervisory Controller X/Controller X2/Dctleadlag");
      ssSetRTModel(rts,Robot_Student_2021_v1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn15.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Robot_Student_2021_v1_P.Dctleadlag_P1_Size_b);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Robot_Student_2021_v1_P.Dctleadlag_P2_Size_o);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Robot_Student_2021_v1_P.Dctleadlag_P3_Size_a);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &Robot_Student_2021_v1_DW.Dctleadlag_RWORK_f[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn15.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn15.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Robot_Student_2021_v1_DW.Dctleadlag_RWORK_f[0]);
      }

      /* registration */
      dleadlag(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Robot_Student_2021_v1/<S37>/Dct1lowpass (dlowpass1) */
    {
      SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[16];

      /* timing info */
      time_T *sfcnPeriod =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn16.sfcnPeriod;
      time_T *sfcnOffset =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn16.sfcnOffset;
      int_T *sfcnTsMap =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn16.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &Robot_Student_2021_v1_M->
                         NonInlinedSFcns.blkInfo2[16]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Robot_Student_2021_v1_M->NonInlinedSFcns.inputOutputPortInfo2[16]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Robot_Student_2021_v1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods2[16]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods3[16]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods4[16]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Robot_Student_2021_v1_M->NonInlinedSFcns.statesInfo2
                         [16]);
        ssSetPeriodicStatesInfo(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.periodicStatesInfo[16]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn16.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn16.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn16.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn16.UPtrs0;
          sfcnUPtrs[0] = &Robot_Student_2021_v1_B.Dctleadlag_e;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn16.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn16.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn16.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &Robot_Student_2021_v1_B.Dct1lowpass_o));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dct1lowpass");
      ssSetPath(rts,
                "Robot_Student_2021_v1/RobotArm/Supervisor/Supervisory Controller X/Controller X2/Dct1lowpass");
      ssSetRTModel(rts,Robot_Student_2021_v1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn16.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Robot_Student_2021_v1_P.Dct1lowpass_P1_Size_i);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Robot_Student_2021_v1_P.Dct1lowpass_P2_Size_j);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &Robot_Student_2021_v1_DW.Dct1lowpass_RWORK_k[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn16.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn16.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Robot_Student_2021_v1_DW.Dct1lowpass_RWORK_k[0]);
      }

      /* registration */
      dlowpass1(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Robot_Student_2021_v1/<S46>/Dctintegrator (dweakint) */
    {
      SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[17];

      /* timing info */
      time_T *sfcnPeriod =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn17.sfcnPeriod;
      time_T *sfcnOffset =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn17.sfcnOffset;
      int_T *sfcnTsMap =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn17.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &Robot_Student_2021_v1_M->
                         NonInlinedSFcns.blkInfo2[17]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Robot_Student_2021_v1_M->NonInlinedSFcns.inputOutputPortInfo2[17]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Robot_Student_2021_v1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods2[17]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods3[17]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods4[17]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Robot_Student_2021_v1_M->NonInlinedSFcns.statesInfo2
                         [17]);
        ssSetPeriodicStatesInfo(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.periodicStatesInfo[17]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn17.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn17.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn17.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn17.UPtrs0;
          sfcnUPtrs[0] = &Robot_Student_2021_v1_B.Gain_e;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn17.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn17.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn17.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &Robot_Student_2021_v1_B.Dctintegrator_g));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctintegrator");
      ssSetPath(rts,
                "Robot_Student_2021_v1/RobotArm/Supervisor/Supervisory Controller Z/    /Dctintegrator");
      ssSetRTModel(rts,Robot_Student_2021_v1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn17.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Robot_Student_2021_v1_P.Dctintegrator_P1_Size_j);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Robot_Student_2021_v1_P.Dctintegrator_P2_Size_n);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &Robot_Student_2021_v1_DW.Dctintegrator_RWORK_m[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn17.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn17.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Robot_Student_2021_v1_DW.Dctintegrator_RWORK_m[0]);
      }

      /* registration */
      dweakint(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Robot_Student_2021_v1/<S46>/Dctleadlag (dleadlag) */
    {
      SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[18];

      /* timing info */
      time_T *sfcnPeriod =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn18.sfcnPeriod;
      time_T *sfcnOffset =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn18.sfcnOffset;
      int_T *sfcnTsMap =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn18.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &Robot_Student_2021_v1_M->
                         NonInlinedSFcns.blkInfo2[18]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Robot_Student_2021_v1_M->NonInlinedSFcns.inputOutputPortInfo2[18]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Robot_Student_2021_v1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods2[18]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods3[18]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods4[18]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Robot_Student_2021_v1_M->NonInlinedSFcns.statesInfo2
                         [18]);
        ssSetPeriodicStatesInfo(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.periodicStatesInfo[18]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn18.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn18.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn18.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn18.UPtrs0;
          sfcnUPtrs[0] = &Robot_Student_2021_v1_B.Dctintegrator_g;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn18.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn18.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn18.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &Robot_Student_2021_v1_B.Dctleadlag_eg));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctleadlag");
      ssSetPath(rts,
                "Robot_Student_2021_v1/RobotArm/Supervisor/Supervisory Controller Z/    /Dctleadlag");
      ssSetRTModel(rts,Robot_Student_2021_v1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn18.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Robot_Student_2021_v1_P.Dctleadlag_P1_Size_o);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Robot_Student_2021_v1_P.Dctleadlag_P2_Size_o4);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Robot_Student_2021_v1_P.Dctleadlag_P3_Size_l);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &Robot_Student_2021_v1_DW.Dctleadlag_RWORK_p[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn18.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn18.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Robot_Student_2021_v1_DW.Dctleadlag_RWORK_p[0]);
      }

      /* registration */
      dleadlag(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Robot_Student_2021_v1/<S46>/Dct1lowpass (dlowpass1) */
    {
      SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[19];

      /* timing info */
      time_T *sfcnPeriod =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn19.sfcnPeriod;
      time_T *sfcnOffset =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn19.sfcnOffset;
      int_T *sfcnTsMap =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn19.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &Robot_Student_2021_v1_M->
                         NonInlinedSFcns.blkInfo2[19]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Robot_Student_2021_v1_M->NonInlinedSFcns.inputOutputPortInfo2[19]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Robot_Student_2021_v1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods2[19]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods3[19]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods4[19]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Robot_Student_2021_v1_M->NonInlinedSFcns.statesInfo2
                         [19]);
        ssSetPeriodicStatesInfo(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.periodicStatesInfo[19]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn19.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn19.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn19.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn19.UPtrs0;
          sfcnUPtrs[0] = &Robot_Student_2021_v1_B.Dctleadlag_eg;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn19.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn19.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn19.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &Robot_Student_2021_v1_B.Dct1lowpass_ft));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dct1lowpass");
      ssSetPath(rts,
                "Robot_Student_2021_v1/RobotArm/Supervisor/Supervisory Controller Z/    /Dct1lowpass");
      ssSetRTModel(rts,Robot_Student_2021_v1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn19.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Robot_Student_2021_v1_P.Dct1lowpass_P1_Size_g);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Robot_Student_2021_v1_P.Dct1lowpass_P2_Size_p);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &Robot_Student_2021_v1_DW.Dct1lowpass_RWORK_p[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn19.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn19.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Robot_Student_2021_v1_DW.Dct1lowpass_RWORK_p[0]);
      }

      /* registration */
      dlowpass1(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Robot_Student_2021_v1/<S47>/Dctleadlag (dleadlag) */
    {
      SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[20];

      /* timing info */
      time_T *sfcnPeriod =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn20.sfcnPeriod;
      time_T *sfcnOffset =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn20.sfcnOffset;
      int_T *sfcnTsMap =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn20.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &Robot_Student_2021_v1_M->
                         NonInlinedSFcns.blkInfo2[20]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Robot_Student_2021_v1_M->NonInlinedSFcns.inputOutputPortInfo2[20]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Robot_Student_2021_v1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods2[20]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods3[20]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods4[20]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Robot_Student_2021_v1_M->NonInlinedSFcns.statesInfo2
                         [20]);
        ssSetPeriodicStatesInfo(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.periodicStatesInfo[20]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn20.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn20.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn20.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn20.UPtrs0;
          sfcnUPtrs[0] = &Robot_Student_2021_v1_B.Gain_i;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn20.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn20.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn20.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &Robot_Student_2021_v1_B.Dctleadlag_i));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctleadlag");
      ssSetPath(rts,
                "Robot_Student_2021_v1/RobotArm/Supervisor/Supervisory Controller Z/     /Dctleadlag");
      ssSetRTModel(rts,Robot_Student_2021_v1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn20.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Robot_Student_2021_v1_P.Dctleadlag_P1_Size_f);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Robot_Student_2021_v1_P.Dctleadlag_P2_Size_d);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Robot_Student_2021_v1_P.Dctleadlag_P3_Size_p);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &Robot_Student_2021_v1_DW.Dctleadlag_RWORK_o[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn20.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn20.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Robot_Student_2021_v1_DW.Dctleadlag_RWORK_o[0]);
      }

      /* registration */
      dleadlag(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Robot_Student_2021_v1/<S47>/Dct1lowpass (dlowpass1) */
    {
      SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[21];

      /* timing info */
      time_T *sfcnPeriod =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn21.sfcnPeriod;
      time_T *sfcnOffset =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn21.sfcnOffset;
      int_T *sfcnTsMap =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn21.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &Robot_Student_2021_v1_M->
                         NonInlinedSFcns.blkInfo2[21]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Robot_Student_2021_v1_M->NonInlinedSFcns.inputOutputPortInfo2[21]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Robot_Student_2021_v1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods2[21]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods3[21]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods4[21]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Robot_Student_2021_v1_M->NonInlinedSFcns.statesInfo2
                         [21]);
        ssSetPeriodicStatesInfo(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.periodicStatesInfo[21]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn21.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn21.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn21.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn21.UPtrs0;
          sfcnUPtrs[0] = &Robot_Student_2021_v1_B.Dctleadlag_i;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn21.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn21.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn21.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &Robot_Student_2021_v1_B.Dct1lowpass_a));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dct1lowpass");
      ssSetPath(rts,
                "Robot_Student_2021_v1/RobotArm/Supervisor/Supervisory Controller Z/     /Dct1lowpass");
      ssSetRTModel(rts,Robot_Student_2021_v1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn21.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Robot_Student_2021_v1_P.Dct1lowpass_P1_Size_d);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Robot_Student_2021_v1_P.Dct1lowpass_P2_Size_k);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &Robot_Student_2021_v1_DW.Dct1lowpass_RWORK_gb
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn21.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn21.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Robot_Student_2021_v1_DW.Dct1lowpass_RWORK_gb[0]);
      }

      /* registration */
      dlowpass1(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Robot_Student_2021_v1/<S57>/Dctintegrator3 (dweakint) */
    {
      SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[22];

      /* timing info */
      time_T *sfcnPeriod =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn22.sfcnPeriod;
      time_T *sfcnOffset =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn22.sfcnOffset;
      int_T *sfcnTsMap =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn22.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &Robot_Student_2021_v1_M->
                         NonInlinedSFcns.blkInfo2[22]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Robot_Student_2021_v1_M->NonInlinedSFcns.inputOutputPortInfo2[22]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Robot_Student_2021_v1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods2[22]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods3[22]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods4[22]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Robot_Student_2021_v1_M->NonInlinedSFcns.statesInfo2
                         [22]);
        ssSetPeriodicStatesInfo(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.periodicStatesInfo[22]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn22.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn22.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn22.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn22.UPtrs0;
          sfcnUPtrs[0] = &Robot_Student_2021_v1_B.Gain1_n;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn22.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn22.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn22.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &Robot_Student_2021_v1_B.Dctintegrator3));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctintegrator3");
      ssSetPath(rts,
                "Robot_Student_2021_v1/RobotArm/Supervisor/Supervisory Conveyor1/Controller Conveyor/Dctintegrator3");
      ssSetRTModel(rts,Robot_Student_2021_v1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn22.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Robot_Student_2021_v1_P.Dctintegrator3_P1_Size_e);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Robot_Student_2021_v1_P.Dctintegrator3_P2_Size_i);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &Robot_Student_2021_v1_DW.Dctintegrator3_RWORK
                 [0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn22.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn22.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Robot_Student_2021_v1_DW.Dctintegrator3_RWORK[0]);
      }

      /* registration */
      dweakint(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Robot_Student_2021_v1/<S57>/Dct1lowpass (dlowpass1) */
    {
      SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[23];

      /* timing info */
      time_T *sfcnPeriod =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn23.sfcnPeriod;
      time_T *sfcnOffset =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn23.sfcnOffset;
      int_T *sfcnTsMap =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn23.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &Robot_Student_2021_v1_M->
                         NonInlinedSFcns.blkInfo2[23]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Robot_Student_2021_v1_M->NonInlinedSFcns.inputOutputPortInfo2[23]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Robot_Student_2021_v1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods2[23]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods3[23]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods4[23]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Robot_Student_2021_v1_M->NonInlinedSFcns.statesInfo2
                         [23]);
        ssSetPeriodicStatesInfo(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.periodicStatesInfo[23]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn23.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn23.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn23.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn23.UPtrs0;
          sfcnUPtrs[0] = &Robot_Student_2021_v1_B.Dctintegrator3;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn23.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn23.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn23.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &Robot_Student_2021_v1_B.Dct1lowpass_p));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dct1lowpass");
      ssSetPath(rts,
                "Robot_Student_2021_v1/RobotArm/Supervisor/Supervisory Conveyor1/Controller Conveyor/Dct1lowpass");
      ssSetRTModel(rts,Robot_Student_2021_v1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn23.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Robot_Student_2021_v1_P.Dct1lowpass_P1_Size_ph);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Robot_Student_2021_v1_P.Dct1lowpass_P2_Size_p0);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &Robot_Student_2021_v1_DW.Dct1lowpass_RWORK_n[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn23.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn23.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Robot_Student_2021_v1_DW.Dct1lowpass_RWORK_n[0]);
      }

      /* registration */
      dlowpass1(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Robot_Student_2021_v1/<S57>/Dctleadlag (dleadlag) */
    {
      SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[24];

      /* timing info */
      time_T *sfcnPeriod =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn24.sfcnPeriod;
      time_T *sfcnOffset =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn24.sfcnOffset;
      int_T *sfcnTsMap =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn24.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &Robot_Student_2021_v1_M->
                         NonInlinedSFcns.blkInfo2[24]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Robot_Student_2021_v1_M->NonInlinedSFcns.inputOutputPortInfo2[24]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Robot_Student_2021_v1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods2[24]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods3[24]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods4[24]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Robot_Student_2021_v1_M->NonInlinedSFcns.statesInfo2
                         [24]);
        ssSetPeriodicStatesInfo(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.periodicStatesInfo[24]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn24.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn24.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn24.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn24.UPtrs0;
          sfcnUPtrs[0] = &Robot_Student_2021_v1_B.Dct1lowpass_p;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn24.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn24.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn24.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &Robot_Student_2021_v1_B.Dctleadlag_f));
        }
      }

      /* path info */
      ssSetModelName(rts, "Dctleadlag");
      ssSetPath(rts,
                "Robot_Student_2021_v1/RobotArm/Supervisor/Supervisory Conveyor1/Controller Conveyor/Dctleadlag");
      ssSetRTModel(rts,Robot_Student_2021_v1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn24.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Robot_Student_2021_v1_P.Dctleadlag_P1_Size_pu);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Robot_Student_2021_v1_P.Dctleadlag_P2_Size_n);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Robot_Student_2021_v1_P.Dctleadlag_P3_Size_f);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *) &Robot_Student_2021_v1_DW.Dctleadlag_RWORK_l[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn24.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn24.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* RWORK */
        ssSetDWorkWidth(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Robot_Student_2021_v1_DW.Dctleadlag_RWORK_l[0]);
      }

      /* registration */
      dleadlag(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00048828125);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Robot_Student_2021_v1/<S19>/Reset EncoderR (ec_EboxResetEnc) */
    {
      SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[25];

      /* timing info */
      time_T *sfcnPeriod =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn25.sfcnPeriod;
      time_T *sfcnOffset =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn25.sfcnOffset;
      int_T *sfcnTsMap =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn25.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &Robot_Student_2021_v1_M->
                         NonInlinedSFcns.blkInfo2[25]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Robot_Student_2021_v1_M->NonInlinedSFcns.inputOutputPortInfo2[25]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Robot_Student_2021_v1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods2[25]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods3[25]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods4[25]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Robot_Student_2021_v1_M->NonInlinedSFcns.statesInfo2
                         [25]);
        ssSetPeriodicStatesInfo(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.periodicStatesInfo[25]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn25.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn25.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn25.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn25.UPtrs0;
          sfcnUPtrs[0] = &Robot_Student_2021_v1_B.resetEnc_l;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Reset EncoderR");
      ssSetPath(rts,
                "Robot_Student_2021_v1/RobotArm/Supervisor/Supervisory Controller R/Reset EncoderR");
      ssSetRTModel(rts,Robot_Student_2021_v1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn25.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Robot_Student_2021_v1_P.ResetEncoderR_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Robot_Student_2021_v1_P.ResetEncoderR_P2_Size);
      }

      /* registration */
      ec_EboxResetEnc(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Robot_Student_2021_v1/<S20>/Reset EncoderX (ec_EboxResetEnc) */
    {
      SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[26];

      /* timing info */
      time_T *sfcnPeriod =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn26.sfcnPeriod;
      time_T *sfcnOffset =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn26.sfcnOffset;
      int_T *sfcnTsMap =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn26.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &Robot_Student_2021_v1_M->
                         NonInlinedSFcns.blkInfo2[26]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Robot_Student_2021_v1_M->NonInlinedSFcns.inputOutputPortInfo2[26]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Robot_Student_2021_v1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods2[26]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods3[26]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods4[26]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Robot_Student_2021_v1_M->NonInlinedSFcns.statesInfo2
                         [26]);
        ssSetPeriodicStatesInfo(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.periodicStatesInfo[26]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn26.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn26.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn26.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn26.UPtrs0;
          sfcnUPtrs[0] = &Robot_Student_2021_v1_B.resetEnc_n;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Reset EncoderX");
      ssSetPath(rts,
                "Robot_Student_2021_v1/RobotArm/Supervisor/Supervisory Controller X/Reset EncoderX");
      ssSetRTModel(rts,Robot_Student_2021_v1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn26.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Robot_Student_2021_v1_P.ResetEncoderX_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Robot_Student_2021_v1_P.ResetEncoderX_P2_Size);
      }

      /* registration */
      ec_EboxResetEnc(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Robot_Student_2021_v1/<S21>/Reset EncoderX (ec_EboxResetEnc) */
    {
      SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[27];

      /* timing info */
      time_T *sfcnPeriod =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn27.sfcnPeriod;
      time_T *sfcnOffset =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn27.sfcnOffset;
      int_T *sfcnTsMap =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn27.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &Robot_Student_2021_v1_M->
                         NonInlinedSFcns.blkInfo2[27]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Robot_Student_2021_v1_M->NonInlinedSFcns.inputOutputPortInfo2[27]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Robot_Student_2021_v1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods2[27]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods3[27]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods4[27]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Robot_Student_2021_v1_M->NonInlinedSFcns.statesInfo2
                         [27]);
        ssSetPeriodicStatesInfo(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.periodicStatesInfo[27]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn27.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn27.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn27.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn27.UPtrs0;
          sfcnUPtrs[0] = &Robot_Student_2021_v1_B.resetEnc_a;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Reset EncoderX");
      ssSetPath(rts,
                "Robot_Student_2021_v1/RobotArm/Supervisor/Supervisory Controller Z/Reset EncoderX");
      ssSetRTModel(rts,Robot_Student_2021_v1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn27.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Robot_Student_2021_v1_P.ResetEncoderX_P1_Size_k);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Robot_Student_2021_v1_P.ResetEncoderX_P2_Size_k);
      }

      /* registration */
      ec_EboxResetEnc(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Robot_Student_2021_v1/<S22>/Reset EncoderConv (ec_EboxResetEnc) */
    {
      SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[28];

      /* timing info */
      time_T *sfcnPeriod =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn28.sfcnPeriod;
      time_T *sfcnOffset =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn28.sfcnOffset;
      int_T *sfcnTsMap =
        Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn28.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &Robot_Student_2021_v1_M->
                         NonInlinedSFcns.blkInfo2[28]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Robot_Student_2021_v1_M->NonInlinedSFcns.inputOutputPortInfo2[28]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Robot_Student_2021_v1_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods2[28]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods3[28]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Robot_Student_2021_v1_M->NonInlinedSFcns.methods4[28]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Robot_Student_2021_v1_M->NonInlinedSFcns.statesInfo2
                         [28]);
        ssSetPeriodicStatesInfo(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.periodicStatesInfo[28]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn28.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn28.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn28.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn28.UPtrs0;
          sfcnUPtrs[0] = &Robot_Student_2021_v1_B.resetEnc;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Reset EncoderConv");
      ssSetPath(rts,
                "Robot_Student_2021_v1/RobotArm/Supervisor/Supervisory Conveyor1/Reset EncoderConv");
      ssSetRTModel(rts,Robot_Student_2021_v1_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Robot_Student_2021_v1_M->NonInlinedSFcns.Sfcn28.params;
        ssSetSFcnParamsCount(rts, 2);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Robot_Student_2021_v1_P.ResetEncoderConv_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Robot_Student_2021_v1_P.ResetEncoderConv_P2_Size);
      }

      /* registration */
      ec_EboxResetEnc(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }
  }

  /* Start for S-Function (ec_Supervisor): '<S15>/S-Function' */
  /* Level2 S-Function Block: '<S15>/S-Function' (ec_Supervisor) */
  {
    SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[3];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Constant: '<S32>/Constant1' */
  Robot_Student_2021_v1_B.Constant1 = Robot_Student_2021_v1_P.Constant1_Value;

  /* Start for Constant: '<S11>/set_robot_calibration_r' */
  Robot_Student_2021_v1_B.set_robot_calibration_r =
    Robot_Student_2021_v1_P.set_robot_calibration_r_Value;

  /* Start for Constant: '<S39>/Constant1' */
  Robot_Student_2021_v1_B.Constant1_c =
    Robot_Student_2021_v1_P.Constant1_Value_c;

  /* Start for Constant: '<S11>/set_robot_calibration_x' */
  Robot_Student_2021_v1_B.set_robot_calibration_x =
    Robot_Student_2021_v1_P.set_robot_calibration_x_Value;

  /* Start for Constant: '<S49>/Constant1' */
  Robot_Student_2021_v1_B.Constant1_k =
    Robot_Student_2021_v1_P.Constant1_Value_e;

  /* Start for Constant: '<S11>/set_robot_calibration_z' */
  Robot_Student_2021_v1_B.set_robot_calibration_z =
    Robot_Student_2021_v1_P.set_robot_calibration_z_Value;

  /* Start for Enabled SubSystem: '<Root>/Controller' */
  Robot_Student_2021_v1_DW.Controller_MODE = false;

  /* Start for S-Function (dweakint): '<S4>/Dctintegrator3' */
  /* Level2 S-Function Block: '<S4>/Dctintegrator3' (dweakint) */
  {
    SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dlowpass1): '<S4>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S4>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dleadlag): '<S4>/Dctleadlag' */
  /* Level2 S-Function Block: '<S4>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[2];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* End of Start for SubSystem: '<Root>/Controller' */

  /* Start for S-Function (dweakint): '<S28>/Dctintegrator' */
  /* Level2 S-Function Block: '<S28>/Dctintegrator' (dweakint) */
  {
    SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[7];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dleadlag): '<S28>/Dctleadlag' */
  /* Level2 S-Function Block: '<S28>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[8];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dlowpass1): '<S28>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S28>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[9];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dleadlag): '<S30>/Dctleadlag' */
  /* Level2 S-Function Block: '<S30>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[10];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dlowpass1): '<S30>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S30>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[11];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dweakint): '<S36>/Dctintegrator' */
  /* Level2 S-Function Block: '<S36>/Dctintegrator' (dweakint) */
  {
    SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[12];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dleadlag): '<S36>/Dctleadlag' */
  /* Level2 S-Function Block: '<S36>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[13];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dlowpass1): '<S36>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S36>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[14];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dleadlag): '<S37>/Dctleadlag' */
  /* Level2 S-Function Block: '<S37>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[15];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dlowpass1): '<S37>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S37>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[16];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dweakint): '<S46>/Dctintegrator' */
  /* Level2 S-Function Block: '<S46>/Dctintegrator' (dweakint) */
  {
    SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[17];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dleadlag): '<S46>/Dctleadlag' */
  /* Level2 S-Function Block: '<S46>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[18];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dlowpass1): '<S46>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S46>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[19];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dleadlag): '<S47>/Dctleadlag' */
  /* Level2 S-Function Block: '<S47>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[20];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dlowpass1): '<S47>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S47>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[21];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dweakint): '<S57>/Dctintegrator3' */
  /* Level2 S-Function Block: '<S57>/Dctintegrator3' (dweakint) */
  {
    SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[22];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dlowpass1): '<S57>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S57>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[23];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (dleadlag): '<S57>/Dctleadlag' */
  /* Level2 S-Function Block: '<S57>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[24];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Enabled SubSystem: '<S23>/Subsystem3' */
  /* Start for IfAction SubSystem: '<S25>/If Action Subsystem' */
  Robot_Studen_SerialWrite1_Start(&Robot_Student_2021_v1_DW.SerialWrite1);

  /* End of Start for SubSystem: '<S25>/If Action Subsystem' */

  /* Start for IfAction SubSystem: '<S25>/If Action Subsystem1' */
  Robot_Studen_SerialWrite1_Start(&Robot_Student_2021_v1_DW.SerialWrite);

  /* End of Start for SubSystem: '<S25>/If Action Subsystem1' */
  /* End of Start for SubSystem: '<S23>/Subsystem3' */
  {
    real_T tmp;
    int32_T r;
    int32_T t;
    uint32_T tseed;

    /* InitializeConditions for DiscreteIntegrator: '<S19>/Discrete-Time Integrator' */
    Robot_Student_2021_v1_DW.DiscreteTimeIntegrator_DSTATE =
      Robot_Student_2021_v1_P.DiscreteTimeIntegrator_IC;

    /* InitializeConditions for DiscreteIntegrator: '<S32>/Discrete-Time Integrator' */
    Robot_Student_2021_v1_DW.DiscreteTimeIntegrator_DSTATE_n =
      Robot_Student_2021_v1_B.Constant1;

    /* InitializeConditions for UnitDelay: '<S11>/Unit Delay' */
    Robot_Student_2021_v1_DW.UnitDelay_DSTATE =
      Robot_Student_2021_v1_P.UnitDelay_InitialCondition;

    /* InitializeConditions for DiscreteIntegrator: '<S20>/Discrete-Time Integrator' */
    Robot_Student_2021_v1_DW.DiscreteTimeIntegrator_DSTATE_p =
      Robot_Student_2021_v1_P.DiscreteTimeIntegrator_IC_i;

    /* InitializeConditions for DiscreteIntegrator: '<S39>/Discrete-Time Integrator' */
    Robot_Student_2021_v1_DW.DiscreteTimeIntegrator_DSTAT_pn =
      Robot_Student_2021_v1_B.Constant1_c;

    /* InitializeConditions for DiscreteIntegrator: '<S21>/Discrete-Time Integrator' */
    Robot_Student_2021_v1_DW.DiscreteTimeIntegrator_DSTATE_c =
      Robot_Student_2021_v1_P.DiscreteTimeIntegrator_IC_d;

    /* InitializeConditions for DiscreteIntegrator: '<S49>/Discrete-Time Integrator' */
    Robot_Student_2021_v1_DW.DiscreteTimeIntegrator_DSTATE_i =
      Robot_Student_2021_v1_B.Constant1_k;

    /* InitializeConditions for Derivative: '<S29>/Derivative' */
    Robot_Student_2021_v1_DW.TimeStampA = (rtInf);
    Robot_Student_2021_v1_DW.TimeStampB = (rtInf);

    /* InitializeConditions for Derivative: '<S29>/Derivative1' */
    Robot_Student_2021_v1_DW.TimeStampA_p = (rtInf);
    Robot_Student_2021_v1_DW.TimeStampB_f = (rtInf);

    /* InitializeConditions for Derivative: '<S38>/Derivative' */
    Robot_Student_2021_v1_DW.TimeStampA_d = (rtInf);
    Robot_Student_2021_v1_DW.TimeStampB_p = (rtInf);

    /* InitializeConditions for Derivative: '<S38>/Derivative1' */
    Robot_Student_2021_v1_DW.TimeStampA_h = (rtInf);
    Robot_Student_2021_v1_DW.TimeStampB_c = (rtInf);

    /* InitializeConditions for Derivative: '<S54>/Derivative' */
    Robot_Student_2021_v1_DW.TimeStampA_k = (rtInf);
    Robot_Student_2021_v1_DW.TimeStampB_d = (rtInf);

    /* InitializeConditions for Derivative: '<S54>/Derivative1' */
    Robot_Student_2021_v1_DW.TimeStampA_j = (rtInf);
    Robot_Student_2021_v1_DW.TimeStampB_k = (rtInf);

    /* InitializeConditions for DiscreteIntegrator: '<S22>/Discrete-Time Integrator' */
    Robot_Student_2021_v1_DW.DiscreteTimeIntegrator_DSTATE_k =
      Robot_Student_2021_v1_P.DiscreteTimeIntegrator_IC_f;

    /* InitializeConditions for UnitDelay: '<S11>/Unit Delay1' */
    Robot_Student_2021_v1_DW.UnitDelay1_DSTATE =
      Robot_Student_2021_v1_P.UnitDelay1_InitialCondition;

    /* InitializeConditions for Delay: '<S24>/Delay' */
    strncpy(&Robot_Student_2021_v1_DW.Delay_DSTATE[0],
            &Robot_Student_2021_v1_P.Delay_InitialCondition[0], 255U);
    Robot_Student_2021_v1_DW.Delay_DSTATE[255] = '\x00';

    /* InitializeConditions for RateLimiter: '<S32>/Limit Speed' */
    Robot_Student_2021_v1_DW.PrevY = Robot_Student_2021_v1_P.LimitSpeed_IC;

    /* InitializeConditions for UnitDelay: '<S35>/UD' */
    Robot_Student_2021_v1_DW.UD_DSTATE =
      Robot_Student_2021_v1_P.DiscreteDerivative_ICPrevScaled;

    /* InitializeConditions for RateLimiter: '<S32>/Limit Acceleration' */
    Robot_Student_2021_v1_DW.PrevY_n =
      Robot_Student_2021_v1_P.LimitAcceleration_IC;

    /* InitializeConditions for RateLimiter: '<S39>/Limit Speed' */
    Robot_Student_2021_v1_DW.PrevY_h = Robot_Student_2021_v1_P.LimitSpeed_IC_g;

    /* InitializeConditions for UnitDelay: '<S45>/UD' */
    Robot_Student_2021_v1_DW.UD_DSTATE_n =
      Robot_Student_2021_v1_P.DiscreteDerivative_ICPrevScal_p;

    /* InitializeConditions for RateLimiter: '<S39>/Limit Acceleration' */
    Robot_Student_2021_v1_DW.PrevY_m =
      Robot_Student_2021_v1_P.LimitAcceleration_IC_f;

    /* InitializeConditions for RateLimiter: '<S49>/Limit Speed' */
    Robot_Student_2021_v1_DW.PrevY_c = Robot_Student_2021_v1_P.LimitSpeed_IC_j;

    /* InitializeConditions for UnitDelay: '<S56>/UD' */
    Robot_Student_2021_v1_DW.UD_DSTATE_e =
      Robot_Student_2021_v1_P.DiscreteDerivative_ICPrevScal_i;

    /* InitializeConditions for RateLimiter: '<S49>/Limit Acceleration' */
    Robot_Student_2021_v1_DW.PrevY_mz =
      Robot_Student_2021_v1_P.LimitAcceleration_IC_j;

    /* SystemInitialize for Chart: '<S19>/Supervisor' */
    Robot_Student_2021_v1_DW.sfEvent_f = Robot_Student_2021_v_CALL_EVENT;
    Robot_Student_2021_v1_DW.temporalCounter_i1_p = 0U;
    Robot_Student_2021_v1_DW.is_active_c5_Robot_Student_2021 = 0U;
    Robot_Student_2021_v1_DW.is_c5_Robot_Student_2021_v1 = 0U;
    Robot_Student_2021_v1_DW.currentcarPos_k = 0.0;
    Robot_Student_2021_v1_B.jogSpeed_p = 0.0;
    Robot_Student_2021_v1_B.toPoint_i = 0.0;
    Robot_Student_2021_v1_B.homeControllerEnabled_i = 0.0;
    Robot_Student_2021_v1_B.resetEnc_l = 0.0;
    Robot_Student_2021_v1_B.homingBusy_n = 1.0;
    Robot_Student_2021_v1_B.airBagEnabled_ab = 0.0;
    Robot_Student_2021_v1_B.airBagRef_pn = 0.0;
    Robot_Student_2021_v1_B.controlEnabled_e = 1.0;
    Robot_Student_2021_v1_B.Ready_n = 1.0;
    Robot_Student_2021_v1_B.StopSim_n = 0.0;

    /* SystemInitialize for Chart: '<S20>/Supervisor' */
    Robot_Student_2021_v1_DW.sfEvent_j = Robot_Student_2021_v_CALL_EVENT;
    Robot_Student_2021_v1_DW.temporalCounter_i1_a = 0U;
    Robot_Student_2021_v1_DW.is_active_c6_Robot_Student_2021 = 0U;
    Robot_Student_2021_v1_DW.is_c6_Robot_Student_2021_v1 = 0U;
    Robot_Student_2021_v1_DW.currentcarPos_f = 0.0;
    Robot_Student_2021_v1_B.jogSpeed_o = 0.0;
    Robot_Student_2021_v1_B.toPoint_h = 0.0;
    Robot_Student_2021_v1_B.homeControllerEnabled_f = 0.0;
    Robot_Student_2021_v1_B.resetEnc_n = 0.0;
    Robot_Student_2021_v1_B.homingBusy_d = 1.0;
    Robot_Student_2021_v1_B.airBagEnabled_a = 0.0;
    Robot_Student_2021_v1_B.airBagRef_p = 0.0;
    Robot_Student_2021_v1_B.controlEnabled_b = 1.0;
    Robot_Student_2021_v1_B.Ready_l = 1.0;
    Robot_Student_2021_v1_B.StopSim_p = 0.0;

    /* SystemInitialize for Chart: '<S21>/Supervisor' */
    Robot_Student_2021_v1_DW.sfEvent_o = Robot_Student_2021_v_CALL_EVENT;
    Robot_Student_2021_v1_DW.temporalCounter_i1_e = 0U;
    Robot_Student_2021_v1_DW.is_active_c7_Robot_Student_2021 = 0U;
    Robot_Student_2021_v1_DW.is_c7_Robot_Student_2021_v1 = 0U;
    Robot_Student_2021_v1_DW.currentcarPos = 0.0;
    Robot_Student_2021_v1_B.jogSpeed_a = 0.0;
    Robot_Student_2021_v1_B.toPoint = 0.0;
    Robot_Student_2021_v1_B.homeControllerEnabled_h = 0.0;
    Robot_Student_2021_v1_B.resetEnc_a = 0.0;
    Robot_Student_2021_v1_B.homingBusy_b = 1.0;
    Robot_Student_2021_v1_B.airBagEnabled = 0.0;
    Robot_Student_2021_v1_B.airBagRef = 0.0;
    Robot_Student_2021_v1_B.controlEnabled = 1.0;
    Robot_Student_2021_v1_B.Ready_p = 1.0;
    Robot_Student_2021_v1_B.StopSim_o = 0.0;

    /* SystemInitialize for Chart: '<S22>/Supervisor' */
    Robot_Student_2021_v1_DW.sfEvent = Robot_Student_2021_v_CALL_EVENT;
    Robot_Student_2021_v1_DW.temporalCounter_i1 = 0U;
    Robot_Student_2021_v1_DW.is_active_c4_Robot_Student_2021 = 0U;
    Robot_Student_2021_v1_DW.is_c4_Robot_Student_2021_v1 = 0U;
    Robot_Student_2021_v1_B.jogSpeed = 0.0;
    Robot_Student_2021_v1_B.homeControllerEnabled = 0.0;
    Robot_Student_2021_v1_B.resetEnc = 0.0;
    Robot_Student_2021_v1_B.homingBusy = 1.0;
    Robot_Student_2021_v1_B.Ready = 1.0;
    Robot_Student_2021_v1_B.StopSim = 0.0;

    /* SystemInitialize for Enabled SubSystem: '<Root>/Controller' */
    /* InitializeConditions for RandomNumber: '<S1>/Random Number' */
    tmp = floor(Robot_Student_2021_v1_P.RandomNumber_Seed);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 4.294967296E+9);
    }

    tseed = tmp < 0.0 ? (uint32_T)-(int32_T)(uint32_T)-tmp : (uint32_T)tmp;
    r = (int32_T)(tseed >> 16U);
    t = (int32_T)(tseed & 32768U);
    Robot_Student_2021_v1_DW.RandSeed = ((((tseed - ((uint32_T)r << 16U)) + t) <<
      16U) + t) + r;
    if (Robot_Student_2021_v1_DW.RandSeed < 1U) {
      Robot_Student_2021_v1_DW.RandSeed = 1144108930U;
    } else if (Robot_Student_2021_v1_DW.RandSeed > 2147483646U) {
      Robot_Student_2021_v1_DW.RandSeed = 2147483646U;
    }

    Robot_Student_2021_v1_DW.NextOutput = rt_nrand_Upu32_Yd_f_pw_snf
      (&Robot_Student_2021_v1_DW.RandSeed) *
      Robot_Student_2021_v1_P.RandomNumber_StdDev +
      Robot_Student_2021_v1_P.RandomNumber_Mean;

    /* End of InitializeConditions for RandomNumber: '<S1>/Random Number' */

    /* InitializeConditions for DiscreteIntegrator: '<S1>/Discrete  integrator' */
    Robot_Student_2021_v1_DW.Discreteintegrator_DSTATE =
      Robot_Student_2021_v1_P.Discreteintegrator_IC;

    /* SystemInitialize for Chart: '<S1>/Stateflow ' */
    Robot_Student_2021_v1_DW.sfEvent_b = Robot_Student_2021_v_CALL_EVENT;

    /* Chart: '<S1>/Stateflow ' */
    Robot_Student_2021_v1_DW.is_active_c3_Robot_Student_2021 = 1U;
    Robot_Student_2021_v1_DW.is_active_Object_Detection = 1U;
    Robot_Student_2021_v1_DW.is_Object_Detection =
      Robot_Student_2021_v_IN_Seeking;
    Robot_Student_2021_v1_DW.is_active_Belt = 1U;
    Robot_Student_2021_v1_DW.is_Belt = Robot_Student_2021_IN_Belt_Home;
    Robot_Student_2021_v1_DW.is_active_Robot_Arm = 1U;
    Robot_Student_2021_v1_DW.is_Robot_Arm = Robot_Student_202_IN_Start_Home;
    Robot_Student_2021_v1_DW.is_active_Vacuum = 1U;
    Robot_Student_2021_v1_DW.is_Vacuum = Robot_Student_202_IN_Vacuum_Off;

    /* SystemInitialize for Sum: '<S1>/Sum4' incorporates:
     *  Outport: '<S1>/Angle'
     */
    Robot_Student_2021_v1_B.Sum4 = Robot_Student_2021_v1_P.Angle_Y0;

    /* SystemInitialize for Sum: '<S1>/Sum5' incorporates:
     *  Outport: '<S1>/Angle'
     */
    Robot_Student_2021_v1_B.Sum5 = Robot_Student_2021_v1_P.Angle_Y0;

    /* SystemInitialize for Sum: '<S1>/Sum6' incorporates:
     *  Outport: '<S1>/Angle'
     */
    Robot_Student_2021_v1_B.Sum6 = Robot_Student_2021_v1_P.Angle_Y0;

    /* SystemInitialize for S-Function (dleadlag): '<S4>/Dctleadlag' incorporates:
     *  Outport: '<S1>/Conveyor '
     */
    Robot_Student_2021_v1_B.Dctleadlag_d = Robot_Student_2021_v1_P.Conveyor_Y0;

    /* SystemInitialize for Gain: '<S6>/Gain1' incorporates:
     *  Outport: '<S1>/Vacuum '
     */
    Robot_Student_2021_v1_B.Gain1_o = Robot_Student_2021_v1_P.Vacuum_Y0;

    /* SystemInitialize for ManualSwitch: '<S1>/Manual Switch' incorporates:
     *  Outport: '<S1>/Blow//suck'
     */
    Robot_Student_2021_v1_B.Doubleclickswitch_c =
      Robot_Student_2021_v1_P.Blowsuck_Y0;

    /* SystemInitialize for ManualSwitch: '<S1>/Manual Switch1' incorporates:
     *  Outport: '<S1>/LED Ring'
     */
    strncpy(&Robot_Student_2021_v1_B.ManualSwitch1[0],
            &Robot_Student_2021_v1_P.LEDRing_Y0[0], 255U);

    /* End of SystemInitialize for SubSystem: '<Root>/Controller' */
    Robot_Student_2021_v1_B.ManualSwitch1[255] = '\x00';
  }
}

/* Model terminate function */
void Robot_Student_2021_v1_terminate(void)
{
  /* Terminate for S-Function (ec_Supervisor): '<S15>/S-Function' */
  /* Level2 S-Function Block: '<S15>/S-Function' (ec_Supervisor) */
  {
    SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (ec_Ebox): '<S12>/ec_Ebox' */
  /* Level2 S-Function Block: '<S12>/ec_Ebox' (ec_Ebox) */
  {
    SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[4];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (ec_Ebox): '<S13>/ec_Ebox' */
  /* Level2 S-Function Block: '<S13>/ec_Ebox' (ec_Ebox) */
  {
    SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[5];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (ec_Ebox): '<S14>/ec_Ebox' */
  /* Level2 S-Function Block: '<S14>/ec_Ebox' (ec_Ebox) */
  {
    SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[6];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dweakint): '<S4>/Dctintegrator3' */
  /* Level2 S-Function Block: '<S4>/Dctintegrator3' (dweakint) */
  {
    SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dlowpass1): '<S4>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S4>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dleadlag): '<S4>/Dctleadlag' */
  /* Level2 S-Function Block: '<S4>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* End of Terminate for SubSystem: '<Root>/Controller' */

  /* Terminate for S-Function (dweakint): '<S28>/Dctintegrator' */
  /* Level2 S-Function Block: '<S28>/Dctintegrator' (dweakint) */
  {
    SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[7];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dleadlag): '<S28>/Dctleadlag' */
  /* Level2 S-Function Block: '<S28>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[8];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dlowpass1): '<S28>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S28>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[9];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dleadlag): '<S30>/Dctleadlag' */
  /* Level2 S-Function Block: '<S30>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[10];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dlowpass1): '<S30>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S30>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[11];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dweakint): '<S36>/Dctintegrator' */
  /* Level2 S-Function Block: '<S36>/Dctintegrator' (dweakint) */
  {
    SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[12];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dleadlag): '<S36>/Dctleadlag' */
  /* Level2 S-Function Block: '<S36>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[13];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dlowpass1): '<S36>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S36>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[14];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dleadlag): '<S37>/Dctleadlag' */
  /* Level2 S-Function Block: '<S37>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[15];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dlowpass1): '<S37>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S37>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[16];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dweakint): '<S46>/Dctintegrator' */
  /* Level2 S-Function Block: '<S46>/Dctintegrator' (dweakint) */
  {
    SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[17];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dleadlag): '<S46>/Dctleadlag' */
  /* Level2 S-Function Block: '<S46>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[18];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dlowpass1): '<S46>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S46>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[19];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dleadlag): '<S47>/Dctleadlag' */
  /* Level2 S-Function Block: '<S47>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[20];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dlowpass1): '<S47>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S47>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[21];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dweakint): '<S57>/Dctintegrator3' */
  /* Level2 S-Function Block: '<S57>/Dctintegrator3' (dweakint) */
  {
    SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[22];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dlowpass1): '<S57>/Dct1lowpass' */
  /* Level2 S-Function Block: '<S57>/Dct1lowpass' (dlowpass1) */
  {
    SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[23];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (dleadlag): '<S57>/Dctleadlag' */
  /* Level2 S-Function Block: '<S57>/Dctleadlag' (dleadlag) */
  {
    SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[24];
    sfcnTerminate(rts);
  }

  /* Terminate for Enabled SubSystem: '<S23>/Subsystem3' */
  /* Terminate for IfAction SubSystem: '<S25>/If Action Subsystem' */
  Robot_Student_SerialWrite1_Term(&Robot_Student_2021_v1_DW.SerialWrite1);

  /* End of Terminate for SubSystem: '<S25>/If Action Subsystem' */

  /* Terminate for IfAction SubSystem: '<S25>/If Action Subsystem1' */
  Robot_Student_SerialWrite1_Term(&Robot_Student_2021_v1_DW.SerialWrite);

  /* End of Terminate for SubSystem: '<S25>/If Action Subsystem1' */
  /* End of Terminate for SubSystem: '<S23>/Subsystem3' */

  /* Terminate for S-Function (ec_EboxResetEnc): '<S19>/Reset EncoderR' */
  /* Level2 S-Function Block: '<S19>/Reset EncoderR' (ec_EboxResetEnc) */
  {
    SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[25];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (ec_EboxResetEnc): '<S20>/Reset EncoderX' */
  /* Level2 S-Function Block: '<S20>/Reset EncoderX' (ec_EboxResetEnc) */
  {
    SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[26];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (ec_EboxResetEnc): '<S21>/Reset EncoderX' */
  /* Level2 S-Function Block: '<S21>/Reset EncoderX' (ec_EboxResetEnc) */
  {
    SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[27];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (ec_EboxResetEnc): '<S22>/Reset EncoderConv' */
  /* Level2 S-Function Block: '<S22>/Reset EncoderConv' (ec_EboxResetEnc) */
  {
    SimStruct *rts = Robot_Student_2021_v1_M->childSfunctions[28];
    sfcnTerminate(rts);
  }
}
