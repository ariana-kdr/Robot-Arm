/*
 * Robot_Student_2021_v1_data.c
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

/* Block parameters (default storage) */
P_Robot_Student_2021_v1_T Robot_Student_2021_v1_P = {
  /* Mask Parameter: DiscreteDerivative_ICPrevScaled
   * Referenced by: '<S35>/UD'
   */
  0.0,

  /* Mask Parameter: DiscreteDerivative_ICPrevScal_p
   * Referenced by: '<S45>/UD'
   */
  0.0,

  /* Mask Parameter: DiscreteDerivative_ICPrevScal_i
   * Referenced by: '<S56>/UD'
   */
  0.0,

  /* Mask Parameter: CompareToConstant_const
   * Referenced by: '<S16>/Constant'
   */
  4.0,

  /* Expression: -0
   * Referenced by: '<S1>/Reference R'
   */
  -0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Suck'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S1>/ Blow'
   */
  1.0,

  /* Computed Parameter: Angle_Y0
   * Referenced by: '<S1>/Angle'
   */
  0.0,

  /* Computed Parameter: Conveyor_Y0
   * Referenced by: '<S1>/Conveyor '
   */
  0.0,

  /* Computed Parameter: Vacuum_Y0
   * Referenced by: '<S1>/Vacuum '
   */
  0.0,

  /* Computed Parameter: Blowsuck_Y0
   * Referenced by: '<S1>/Blow//suck'
   */
  0.0,

  /* Expression: [0,0,0,0,0]
   * Referenced by: '<S3>/[x,y,nproducts]'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: 0
   * Referenced by: '<S1>/Reference X'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S8>/Gain'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S1>/Feedfoward Z'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Reference Z'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S7>/Gain1'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S1>/Feedfoward X'
   */
  0.0,

  /* Expression: 0.1
   * Referenced by: '<S1>/Random Number'
   */
  0.1,

  /* Computed Parameter: RandomNumber_StdDev
   * Referenced by: '<S1>/Random Number'
   */
  0.31622776601683794,

  /* Expression: 0
   * Referenced by: '<S1>/Random Number'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S5>/Gain1'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S1>/Feedfoward R'
   */
  0.0,

  /* Computed Parameter: Discreteintegrator_gainval
   * Referenced by: '<S1>/Discrete  integrator'
   */
  0.00048828125,

  /* Expression: 0
   * Referenced by: '<S1>/Discrete  integrator'
   */
  0.0,

  /* Expression: 10*2.5/500
   * Referenced by: '<S4>/Gain1'
   */
  0.05,

  /* Computed Parameter: Dctintegrator3_P1_Size
   * Referenced by: '<S4>/Dctintegrator3'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S4>/Dctintegrator3'
   */
  0.0,

  /* Computed Parameter: Dctintegrator3_P2_Size
   * Referenced by: '<S4>/Dctintegrator3'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S4>/Dctintegrator3'
   */
  0.001,

  /* Computed Parameter: Dct1lowpass_P1_Size
   * Referenced by: '<S4>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S4>/Dct1lowpass'
   */
  30.0,

  /* Computed Parameter: Dct1lowpass_P2_Size
   * Referenced by: '<S4>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S4>/Dct1lowpass'
   */
  0.001,

  /* Computed Parameter: Dctleadlag_P1_Size
   * Referenced by: '<S4>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S4>/Dctleadlag'
   */
  3.0,

  /* Computed Parameter: Dctleadlag_P2_Size
   * Referenced by: '<S4>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S4>/Dctleadlag'
   */
  20.0,

  /* Computed Parameter: Dctleadlag_P3_Size
   * Referenced by: '<S4>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S4>/Dctleadlag'
   */
  0.001,

  /* Expression: 0
   * Referenced by: '<S1>/Conveyor speed [mm//s]'
   */
  0.0,

  /* Expression: 100
   * Referenced by: '<S1>/Saturation '
   */
  100.0,

  /* Expression: -100
   * Referenced by: '<S1>/Saturation '
   */
  -100.0,

  /* Expression: 0
   * Referenced by: '<S1>/Reference Vacuum [bar]'
   */
  0.0,

  /* Expression: -10
   * Referenced by: '<S6>/Gain1'
   */
  -10.0,

  /* Expression: 1
   * Referenced by: '<S1>/Color'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S1>/Plot'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Stop'
   */
  0.0,

  /* Expression: 0.25
   * Referenced by: '<S10>/Gain5'
   */
  0.25,

  /* Expression: 50
   * Referenced by: '<S18>/Homing Running Switch2'
   */
  50.0,

  /* Expression: 2.5
   * Referenced by: '<S18>/Homing Running Switch1'
   */
  2.5,

  /* Expression: 0.15
   * Referenced by: '<S29>/Kfc'
   */
  0.15,

  /* Expression: 0.0041
   * Referenced by: '<S29>/Kfa'
   */
  0.0041,

  /* Expression: 0.001
   * Referenced by: '<S29>/Kfv'
   */
  0.001,

  /* Expression: 0.7
   * Referenced by: '<S19>/Saturation'
   */
  0.7,

  /* Expression: -0.7
   * Referenced by: '<S19>/Saturation'
   */
  -0.7,

  /* Expression: 0.5
   * Referenced by: '<S19>/Homing Running Switch'
   */
  0.5,

  /* Expression: 0.15
   * Referenced by: '<S38>/Kfc'
   */
  0.15,

  /* Expression: 0.0005
   * Referenced by: '<S38>/Kfa'
   */
  0.0005,

  /* Expression: 0.01
   * Referenced by: '<S38>/Kfv'
   */
  0.01,

  /* Expression: 0.5
   * Referenced by: '<S20>/Homing Running Switch'
   */
  0.5,

  /* Expression: 0.1
   * Referenced by: '<S54>/Kfc'
   */
  0.1,

  /* Expression: 0.001
   * Referenced by: '<S54>/Kfa'
   */
  0.001,

  /* Expression: 0.01
   * Referenced by: '<S54>/Kfv'
   */
  0.01,

  /* Expression: 0.5
   * Referenced by: '<S21>/Homing Running Switch'
   */
  0.5,

  /* Computed Parameter: SFunction_P1_Size
   * Referenced by: '<S15>/S-Function'
   */
  { 1.0, 1.0 },

  /* Expression: portid
   * Referenced by: '<S15>/S-Function'
   */
  0.0,

  /* Computed Parameter: SFunction_P2_Size
   * Referenced by: '<S15>/S-Function'
   */
  { 1.0, 1.0 },

  /* Expression: ectimeout
   * Referenced by: '<S15>/S-Function'
   */
  500.0,

  /* Computed Parameter: ec_Ebox_P1_Size
   * Referenced by: '<S12>/ec_Ebox'
   */
  { 1.0, 1.0 },

  /* Expression: link_id
   * Referenced by: '<S12>/ec_Ebox'
   */
  0.0,

  /* Expression: 1/4000*9/150*2*pi
   * Referenced by: '<S10>/Gain'
   */
  9.4247779607693812E-5,

  /* Expression: -1/4000*9/100*2*pi
   * Referenced by: '<S10>/Gain1'
   */
  -0.00014137166941154071,

  /* Computed Parameter: ec_Ebox_P1_Size_o
   * Referenced by: '<S13>/ec_Ebox'
   */
  { 1.0, 1.0 },

  /* Expression: link_id
   * Referenced by: '<S13>/ec_Ebox'
   */
  1.0,

  /* Expression: 1/4000*9/100*2*pi
   * Referenced by: '<S10>/Gain2'
   */
  0.00014137166941154071,

  /* Computed Parameter: ec_Ebox_P1_Size_m
   * Referenced by: '<S14>/ec_Ebox'
   */
  { 1.0, 1.0 },

  /* Expression: link_id
   * Referenced by: '<S14>/ec_Ebox'
   */
  2.0,

  /* Expression: 2
   * Referenced by: '<S10>/Homing Running Switch'
   */
  2.0,

  /* Expression: -1/16000*2*pi*2.07*10
   * Referenced by: '<S10>/Gain3'
   */
  -0.00812887099116359,

  /* Expression: -0.1
   * Referenced by: '<S10>/Gain6'
   */
  -0.1,

  /* Expression: 1
   * Referenced by: '<S17>/Constant'
   */
  1.0,

  /* Computed Parameter: DiscreteTimeIntegrator_gainval
   * Referenced by: '<S19>/Discrete-Time Integrator'
   */
  0.00048828125,

  /* Expression: 0
   * Referenced by: '<S19>/Discrete-Time Integrator'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S32>/Constant1'
   */
  0.0,

  /* Computed Parameter: DiscreteTimeIntegrator_gainva_b
   * Referenced by: '<S32>/Discrete-Time Integrator'
   */
  0.00048828125,

  /* Expression: -0.1
   * Referenced by: '<S19>/Constant'
   */
  -0.1,

  /* Expression: 0
   * Referenced by: '<S11>/Unit Delay'
   */
  0.0,

  /* Expression: 1.2878
   * Referenced by: '<S11>/set_robot_calibration_r'
   */
  1.2878,

  /* Computed Parameter: DiscreteTimeIntegrator_gainva_a
   * Referenced by: '<S20>/Discrete-Time Integrator'
   */
  0.00048828125,

  /* Expression: 0
   * Referenced by: '<S20>/Discrete-Time Integrator'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S39>/Constant1'
   */
  0.0,

  /* Computed Parameter: DiscreteTimeIntegrator_gainva_i
   * Referenced by: '<S39>/Discrete-Time Integrator'
   */
  0.00048828125,

  /* Expression: -0.1
   * Referenced by: '<S20>/Constant'
   */
  -0.1,

  /* Expression: 0.6126
   * Referenced by: '<S11>/set_robot_calibration_x'
   */
  0.6126,

  /* Computed Parameter: DiscreteTimeIntegrator_gainv_ip
   * Referenced by: '<S21>/Discrete-Time Integrator'
   */
  0.00048828125,

  /* Expression: 0
   * Referenced by: '<S21>/Discrete-Time Integrator'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S49>/Constant1'
   */
  0.0,

  /* Computed Parameter: DiscreteTimeIntegrator_gainva_n
   * Referenced by: '<S49>/Discrete-Time Integrator'
   */
  0.00048828125,

  /* Expression: 0.1
   * Referenced by: '<S21>/Constant'
   */
  0.1,

  /* Expression: -0.3225
   * Referenced by: '<S11>/set_robot_calibration_z'
   */
  -0.3225,

  /* Expression: [1,0,0,0,0,0,0,0]
   * Referenced by: '<S10>/Enable//Ventiel'
   */
  { 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: 5
   * Referenced by: '<S10>/Constant1'
   */
  5.0,

  /* Expression: 1/100
   * Referenced by: '<S12>/Gain'
   */
  0.01,

  /* Expression: 25
   * Referenced by: '<S28>/Gain'
   */
  25.0,

  /* Computed Parameter: Dctintegrator_P1_Size
   * Referenced by: '<S28>/Dctintegrator'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S28>/Dctintegrator'
   */
  0.5,

  /* Computed Parameter: Dctintegrator_P2_Size
   * Referenced by: '<S28>/Dctintegrator'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S28>/Dctintegrator'
   */
  0.001,

  /* Computed Parameter: Dctleadlag_P1_Size_p
   * Referenced by: '<S28>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S28>/Dctleadlag'
   */
  6.6667,

  /* Computed Parameter: Dctleadlag_P2_Size_p
   * Referenced by: '<S28>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S28>/Dctleadlag'
   */
  60.0,

  /* Computed Parameter: Dctleadlag_P3_Size_c
   * Referenced by: '<S28>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S28>/Dctleadlag'
   */
  0.001,

  /* Computed Parameter: Dct1lowpass_P1_Size_f
   * Referenced by: '<S28>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S28>/Dct1lowpass'
   */
  100.0,

  /* Computed Parameter: Dct1lowpass_P2_Size_g
   * Referenced by: '<S28>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S28>/Dct1lowpass'
   */
  0.001,

  /* Expression: 25
   * Referenced by: '<S30>/Gain'
   */
  25.0,

  /* Computed Parameter: Dctleadlag_P1_Size_n
   * Referenced by: '<S30>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S30>/Dctleadlag'
   */
  6.6667,

  /* Computed Parameter: Dctleadlag_P2_Size_b
   * Referenced by: '<S30>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S30>/Dctleadlag'
   */
  60.0,

  /* Computed Parameter: Dctleadlag_P3_Size_d
   * Referenced by: '<S30>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S30>/Dctleadlag'
   */
  0.001,

  /* Computed Parameter: Dct1lowpass_P1_Size_p
   * Referenced by: '<S30>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S30>/Dct1lowpass'
   */
  100.0,

  /* Computed Parameter: Dct1lowpass_P2_Size_gi
   * Referenced by: '<S30>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S30>/Dct1lowpass'
   */
  0.001,

  /* Expression: 2.5
   * Referenced by: '<S10>/Voltage middle'
   */
  2.5,

  /* Expression: 20
   * Referenced by: '<S36>/Gain1'
   */
  20.0,

  /* Computed Parameter: Dctintegrator_P1_Size_c
   * Referenced by: '<S36>/Dctintegrator'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S36>/Dctintegrator'
   */
  0.5,

  /* Computed Parameter: Dctintegrator_P2_Size_j
   * Referenced by: '<S36>/Dctintegrator'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S36>/Dctintegrator'
   */
  0.001,

  /* Computed Parameter: Dctleadlag_P1_Size_ph
   * Referenced by: '<S36>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S36>/Dctleadlag'
   */
  10.0,

  /* Computed Parameter: Dctleadlag_P2_Size_l
   * Referenced by: '<S36>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S36>/Dctleadlag'
   */
  90.0,

  /* Computed Parameter: Dctleadlag_P3_Size_j
   * Referenced by: '<S36>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S36>/Dctleadlag'
   */
  0.001,

  /* Computed Parameter: Dct1lowpass_P1_Size_m
   * Referenced by: '<S36>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S36>/Dct1lowpass'
   */
  200.0,

  /* Computed Parameter: Dct1lowpass_P2_Size_i
   * Referenced by: '<S36>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S36>/Dct1lowpass'
   */
  0.001,

  /* Expression: 20
   * Referenced by: '<S37>/Gain1'
   */
  20.0,

  /* Computed Parameter: Dctleadlag_P1_Size_b
   * Referenced by: '<S37>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S37>/Dctleadlag'
   */
  10.0,

  /* Computed Parameter: Dctleadlag_P2_Size_o
   * Referenced by: '<S37>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S37>/Dctleadlag'
   */
  90.0,

  /* Computed Parameter: Dctleadlag_P3_Size_a
   * Referenced by: '<S37>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S37>/Dctleadlag'
   */
  0.001,

  /* Computed Parameter: Dct1lowpass_P1_Size_i
   * Referenced by: '<S37>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S37>/Dct1lowpass'
   */
  200.0,

  /* Computed Parameter: Dct1lowpass_P2_Size_j
   * Referenced by: '<S37>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S37>/Dct1lowpass'
   */
  0.001,

  /* Expression: 5
   * Referenced by: '<S10>/Saturation'
   */
  5.0,

  /* Expression: 0
   * Referenced by: '<S10>/Saturation'
   */
  0.0,

  /* Expression: 10
   * Referenced by: '<S12>/Saturation'
   */
  10.0,

  /* Expression: -10
   * Referenced by: '<S12>/Saturation'
   */
  -10.0,

  /* Expression: 1/100
   * Referenced by: '<S13>/Gain'
   */
  0.01,

  /* Expression: 25
   * Referenced by: '<S46>/Gain'
   */
  25.0,

  /* Computed Parameter: Dctintegrator_P1_Size_j
   * Referenced by: '<S46>/Dctintegrator'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S46>/Dctintegrator'
   */
  0.5,

  /* Computed Parameter: Dctintegrator_P2_Size_n
   * Referenced by: '<S46>/Dctintegrator'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S46>/Dctintegrator'
   */
  0.001,

  /* Computed Parameter: Dctleadlag_P1_Size_o
   * Referenced by: '<S46>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S46>/Dctleadlag'
   */
  10.0,

  /* Computed Parameter: Dctleadlag_P2_Size_o4
   * Referenced by: '<S46>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S46>/Dctleadlag'
   */
  90.0,

  /* Computed Parameter: Dctleadlag_P3_Size_l
   * Referenced by: '<S46>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S46>/Dctleadlag'
   */
  0.001,

  /* Computed Parameter: Dct1lowpass_P1_Size_g
   * Referenced by: '<S46>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S46>/Dct1lowpass'
   */
  200.0,

  /* Computed Parameter: Dct1lowpass_P2_Size_p
   * Referenced by: '<S46>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S46>/Dct1lowpass'
   */
  0.001,

  /* Expression: 30
   * Referenced by: '<S47>/Gain'
   */
  30.0,

  /* Computed Parameter: Dctleadlag_P1_Size_f
   * Referenced by: '<S47>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S47>/Dctleadlag'
   */
  10.0,

  /* Computed Parameter: Dctleadlag_P2_Size_d
   * Referenced by: '<S47>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S47>/Dctleadlag'
   */
  90.0,

  /* Computed Parameter: Dctleadlag_P3_Size_p
   * Referenced by: '<S47>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S47>/Dctleadlag'
   */
  0.001,

  /* Computed Parameter: Dct1lowpass_P1_Size_d
   * Referenced by: '<S47>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S47>/Dct1lowpass'
   */
  200.0,

  /* Computed Parameter: Dct1lowpass_P2_Size_k
   * Referenced by: '<S47>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S47>/Dct1lowpass'
   */
  0.001,

  /* Computed Parameter: DiscreteTimeIntegrator_gainva_c
   * Referenced by: '<S22>/Discrete-Time Integrator'
   */
  0.00048828125,

  /* Expression: 0
   * Referenced by: '<S22>/Discrete-Time Integrator'
   */
  0.0,

  /* Expression: 10*2.5/500
   * Referenced by: '<S57>/Gain1'
   */
  0.05,

  /* Computed Parameter: Dctintegrator3_P1_Size_e
   * Referenced by: '<S57>/Dctintegrator3'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S57>/Dctintegrator3'
   */
  0.01,

  /* Computed Parameter: Dctintegrator3_P2_Size_i
   * Referenced by: '<S57>/Dctintegrator3'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S57>/Dctintegrator3'
   */
  0.001,

  /* Computed Parameter: Dct1lowpass_P1_Size_ph
   * Referenced by: '<S57>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S57>/Dct1lowpass'
   */
  30.0,

  /* Computed Parameter: Dct1lowpass_P2_Size_p0
   * Referenced by: '<S57>/Dct1lowpass'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S57>/Dct1lowpass'
   */
  0.001,

  /* Computed Parameter: Dctleadlag_P1_Size_pu
   * Referenced by: '<S57>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_num
   * Referenced by: '<S57>/Dctleadlag'
   */
  3.0,

  /* Computed Parameter: Dctleadlag_P2_Size_n
   * Referenced by: '<S57>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: f_den
   * Referenced by: '<S57>/Dctleadlag'
   */
  20.0,

  /* Computed Parameter: Dctleadlag_P3_Size_f
   * Referenced by: '<S57>/Dctleadlag'
   */
  { 1.0, 1.0 },

  /* Expression: 0.001
   * Referenced by: '<S57>/Dctleadlag'
   */
  0.001,

  /* Expression: 0.5
   * Referenced by: '<S22>/Homing Running Switch'
   */
  0.5,

  /* Expression: 1
   * Referenced by: '<S10>/Gain4'
   */
  1.0,

  /* Expression: 5
   * Referenced by: '<S10>/Saturation1'
   */
  5.0,

  /* Expression: 0
   * Referenced by: '<S10>/Saturation1'
   */
  0.0,

  /* Expression: 10
   * Referenced by: '<S13>/Saturation'
   */
  10.0,

  /* Expression: -10
   * Referenced by: '<S13>/Saturation'
   */
  -10.0,

  /* Expression: 1/100
   * Referenced by: '<S14>/Gain'
   */
  0.01,

  /* Expression: 0.5
   * Referenced by: '<S10>/Homing Running Switch1'
   */
  0.5,

  /* Expression: 5
   * Referenced by: '<S10>/Saturation2'
   */
  5.0,

  /* Expression: 0
   * Referenced by: '<S10>/Saturation2'
   */
  0.0,

  /* Expression: 10
   * Referenced by: '<S14>/Saturation'
   */
  10.0,

  /* Expression: -10
   * Referenced by: '<S14>/Saturation'
   */
  -10.0,

  /* Expression: 0
   * Referenced by: '<S11>/Unit Delay1'
   */
  0.0,

  /* Expression: 0.5
   * Referenced by: '<S18>/Homing Running Switch'
   */
  0.5,

  /* Expression: 3
   * Referenced by: '<S11>/Gain'
   */
  3.0,

  /* Computed Parameter: ResetEncoderR_P1_Size
   * Referenced by: '<S19>/Reset EncoderR'
   */
  { 1.0, 1.0 },

  /* Expression: link_id
   * Referenced by: '<S19>/Reset EncoderR'
   */
  0.0,

  /* Computed Parameter: ResetEncoderR_P2_Size
   * Referenced by: '<S19>/Reset EncoderR'
   */
  { 1.0, 1.0 },

  /* Expression: chan_id
   * Referenced by: '<S19>/Reset EncoderR'
   */
  0.0,

  /* Expression: 0.6
   * Referenced by: '<S32>/Limit Speed'
   */
  0.6,

  /* Expression: -0.6
   * Referenced by: '<S32>/Limit Speed'
   */
  -0.6,

  /* Expression: 0
   * Referenced by: '<S32>/Limit Speed'
   */
  0.0,

  /* Computed Parameter: TSamp_WtEt
   * Referenced by: '<S35>/TSamp'
   */
  2048.0,

  /* Expression: 0.8
   * Referenced by: '<S32>/Limit Acceleration'
   */
  0.8,

  /* Expression: -0.8
   * Referenced by: '<S32>/Limit Acceleration'
   */
  -0.8,

  /* Expression: 0
   * Referenced by: '<S32>/Limit Acceleration'
   */
  0.0,

  /* Computed Parameter: ResetEncoderX_P1_Size
   * Referenced by: '<S20>/Reset EncoderX'
   */
  { 1.0, 1.0 },

  /* Expression: link_id
   * Referenced by: '<S20>/Reset EncoderX'
   */
  0.0,

  /* Computed Parameter: ResetEncoderX_P2_Size
   * Referenced by: '<S20>/Reset EncoderX'
   */
  { 1.0, 1.0 },

  /* Expression: chan_id
   * Referenced by: '<S20>/Reset EncoderX'
   */
  1.0,

  /* Expression: 0.4
   * Referenced by: '<S39>/Limit Speed'
   */
  0.4,

  /* Expression: -0.4
   * Referenced by: '<S39>/Limit Speed'
   */
  -0.4,

  /* Expression: 0
   * Referenced by: '<S39>/Limit Speed'
   */
  0.0,

  /* Computed Parameter: TSamp_WtEt_h
   * Referenced by: '<S45>/TSamp'
   */
  2048.0,

  /* Expression: 0.5
   * Referenced by: '<S39>/Limit Acceleration'
   */
  0.5,

  /* Expression: -0.5
   * Referenced by: '<S39>/Limit Acceleration'
   */
  -0.5,

  /* Expression: 0
   * Referenced by: '<S39>/Limit Acceleration'
   */
  0.0,

  /* Computed Parameter: ResetEncoderX_P1_Size_k
   * Referenced by: '<S21>/Reset EncoderX'
   */
  { 1.0, 1.0 },

  /* Expression: link_id
   * Referenced by: '<S21>/Reset EncoderX'
   */
  1.0,

  /* Computed Parameter: ResetEncoderX_P2_Size_k
   * Referenced by: '<S21>/Reset EncoderX'
   */
  { 1.0, 1.0 },

  /* Expression: chan_id
   * Referenced by: '<S21>/Reset EncoderX'
   */
  0.0,

  /* Expression: 0.2
   * Referenced by: '<S49>/Limit Speed'
   */
  0.2,

  /* Expression: -0.2
   * Referenced by: '<S49>/Limit Speed'
   */
  -0.2,

  /* Expression: 0
   * Referenced by: '<S49>/Limit Speed'
   */
  0.0,

  /* Computed Parameter: TSamp_WtEt_i
   * Referenced by: '<S56>/TSamp'
   */
  2048.0,

  /* Expression: 0.5
   * Referenced by: '<S49>/Limit Acceleration'
   */
  0.5,

  /* Expression: -0.5
   * Referenced by: '<S49>/Limit Acceleration'
   */
  -0.5,

  /* Expression: 0
   * Referenced by: '<S49>/Limit Acceleration'
   */
  0.0,

  /* Computed Parameter: ResetEncoderConv_P1_Size
   * Referenced by: '<S22>/Reset EncoderConv'
   */
  { 1.0, 1.0 },

  /* Expression: link_id
   * Referenced by: '<S22>/Reset EncoderConv'
   */
  1.0,

  /* Computed Parameter: ResetEncoderConv_P2_Size
   * Referenced by: '<S22>/Reset EncoderConv'
   */
  { 1.0, 1.0 },

  /* Expression: chan_id
   * Referenced by: '<S22>/Reset EncoderConv'
   */
  1.0,

  /* Computed Parameter: LEDRing_Y0
   * Referenced by: '<S1>/LED Ring'
   */
  "",

  /* Computed Parameter: Colorspecifiedin8hexdigitswwrrg
   * Referenced by: '<S1>/Color; specified in 8 hex digits, wwrrggbb'
   */
  "000000FF",

  /* Computed Parameter: Defaultobjectdetectioncolorsett
   * Referenced by: '<S1>/Default object detection color; set to white'
   */
  "white",

  /* Computed Parameter: StringConstant3_String
   * Referenced by: '<S27>/String Constant3'
   */
  "color ",

  /* Computed Parameter: StringConstant1_String
   * Referenced by: '<S27>/String Constant1'
   */
  " 0 16",

  /* Computed Parameter: StringConstant4_String
   * Referenced by: '<S25>/String Constant4'
   */
  "white",

  /* Computed Parameter: ReadyGreen_String
   * Referenced by: '<S11>/Ready Green'
   */
  "0000FF00",

  /* Computed Parameter: AirbagRed_String
   * Referenced by: '<S11>/Airbag Red'
   */
  "00FF0000",

  /* Computed Parameter: HomingOrange_String
   * Referenced by: '<S11>/Homing Orange'
   */
  "00FF3900",

  /* Computed Parameter: Delay_InitialCondition
   * Referenced by: '<S24>/Delay'
   */
  "",

  /* Computed Parameter: ManualSwitch2_CurrentSetting
   * Referenced by: '<S1>/Manual Switch2'
   */
  1U,

  /* Computed Parameter: ManualSwitch_CurrentSetting
   * Referenced by: '<S1>/Manual Switch'
   */
  1U,

  /* Computed Parameter: ManualSwitch1_CurrentSetting
   * Referenced by: '<S1>/Manual Switch1'
   */
  0U,

  /* Computed Parameter: Constant1_Value_b
   * Referenced by: '<S26>/Constant1'
   */
  13U,

  /* Computed Parameter: Constant_Value_c
   * Referenced by: '<S27>/Constant'
   */
  13U
};
