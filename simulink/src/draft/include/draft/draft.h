/*
 * draft.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "draft".
 *
 * Model version              : 1.12
 * Simulink Coder version : 9.7 (R2022a) 13-Nov-2021
 * C++ source code generated on : Mon Jun  6 22:06:45 2022
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_draft_h_
#define RTW_HEADER_draft_h_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "draft_pubsub_common.h"
#include "draft_types.h"
#include <stddef.h>

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
struct B_draft_T {
  SL_Bus_ap_interfaces_Pos BusAssignment;/* '<Root>/Bus Assignment' */
  SL_Bus_example_interfaces_Int32MultiArray BusAssignment2;/* '<Root>/Bus Assignment2' */
};

/* Block states (default storage) for system '<Root>' */
struct DW_draft_T {
  ros_slros2_internal_block_Pub_T obj; /* '<S10>/SinkBlock' */
  ros_slros2_internal_block_Pub_T obj_g;/* '<S9>/SinkBlock' */
  ros_slros2_internal_block_Pub_T obj_f;/* '<S8>/SinkBlock' */
  ros_slros2_internal_block_Pub_T obj_k;/* '<S7>/SinkBlock' */
  ros_slros2_internal_block_Pub_T obj_e;/* '<S6>/SinkBlock' */
  ros_slros2_internal_block_Sub_T obj_m;/* '<S15>/SourceBlock' */
  ros_slros2_internal_block_Sub_T obj_d;/* '<S14>/SourceBlock' */
  ros_slros2_internal_block_Sub_T obj_n;/* '<S13>/SourceBlock' */
  ros_slros2_internal_block_Sub_T obj_j;/* '<S12>/SourceBlock' */
  ros_slros2_internal_block_Sub_T obj_gv;/* '<S11>/SourceBlock' */
  boolean_T objisempty;                /* '<S15>/SourceBlock' */
  boolean_T objisempty_l;              /* '<S14>/SourceBlock' */
  boolean_T objisempty_j;              /* '<S13>/SourceBlock' */
  boolean_T objisempty_lr;             /* '<S12>/SourceBlock' */
  boolean_T objisempty_h;              /* '<S11>/SourceBlock' */
  boolean_T objisempty_d;              /* '<S10>/SinkBlock' */
  boolean_T objisempty_d4;             /* '<S9>/SinkBlock' */
  boolean_T objisempty_p;              /* '<S8>/SinkBlock' */
  boolean_T objisempty_lf;             /* '<S7>/SinkBlock' */
  boolean_T objisempty_jb;             /* '<S6>/SinkBlock' */
};

/* Parameters for system: '<S11>/Enabled Subsystem' */
struct P_EnabledSubsystem_draft_T_ {
  SL_Bus_ap_interfaces_Pos Out1_Y0;    /* Computed Parameter: Out1_Y0
                                        * Referenced by: '<S20>/Out1'
                                        */
};

/* Parameters for system: '<S13>/Enabled Subsystem' */
struct P_EnabledSubsystem_draft_l_T_ {
  SL_Bus_example_interfaces_Int32MultiArray Out1_Y0;/* Computed Parameter: Out1_Y0
                                                     * Referenced by: '<S22>/Out1'
                                                     */
};

