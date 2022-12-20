/*
 * File: UNO_velocidad.h
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

#ifndef RTW_HEADER_UNO_velocidad_h_
#define RTW_HEADER_UNO_velocidad_h_
#ifndef UNO_velocidad_COMMON_INCLUDES_
#define UNO_velocidad_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* UNO_velocidad_COMMON_INCLUDES_ */

#include "UNO_velocidad_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T Integrator_DSTATE;            /* '<S33>/Integrator' */
  real_T Filter_DSTATE;                /* '<S28>/Filter' */
} DW_UNO_velocidad_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T SET_POINT;                    /* '<Root>/SET_POINT' */
  real_T PPMICRO;                      /* '<Root>/PPMICRO' */
} ExtU_UNO_velocidad_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T ERROR;                        /* '<Root>/ERROR' */
  real_T PWM;                          /* '<Root>/PWM' */
  real_T VELOCIDAD;                    /* '<Root>/VELOCIDAD' */
} ExtY_UNO_velocidad_T;

/* Real-time Model Data Structure */
struct tag_RTM_UNO_velocidad_T {
  const char_T *errorStatus;
};

/* Block states (default storage) */
extern DW_UNO_velocidad_T UNO_velocidad_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_UNO_velocidad_T UNO_velocidad_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_UNO_velocidad_T UNO_velocidad_Y;

/* Model entry point functions */
extern void UNO_velocidad_initialize(void);
extern void UNO_velocidad_step(void);
extern void UNO_velocidad_terminate(void);

/* Real-time Model object */
extern RT_MODEL_UNO_velocidad_T *const UNO_velocidad_M;

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
 * '<Root>' : 'UNO_velocidad'
 * '<S1>'   : 'UNO_velocidad/Discrete PID Controller'
 * '<S2>'   : 'UNO_velocidad/Discrete PID Controller/Anti-windup'
 * '<S3>'   : 'UNO_velocidad/Discrete PID Controller/D Gain'
 * '<S4>'   : 'UNO_velocidad/Discrete PID Controller/Filter'
 * '<S5>'   : 'UNO_velocidad/Discrete PID Controller/Filter ICs'
 * '<S6>'   : 'UNO_velocidad/Discrete PID Controller/I Gain'
 * '<S7>'   : 'UNO_velocidad/Discrete PID Controller/Ideal P Gain'
 * '<S8>'   : 'UNO_velocidad/Discrete PID Controller/Ideal P Gain Fdbk'
 * '<S9>'   : 'UNO_velocidad/Discrete PID Controller/Integrator'
 * '<S10>'  : 'UNO_velocidad/Discrete PID Controller/Integrator ICs'
 * '<S11>'  : 'UNO_velocidad/Discrete PID Controller/N Copy'
 * '<S12>'  : 'UNO_velocidad/Discrete PID Controller/N Gain'
 * '<S13>'  : 'UNO_velocidad/Discrete PID Controller/P Copy'
 * '<S14>'  : 'UNO_velocidad/Discrete PID Controller/Parallel P Gain'
 * '<S15>'  : 'UNO_velocidad/Discrete PID Controller/Reset Signal'
 * '<S16>'  : 'UNO_velocidad/Discrete PID Controller/Saturation'
 * '<S17>'  : 'UNO_velocidad/Discrete PID Controller/Saturation Fdbk'
 * '<S18>'  : 'UNO_velocidad/Discrete PID Controller/Sum'
 * '<S19>'  : 'UNO_velocidad/Discrete PID Controller/Sum Fdbk'
 * '<S20>'  : 'UNO_velocidad/Discrete PID Controller/Tracking Mode'
 * '<S21>'  : 'UNO_velocidad/Discrete PID Controller/Tracking Mode Sum'
 * '<S22>'  : 'UNO_velocidad/Discrete PID Controller/Tsamp - Integral'
 * '<S23>'  : 'UNO_velocidad/Discrete PID Controller/Tsamp - Ngain'
 * '<S24>'  : 'UNO_velocidad/Discrete PID Controller/postSat Signal'
 * '<S25>'  : 'UNO_velocidad/Discrete PID Controller/preSat Signal'
 * '<S26>'  : 'UNO_velocidad/Discrete PID Controller/Anti-windup/Passthrough'
 * '<S27>'  : 'UNO_velocidad/Discrete PID Controller/D Gain/Internal Parameters'
 * '<S28>'  : 'UNO_velocidad/Discrete PID Controller/Filter/Disc. Forward Euler Filter'
 * '<S29>'  : 'UNO_velocidad/Discrete PID Controller/Filter ICs/Internal IC - Filter'
 * '<S30>'  : 'UNO_velocidad/Discrete PID Controller/I Gain/Internal Parameters'
 * '<S31>'  : 'UNO_velocidad/Discrete PID Controller/Ideal P Gain/Passthrough'
 * '<S32>'  : 'UNO_velocidad/Discrete PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S33>'  : 'UNO_velocidad/Discrete PID Controller/Integrator/Discrete'
 * '<S34>'  : 'UNO_velocidad/Discrete PID Controller/Integrator ICs/Internal IC'
 * '<S35>'  : 'UNO_velocidad/Discrete PID Controller/N Copy/Disabled'
 * '<S36>'  : 'UNO_velocidad/Discrete PID Controller/N Gain/Internal Parameters'
 * '<S37>'  : 'UNO_velocidad/Discrete PID Controller/P Copy/Disabled'
 * '<S38>'  : 'UNO_velocidad/Discrete PID Controller/Parallel P Gain/Internal Parameters'
 * '<S39>'  : 'UNO_velocidad/Discrete PID Controller/Reset Signal/Disabled'
 * '<S40>'  : 'UNO_velocidad/Discrete PID Controller/Saturation/Enabled'
 * '<S41>'  : 'UNO_velocidad/Discrete PID Controller/Saturation Fdbk/Disabled'
 * '<S42>'  : 'UNO_velocidad/Discrete PID Controller/Sum/Sum_PID'
 * '<S43>'  : 'UNO_velocidad/Discrete PID Controller/Sum Fdbk/Disabled'
 * '<S44>'  : 'UNO_velocidad/Discrete PID Controller/Tracking Mode/Disabled'
 * '<S45>'  : 'UNO_velocidad/Discrete PID Controller/Tracking Mode Sum/Passthrough'
 * '<S46>'  : 'UNO_velocidad/Discrete PID Controller/Tsamp - Integral/Passthrough'
 * '<S47>'  : 'UNO_velocidad/Discrete PID Controller/Tsamp - Ngain/Passthrough'
 * '<S48>'  : 'UNO_velocidad/Discrete PID Controller/postSat Signal/Forward_Path'
 * '<S49>'  : 'UNO_velocidad/Discrete PID Controller/preSat Signal/Forward_Path'
 */
#endif                                 /* RTW_HEADER_UNO_velocidad_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
