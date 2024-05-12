/*
 * File: Subsystem5.h
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

#ifndef RTW_HEADER_Subsystem5_h_
#define RTW_HEADER_Subsystem5_h_
#include <stddef.h>
#ifndef Subsystem5_COMMON_INCLUDES_
#define Subsystem5_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Subsystem5_COMMON_INCLUDES_ */

#include "Subsystem5_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Real-time Model Data Structure */
struct tag_RTM_Subsystem5_T {
  const char_T * volatile errorStatus;
};

/* Model entry point functions */
extern void Subsystem5_initialize(void);
extern void Subsystem5_step(void);
extern void Subsystem5_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Subsystem5_T *const Subsystem5_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/Display' : Unused code path elimination
 * Block '<S8>/Data Type Propagation' : Unused code path elimination
 * Block '<S9>/FixPt Constant' : Unused code path elimination
 * Block '<S9>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S9>/FixPt Sum1' : Unused code path elimination
 * Block '<S8>/Output' : Unused code path elimination
 * Block '<S10>/Constant' : Unused code path elimination
 * Block '<S10>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S10>/FixPt Switch' : Unused code path elimination
 * Block '<S2>/Out' : Unused code path elimination
 * Block '<S2>/Output' : Unused code path elimination
 * Block '<S2>/Vector' : Unused code path elimination
 * Block '<S1>/Scope' : Unused code path elimination
 * Block '<S11>/Add' : Unused code path elimination
 * Block '<S13>/Compare' : Unused code path elimination
 * Block '<S13>/Constant' : Unused code path elimination
 * Block '<S11>/Constant' : Unused code path elimination
 * Block '<S11>/Constant1' : Unused code path elimination
 * Block '<S11>/Constant2' : Unused code path elimination
 * Block '<S11>/Relational Operator' : Unused code path elimination
 * Block '<S11>/Switch2' : Unused code path elimination
 * Block '<S11>/Unit Delay' : Unused code path elimination
 * Block '<S12>/Switch' : Unused code path elimination
 * Block '<S12>/on' : Unused code path elimination
 * Block '<S12>/on1' : Unused code path elimination
 * Block '<S14>/Add' : Unused code path elimination
 * Block '<S16>/Compare' : Unused code path elimination
 * Block '<S16>/Constant' : Unused code path elimination
 * Block '<S14>/Constant' : Unused code path elimination
 * Block '<S14>/Constant1' : Unused code path elimination
 * Block '<S14>/Constant2' : Unused code path elimination
 * Block '<S14>/Relational Operator' : Unused code path elimination
 * Block '<S14>/Scope' : Unused code path elimination
 * Block '<S14>/Switch2' : Unused code path elimination
 * Block '<S14>/Unit Delay' : Unused code path elimination
 * Block '<S15>/Switch1' : Unused code path elimination
 * Block '<S15>/on2' : Unused code path elimination
 * Block '<S15>/on3' : Unused code path elimination
 * Block '<S5>/Data Type Conversion' : Unused code path elimination
 * Block '<S5>/Switch' : Unused code path elimination
 * Block '<S6>/Constant' : Unused code path elimination
 * Block '<S6>/Relational Operator' : Unused code path elimination
 * Block '<S7>/Constant' : Unused code path elimination
 * Block '<S7>/Relational Operator' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Note that this particular code originates from a subsystem build,
 * and has its own system numbers different from the parent model.
 * Refer to the system hierarchy for this subsystem below, and use the
 * MATLAB hilite_system command to trace the generated code back
 * to the parent model.  For example,
 *
 * hilite_system('requriment_3/Subsystem5')    - opens subsystem requriment_3/Subsystem5
 * hilite_system('requriment_3/Subsystem5/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'requriment_3'
 * '<S1>'   : 'requriment_3/Subsystem5'
 * '<S2>'   : 'requriment_3/Subsystem5/Repeating Sequence Stair'
 * '<S3>'   : 'requriment_3/Subsystem5/Subsystem'
 * '<S4>'   : 'requriment_3/Subsystem5/Subsystem2'
 * '<S5>'   : 'requriment_3/Subsystem5/Subsystem5'
 * '<S6>'   : 'requriment_3/Subsystem5/sub1'
 * '<S7>'   : 'requriment_3/Subsystem5/sub2'
 * '<S8>'   : 'requriment_3/Subsystem5/Repeating Sequence Stair/LimitedCounter'
 * '<S9>'   : 'requriment_3/Subsystem5/Repeating Sequence Stair/LimitedCounter/Increment Real World'
 * '<S10>'  : 'requriment_3/Subsystem5/Repeating Sequence Stair/LimitedCounter/Wrap To Zero'
 * '<S11>'  : 'requriment_3/Subsystem5/Subsystem/Subsystem'
 * '<S12>'  : 'requriment_3/Subsystem5/Subsystem/Subsystem1'
 * '<S13>'  : 'requriment_3/Subsystem5/Subsystem/Subsystem/Compare To Constant1'
 * '<S14>'  : 'requriment_3/Subsystem5/Subsystem2/Subsystem'
 * '<S15>'  : 'requriment_3/Subsystem5/Subsystem2/Subsystem1'
 * '<S16>'  : 'requriment_3/Subsystem5/Subsystem2/Subsystem/Compare To Constant'
 */
#endif                                 /* RTW_HEADER_Subsystem5_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