/* Parameters (default storage) */
struct P_draft_T_ {
  SL_Bus_ap_interfaces_Pos Constant_Value;/* Computed Parameter: Constant_Value
                                           * Referenced by: '<S1>/Constant'
                                           */
  SL_Bus_ap_interfaces_Pos Constant_Value_c;/* Computed Parameter: Constant_Value_c
                                             * Referenced by: '<S2>/Constant'
                                             */
  SL_Bus_ap_interfaces_Pos Constant_Value_h;/* Computed Parameter: Constant_Value_h
                                             * Referenced by: '<S12>/Constant'
                                             */
  SL_Bus_ap_interfaces_Pos Constant_Value_hb;/* Computed Parameter: Constant_Value_hb
                                              * Referenced by: '<S11>/Constant'
                                              */
  SL_Bus_example_interfaces_Int32MultiArray Constant_Value_l;/* Computed Parameter: Constant_Value_l
                                                              * Referenced by: '<S3>/Constant'
                                                              */
  SL_Bus_example_interfaces_Int32MultiArray Constant_Value_o;/* Computed Parameter: Constant_Value_o
                                                              * Referenced by: '<S4>/Constant'
                                                              */
  SL_Bus_example_interfaces_Int32MultiArray Constant_Value_h5;/* Computed Parameter: Constant_Value_h5
                                                               * Referenced by: '<S13>/Constant'
                                                               */
  SL_Bus_example_interfaces_Int32MultiArray Constant_Value_m;/* Computed Parameter: Constant_Value_m
                                                              * Referenced by: '<S14>/Constant'
                                                              */
  SL_Bus_example_interfaces_Int8 Out1_Y0;/* Computed Parameter: Out1_Y0
                                          * Referenced by: '<S24>/Out1'
                                          */
  SL_Bus_example_interfaces_Int8 Constant_Value_j;/* Computed Parameter: Constant_Value_j
                                                   * Referenced by: '<S5>/Constant'
                                                   */
  SL_Bus_example_interfaces_Int8 Constant_Value_a;/* Computed Parameter: Constant_Value_a
                                                   * Referenced by: '<S15>/Constant'
                                                   */
  real_T Constant8_Value;              /* Expression: 1
                                        * Referenced by: '<Root>/Constant8'
                                        */
  real_T Constant9_Value;              /* Expression: 1
                                        * Referenced by: '<Root>/Constant9'
                                        */
  int32_T data_Y0;                     /* Computed Parameter: data_Y0
                                        * Referenced by: '<S17>/<data>'
                                        */
  int32_T data_Y0_o;                   /* Computed Parameter: data_Y0_o
                                        * Referenced by: '<S18>/<data>'
                                        */
  int32_T Constant5_Value[128];        /* Expression: pscore_array
                                        * Referenced by: '<Root>/Constant5'
                                        */
  int32_T Constant6_Value[128];        /* Expression: gscore_array
                                        * Referenced by: '<Root>/Constant6'
                                        */
  int16_T x_Y0;                        /* Computed Parameter: x_Y0
                                        * Referenced by: '<S16>/<x>'
                                        */
  int16_T y_Y0;                        /* Computed Parameter: y_Y0
                                        * Referenced by: '<S16>/<y>'
                                        */
  int16_T Constant_Value_f[128];       /* Expression: x_array
                                        * Referenced by: '<Root>/Constant'
                                        */
  int16_T Constant1_Value[128];        /* Expression: y_array
                                        * Referenced by: '<Root>/Constant1'
                                        */
  int8_T player_id_Y0;                 /* Computed Parameter: player_id_Y0
                                        * Referenced by: '<S16>/<player_id>'
                                        */
  int8_T size_Y0;                      /* Computed Parameter: size_Y0
                                        * Referenced by: '<S16>/<size>'
                                        */
  int8_T data_Y0_g;                    /* Computed Parameter: data_Y0_g
                                        * Referenced by: '<S19>/<data>'
                                        */
  int8_T Constant3_Value[128];         /* Expression: size_array
                                        * Referenced by: '<Root>/Constant3'
                                        */
  int8_T Constant4_Value[128];         /* Expression: id_array
                                        * Referenced by: '<Root>/Constant4'
                                        */
  int8_T Constant7_Value;              /* Expression: control
                                        * Referenced by: '<Root>/Constant7'
                                        */
  P_EnabledSubsystem_draft_l_T EnabledSubsystem_b;/* '<S14>/Enabled Subsystem' */
  P_EnabledSubsystem_draft_l_T EnabledSubsystem_n;/* '<S13>/Enabled Subsystem' */
  P_EnabledSubsystem_draft_T EnabledSubsystem_l;/* '<S12>/Enabled Subsystem' */
  P_EnabledSubsystem_draft_T EnabledSubsystem;/* '<S11>/Enabled Subsystem' */
};

/* Real-time Model Data Structure */
struct tag_RTM_draft_T {
  const char_T *errorStatus;
};

