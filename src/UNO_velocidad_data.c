/*
 * File: UNO_velocidad_data.c
 *
 * Code generated for Simulink model 'UNO_velocidad'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Mon Dec 19 21:42:51 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "UNO_velocidad.h"
#include "UNO_velocidad_private.h"

/* Block parameters (default storage) */
P_UNO_velocidad_T UNO_velocidad_P = {
  /* Mask Parameter: DiscretePIDController_D
   * Referenced by: '<S27>/Derivative Gain'
   */
  0.0,

  /* Mask Parameter: DiscretePIDController_I
   * Referenced by: '<S30>/Integral Gain'
   */
  2.2592592592592591,

  /* Mask Parameter: DiscretePIDController_InitialCo
   * Referenced by: '<S28>/Filter'
   */
  0.0,

  /* Mask Parameter: DiscretePIDController_Initial_f
   * Referenced by: '<S33>/Integrator'
   */
  0.0,

  /* Mask Parameter: DiscretePIDController_N
   * Referenced by: '<S36>/Filter Coefficient'
   */
  1000.0,

  /* Mask Parameter: DiscretePIDController_P
   * Referenced by: '<S38>/Proportional Gain'
   */
  1.22,

  /* Expression: 0.001
   * Referenced by: '<Root>/Constant3'
   */
  0.001,

  /* Expression: 1
   * Referenced by: '<Root>/Constant7'
   */
  1.0,

  /* Expression: 0.0
   * Referenced by: '<Root>/Delay2'
   */
  0.0,

  /* Expression: 374
   * Referenced by: '<Root>/Constant4'
   */
  374.0,

  /* Expression: 60
   * Referenced by: '<Root>/Constant5'
   */
  60.0,

  /* Computed Parameter: Integrator_gainval
   * Referenced by: '<S33>/Integrator'
   */
  0.0005,

  /* Computed Parameter: Filter_gainval
   * Referenced by: '<S28>/Filter'
   */
  0.0005
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
