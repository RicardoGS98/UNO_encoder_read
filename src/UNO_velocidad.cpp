/*
 * File: UNO_velocidad.c
 *
 * Code generated for Simulink model 'UNO_velocidad'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Mon Dec 19 21:53:39 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Custom Processor->Custom Processor
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include <Arduino.h>
#include "UNO_velocidad.h"
#include "UNO_velocidad_private.h"

int pulsos_prev = 0;
long prevT = 0;

/* Block states (default storage) */
DW_UNO_velocidad_T UNO_velocidad_DW;

/* External inputs (root inport signals with default storage) */
ExtU_UNO_velocidad_T UNO_velocidad_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_UNO_velocidad_T UNO_velocidad_Y;

/* Real-time model */
static RT_MODEL_UNO_velocidad_T UNO_velocidad_M_;
RT_MODEL_UNO_velocidad_T *const UNO_velocidad_M = &UNO_velocidad_M_;

/* Model step function */
void UNO_velocidad_step(void)
{
  real_T rtb_FilterCoefficient;

  /* Sum: '<Root>/Add2' incorporates:
   *  Constant: '<Root>/Constant3'
   *  Constant: '<Root>/Constant4'
   *  Constant: '<Root>/Constant5'
   *  Constant: '<Root>/Constant7'
   *  Delay: '<Root>/Delay2'
   *  Inport: '<Root>/PPMICRO'
   *  Product: '<Root>/Divide3'
   *  Product: '<Root>/Divide4'
   *  Product: '<Root>/Product'
   *  Product: '<Root>/Product1'
   *  Sum: '<Root>/Add1'
   */
  int pulsos = 0;
  noInterrupts();
  pulsos = UNO_velocidad_U.PPMICRO;
  interrupts();
  long currT = micros();
  float deltaT = ((float)(currT - prevT)) / 1.0e6;

  UNO_velocidad_Y.VELOCIDAD = (pulsos - pulsos_prev) / deltaT / 374.0 * 60.0 * 0.001 +
                              0.999 * UNO_velocidad_Y.VELOCIDAD;

  prevT = currT;
  pulsos_prev = pulsos;

  /* Sum: '<Root>/Sum1' incorporates:
   *  Delay: '<Root>/Delay2'
   *  Inport: '<Root>/SET_POINT'
   */
  UNO_velocidad_Y.ERROR = UNO_velocidad_U.SET_POINT - UNO_velocidad_Y.VELOCIDAD;

  /* Gain: '<S36>/Filter Coefficient' incorporates:
   *  DiscreteIntegrator: '<S28>/Filter'
   *  Gain: '<S27>/Derivative Gain'
   *  Sum: '<S28>/SumD'
   */
  rtb_FilterCoefficient = (0.0 * UNO_velocidad_Y.ERROR -
                           UNO_velocidad_DW.Filter_DSTATE) *
                          1000.0;

  /* Sum: '<S42>/Sum' incorporates:
   *  DiscreteIntegrator: '<S33>/Integrator'
   *  Gain: '<S38>/Proportional Gain'
   */
  UNO_velocidad_Y.PWM = (1.22 * UNO_velocidad_Y.ERROR +
                         UNO_velocidad_DW.Integrator_DSTATE) +
                        rtb_FilterCoefficient;

  /* Saturate: '<S40>/Saturation' */
  if (UNO_velocidad_Y.PWM > 255.0)
  {
    /* Sum: '<S42>/Sum' incorporates:
     *  Outport: '<Root>/PWM'
     */
    UNO_velocidad_Y.PWM = 255.0;
  }
  else if (UNO_velocidad_Y.PWM < 0.0)
  {
    /* Sum: '<S42>/Sum' incorporates:
     *  Outport: '<Root>/PWM'
     */
    UNO_velocidad_Y.PWM = 0.0;
  }

  /* End of Saturate: '<S40>/Saturation' */

  /* Update for DiscreteIntegrator: '<S33>/Integrator' incorporates:
   *  Gain: '<S30>/Integral Gain'
   */
  UNO_velocidad_DW.Integrator_DSTATE += 2.2592592592592591 *
                                        UNO_velocidad_Y.ERROR * 0.0005;

  /* Update for DiscreteIntegrator: '<S28>/Filter' */
  UNO_velocidad_DW.Filter_DSTATE += 0.0005 * rtb_FilterCoefficient;
}

/* Model initialize function */
void UNO_velocidad_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void UNO_velocidad_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
