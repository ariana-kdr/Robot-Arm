/*
 * Robot_Student_2021_v1_private.h
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

#ifndef RTW_HEADER_Robot_Student_2021_v1_private_h_
#define RTW_HEADER_Robot_Student_2021_v1_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "Robot_Student_2021_v1.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmIsMajorTimeStep
#define rtmIsMajorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
#define rtmIsMinorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmSetTFinal
#define rtmSetTFinal(rtm, val)         ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmSetTPtr
#define rtmSetTPtr(rtm, val)           ((rtm)->Timing.t = (val))
#endif

extern real_T rt_urand_Upu32_Yd_f_pw_snf(uint32_T *u);
extern real_T rt_nrand_Upu32_Yd_f_pw_snf(uint32_T *u);
extern void dweakint(SimStruct *rts);
extern void dlowpass1(SimStruct *rts);
extern void dleadlag(SimStruct *rts);
extern void ec_Supervisor(SimStruct *rts);
extern void ec_Ebox(SimStruct *rts);
extern void ec_EboxResetEnc(SimStruct *rts);
extern void Robot_Studen_SerialWrite1_Start(DW_SerialWrite1_Robot_Student_T
  *localDW);
extern void Robot_Student_2021_SerialWrite1(const uint8_T rtu_0[32],
  DW_SerialWrite1_Robot_Student_T *localDW);
extern void Robot_Student_2021_v1_Angle2Z(const real_T rtu_u[3],
  B_Angle2Z_Robot_Student_2021__T *localB);
extern void Robot_Student_SerialWrite1_Term(DW_SerialWrite1_Robot_Student_T
  *localDW);

#endif                         /* RTW_HEADER_Robot_Student_2021_v1_private_h_ */