/* Class declaration for model draft */
class draft
{
  /* public data and function members */
 public:
  /* Real-Time Model get method */
  RT_MODEL_draft_T * getRTM();

  /* model start function */
  void start();

  /* Initial conditions function */
  void initialize();

  /* model step function */
  void step();

  /* model terminate function */
  void terminate();

  /* Constructor */
  draft();

  /* Destructor */
  ~draft();

  /* private data and function members */
 private:
  /* Block signals */
  B_draft_T draft_B;

  /* Block states */
  DW_draft_T draft_DW;

  /* Tunable parameters */
  static P_draft_T draft_P;

  /* private member function(s) for subsystem '<Root>'*/
  void draft_SystemCore_setup(ros_slros2_internal_block_Pub_T *obj);
  void draft_SystemCore_setup_j(ros_slros2_internal_block_Pub_T *obj);
  void draft_SystemCore_setup_j1(ros_slros2_internal_block_Pub_T *obj);
  void draft_SystemCore_setup_j1i(ros_slros2_internal_block_Pub_T *obj);
  void draft_SystemCore_setup_j1ij5g(ros_slros2_internal_block_Sub_T *obj);
  void draft_SystemCore_setup_j1ij5gd(ros_slros2_internal_block_Sub_T *obj);
  void draft_SystemCore_setup_j1ij5gdd(ros_slros2_internal_block_Sub_T *obj);
  void draft_SystemCore_setup_j1ij(ros_slros2_internal_block_Pub_T *obj);
  void draft_SystemCore_setup_j1ij5(ros_slros2_internal_block_Sub_T *obj);
  void draf_SystemCore_setup_j1ij5gddy(ros_slros2_internal_block_Sub_T *obj);

  /* Real-Time Model */
  RT_MODEL_draft_T draft_M;
};

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Display' : Unused code path elimination
 * Block '<Root>/Display1' : Unused code path elimination
 * Block '<Root>/Display10' : Unused code path elimination
 * Block '<Root>/Display11' : Unused code path elimination
 * Block '<Root>/Display12' : Unused code path elimination
 * Block '<Root>/Display2' : Unused code path elimination
 * Block '<Root>/Display3' : Unused code path elimination
 * Block '<Root>/Display4' : Unused code path elimination
 * Block '<Root>/Display5' : Unused code path elimination
 * Block '<Root>/Display6' : Unused code path elimination
 * Block '<Root>/Display7' : Unused code path elimination
 * Block '<Root>/Display9' : Unused code path elimination
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
 * '<Root>' : 'draft'
 * '<S1>'   : 'draft/Blank Message'
 * '<S2>'   : 'draft/Blank Message1'
 * '<S3>'   : 'draft/Blank Message2'
 * '<S4>'   : 'draft/Blank Message3'
 * '<S5>'   : 'draft/Blank Message4'
 * '<S6>'   : 'draft/Publish'
 * '<S7>'   : 'draft/Publish1'
 * '<S8>'   : 'draft/Publish2'
 * '<S9>'   : 'draft/Publish3'
 * '<S10>'  : 'draft/Publish4'
 * '<S11>'  : 'draft/Subscribe'
 * '<S12>'  : 'draft/Subscribe1'
 * '<S13>'  : 'draft/Subscribe2'
 * '<S14>'  : 'draft/Subscribe3'
 * '<S15>'  : 'draft/Subscribe4'
 * '<S16>'  : 'draft/Subsystem'
 * '<S17>'  : 'draft/Subsystem1'
 * '<S18>'  : 'draft/Subsystem2'
 * '<S19>'  : 'draft/Subsystem3'
 * '<S20>'  : 'draft/Subscribe/Enabled Subsystem'
 * '<S21>'  : 'draft/Subscribe1/Enabled Subsystem'
 * '<S22>'  : 'draft/Subscribe2/Enabled Subsystem'
 * '<S23>'  : 'draft/Subscribe3/Enabled Subsystem'
 * '<S24>'  : 'draft/Subscribe4/Enabled Subsystem'
 */
#endif                                 /* RTW_HEADER_draft_h_ */
