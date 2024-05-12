/*
 * File: Subsystem5.c
 *
 * Code generated for Simulink model 'Subsystem5'.
 *
 * Model version                  : 5.5
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Wed Sep 28 19:45:55 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Subsystem5.h"
#include "Subsystem5_private.h"

/* Real-time model */
static RT_MODEL_Subsystem5_T Subsystem5_M_;
RT_MODEL_Subsystem5_T *const Subsystem5_M = &Subsystem5_M_;

/* Model step function */
void Subsystem5_step(void)
{
  /* (no output/update code required) */
}

/* Model initialize function */
void Subsystem5_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Subsystem5_M, (NULL));
}

/* Model terminate function */
void Subsystem5_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
