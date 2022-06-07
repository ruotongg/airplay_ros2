/*
 * draft.cpp
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

#include "draft.h"
#include "rtwtypes.h"
#include "draft_types.h"
#include <string.h>
#include "rmw/qos_profiles.h"
#include "rmw/types.h"
#include <stddef.h>

void draft::draft_SystemCore_setup(ros_slros2_internal_block_Pub_T *obj)
{
  rmw_qos_durability_policy_t durability;
  rmw_qos_history_policy_t history;
  rmw_qos_profile_t qos_profile;
  rmw_qos_reliability_policy_t reliability;
  char_T b_zeroDelimTopic[9];
  static const char_T tmp[8] = { '/', 'p', 'o', 's', '_', 'r', 'a', 'w' };

  obj->isSetupComplete = false;
  obj->isInitialized = 1;
  qos_profile = rmw_qos_profile_default;
  history = RMW_QOS_POLICY_HISTORY_KEEP_LAST;
  reliability = RMW_QOS_POLICY_RELIABILITY_RELIABLE;
  durability = RMW_QOS_POLICY_DURABILITY_VOLATILE;
  SET_QOS_VALUES(qos_profile, history, (size_t)1.0, durability, reliability);
  for (int32_T i = 0; i < 8; i++) {
    b_zeroDelimTopic[i] = tmp[i];
  }

  b_zeroDelimTopic[8] = '\x00';
  ros2::matlab::create_Pub_draft_1(&b_zeroDelimTopic[0], qos_profile);
  obj->isSetupComplete = true;
}

void draft::draft_SystemCore_setup_j(ros_slros2_internal_block_Pub_T *obj)
{
  rmw_qos_durability_policy_t durability;
  rmw_qos_history_policy_t history;
  rmw_qos_profile_t qos_profile;
  rmw_qos_reliability_policy_t reliability;
  char_T b_zeroDelimTopic[10];
  static const char_T tmp[9] = { '/', 'p', 'o', 's', '_', 't', 'r', 'u', 'e' };

  obj->isSetupComplete = false;
  obj->isInitialized = 1;
  qos_profile = rmw_qos_profile_default;
  history = RMW_QOS_POLICY_HISTORY_KEEP_LAST;
  reliability = RMW_QOS_POLICY_RELIABILITY_RELIABLE;
  durability = RMW_QOS_POLICY_DURABILITY_VOLATILE;
  SET_QOS_VALUES(qos_profile, history, (size_t)1.0, durability, reliability);
  for (int32_T i = 0; i < 9; i++) {
    b_zeroDelimTopic[i] = tmp[i];
  }

  b_zeroDelimTopic[9] = '\x00';
  ros2::matlab::create_Pub_draft_8(&b_zeroDelimTopic[0], qos_profile);
  obj->isSetupComplete = true;
}

void draft::draft_SystemCore_setup_j1(ros_slros2_internal_block_Pub_T *obj)
{
  rmw_qos_durability_policy_t durability;
  rmw_qos_history_policy_t history;
  rmw_qos_profile_t qos_profile;
  rmw_qos_reliability_policy_t reliability;
  char_T b_zeroDelimTopic[18];
  static const char_T tmp[17] = { '/', 's', 'c', 'o', 'r', 'e', '/', 'g', 'a',
    'm', 'e', '_', 's', 'c', 'o', 'r', 'e' };

  obj->isSetupComplete = false;
  obj->isInitialized = 1;
  qos_profile = rmw_qos_profile_default;
  history = RMW_QOS_POLICY_HISTORY_KEEP_LAST;
  reliability = RMW_QOS_POLICY_RELIABILITY_RELIABLE;
  durability = RMW_QOS_POLICY_DURABILITY_VOLATILE;
  SET_QOS_VALUES(qos_profile, history, (size_t)1.0, durability, reliability);
  for (int32_T i = 0; i < 17; i++) {
    b_zeroDelimTopic[i] = tmp[i];
  }

  b_zeroDelimTopic[17] = '\x00';
  ros2::matlab::create_Pub_draft_10(&b_zeroDelimTopic[0], qos_profile);
  obj->isSetupComplete = true;
}

void draft::draft_SystemCore_setup_j1i(ros_slros2_internal_block_Pub_T *obj)
{
  rmw_qos_durability_policy_t durability;
  rmw_qos_history_policy_t history;
  rmw_qos_profile_t qos_profile;
  rmw_qos_reliability_policy_t reliability;
  char_T b_zeroDelimTopic[20];
  static const char_T tmp[19] = { '/', 's', 'c', 'o', 'r', 'e', '/', 'p', 'l',
    'a', 'y', 'e', 'r', '_', 's', 'c', 'o', 'r', 'e' };

  obj->isSetupComplete = false;
  obj->isInitialized = 1;
  qos_profile = rmw_qos_profile_default;
  history = RMW_QOS_POLICY_HISTORY_KEEP_LAST;
  reliability = RMW_QOS_POLICY_RELIABILITY_RELIABLE;
  durability = RMW_QOS_POLICY_DURABILITY_VOLATILE;
  SET_QOS_VALUES(qos_profile, history, (size_t)1.0, durability, reliability);
  for (int32_T i = 0; i < 19; i++) {
    b_zeroDelimTopic[i] = tmp[i];
  }

  b_zeroDelimTopic[19] = '\x00';
  ros2::matlab::create_Pub_draft_14(&b_zeroDelimTopic[0], qos_profile);
  obj->isSetupComplete = true;
}

void draft::draft_SystemCore_setup_j1ij5g(ros_slros2_internal_block_Sub_T *obj)
{
  rmw_qos_durability_policy_t durability;
  rmw_qos_history_policy_t history;
  rmw_qos_profile_t qos_profile;
  rmw_qos_reliability_policy_t reliability;
  char_T b_zeroDelimTopic[10];
  static const char_T tmp[9] = { '/', 'p', 'o', 's', '_', 't', 'r', 'u', 'e' };

  obj->isSetupComplete = false;
  obj->isInitialized = 1;
  qos_profile = rmw_qos_profile_default;
  history = RMW_QOS_POLICY_HISTORY_KEEP_LAST;
  reliability = RMW_QOS_POLICY_RELIABILITY_RELIABLE;
  durability = RMW_QOS_POLICY_DURABILITY_VOLATILE;
  SET_QOS_VALUES(qos_profile, history, (size_t)1.0, durability, reliability);
  for (int32_T i = 0; i < 9; i++) {
    b_zeroDelimTopic[i] = tmp[i];
  }

  b_zeroDelimTopic[9] = '\x00';
  ros2::matlab::create_Sub_draft_17(&b_zeroDelimTopic[0], qos_profile);
  obj->isSetupComplete = true;
}

void draft::draft_SystemCore_setup_j1ij5gd(ros_slros2_internal_block_Sub_T *obj)
{
  rmw_qos_durability_policy_t durability;
  rmw_qos_history_policy_t history;
  rmw_qos_profile_t qos_profile;
  rmw_qos_reliability_policy_t reliability;
  char_T b_zeroDelimTopic[18];
  static const char_T tmp[17] = { '/', 's', 'c', 'o', 'r', 'e', '/', 'g', 'a',
    'm', 'e', '_', 's', 'c', 'o', 'r', 'e' };

  obj->isSetupComplete = false;
  obj->isInitialized = 1;
  qos_profile = rmw_qos_profile_default;
  history = RMW_QOS_POLICY_HISTORY_KEEP_LAST;
  reliability = RMW_QOS_POLICY_RELIABILITY_RELIABLE;
  durability = RMW_QOS_POLICY_DURABILITY_VOLATILE;
  SET_QOS_VALUES(qos_profile, history, (size_t)1.0, durability, reliability);
  for (int32_T i = 0; i < 17; i++) {
    b_zeroDelimTopic[i] = tmp[i];
  }

  b_zeroDelimTopic[17] = '\x00';
  ros2::matlab::create_Sub_draft_21(&b_zeroDelimTopic[0], qos_profile);
  obj->isSetupComplete = true;
}

void draft::draft_SystemCore_setup_j1ij5gdd(ros_slros2_internal_block_Sub_T *obj)
{
  rmw_qos_durability_policy_t durability;
  rmw_qos_history_policy_t history;
  rmw_qos_profile_t qos_profile;
  rmw_qos_reliability_policy_t reliability;
  char_T b_zeroDelimTopic[20];
  static const char_T tmp[19] = { '/', 's', 'c', 'o', 'r', 'e', '/', 'p', 'l',
    'a', 'y', 'e', 'r', '_', 's', 'c', 'o', 'r', 'e' };

  obj->isSetupComplete = false;
  obj->isInitialized = 1;
  qos_profile = rmw_qos_profile_default;
  history = RMW_QOS_POLICY_HISTORY_KEEP_LAST;
  reliability = RMW_QOS_POLICY_RELIABILITY_RELIABLE;
  durability = RMW_QOS_POLICY_DURABILITY_VOLATILE;
  SET_QOS_VALUES(qos_profile, history, (size_t)1.0, durability, reliability);
  for (int32_T i = 0; i < 19; i++) {
    b_zeroDelimTopic[i] = tmp[i];
  }

  b_zeroDelimTopic[19] = '\x00';
  ros2::matlab::create_Sub_draft_22(&b_zeroDelimTopic[0], qos_profile);
  obj->isSetupComplete = true;
}

void draft::draft_SystemCore_setup_j1ij(ros_slros2_internal_block_Pub_T *obj)
{
  rmw_qos_durability_policy_t durability;
  rmw_qos_history_policy_t history;
  rmw_qos_profile_t qos_profile;
  rmw_qos_reliability_policy_t reliability;
  char_T b_zeroDelimTopic[9];
  static const char_T tmp[8] = { '/', 'c', 'o', 'n', 't', 'r', 'o', 'l' };

  obj->isSetupComplete = false;
  obj->isInitialized = 1;
  qos_profile = rmw_qos_profile_default;
  history = RMW_QOS_POLICY_HISTORY_KEEP_LAST;
  reliability = RMW_QOS_POLICY_RELIABILITY_RELIABLE;
  durability = RMW_QOS_POLICY_DURABILITY_VOLATILE;
  SET_QOS_VALUES(qos_profile, history, (size_t)1.0, durability, reliability);
  for (int32_T i = 0; i < 8; i++) {
    b_zeroDelimTopic[i] = tmp[i];
  }

  b_zeroDelimTopic[8] = '\x00';
  ros2::matlab::create_Pub_draft_18(&b_zeroDelimTopic[0], qos_profile);
  obj->isSetupComplete = true;
}

void draft::draft_SystemCore_setup_j1ij5(ros_slros2_internal_block_Sub_T *obj)
{
  rmw_qos_durability_policy_t durability;
  rmw_qos_history_policy_t history;
  rmw_qos_profile_t qos_profile;
  rmw_qos_reliability_policy_t reliability;
  char_T b_zeroDelimTopic[9];
  static const char_T tmp[8] = { '/', 'p', 'o', 's', '_', 'r', 'a', 'w' };

  obj->isSetupComplete = false;
  obj->isInitialized = 1;
  qos_profile = rmw_qos_profile_default;
  history = RMW_QOS_POLICY_HISTORY_KEEP_LAST;
  reliability = RMW_QOS_POLICY_RELIABILITY_RELIABLE;
  durability = RMW_QOS_POLICY_DURABILITY_VOLATILE;
  SET_QOS_VALUES(qos_profile, history, (size_t)1.0, durability, reliability);
  for (int32_T i = 0; i < 8; i++) {
    b_zeroDelimTopic[i] = tmp[i];
  }

  b_zeroDelimTopic[8] = '\x00';
  ros2::matlab::create_Sub_draft_2(&b_zeroDelimTopic[0], qos_profile);
  obj->isSetupComplete = true;
}

void draft::draf_SystemCore_setup_j1ij5gddy(ros_slros2_internal_block_Sub_T *obj)
{
  rmw_qos_durability_policy_t durability;
  rmw_qos_history_policy_t history;
  rmw_qos_profile_t qos_profile;
  rmw_qos_reliability_policy_t reliability;
  char_T b_zeroDelimTopic[9];
  static const char_T tmp[8] = { '/', 'c', 'o', 'n', 't', 'r', 'o', 'l' };

  obj->isSetupComplete = false;
  obj->isInitialized = 1;
  qos_profile = rmw_qos_profile_default;
  history = RMW_QOS_POLICY_HISTORY_KEEP_LAST;
  reliability = RMW_QOS_POLICY_RELIABILITY_RELIABLE;
  durability = RMW_QOS_POLICY_DURABILITY_VOLATILE;
  SET_QOS_VALUES(qos_profile, history, (size_t)1.0, durability, reliability);
  for (int32_T i = 0; i < 8; i++) {
    b_zeroDelimTopic[i] = tmp[i];
  }

  b_zeroDelimTopic[8] = '\x00';
  ros2::matlab::create_Sub_draft_23(&b_zeroDelimTopic[0], qos_profile);
  obj->isSetupComplete = true;
}

/* Model step function */
void draft::step()
{
  SL_Bus_example_interfaces_Int8 rtb_BusAssignment4;

  /* BusAssignment: '<Root>/Bus Assignment' incorporates:
   *  Constant: '<Root>/Constant'
   *  Constant: '<Root>/Constant1'
   *  Constant: '<Root>/Constant3'
   *  Constant: '<Root>/Constant8'
   *  Constant: '<S1>/Constant'
   */
  draft_B.BusAssignment = draft_P.Constant_Value;
  draft_B.BusAssignment.timestamp = draft_P.Constant8_Value;
  memcpy(&draft_B.BusAssignment.x[0], &draft_P.Constant_Value_f[0], sizeof
         (int16_T) << 7U);
  memcpy(&draft_B.BusAssignment.y[0], &draft_P.Constant1_Value[0], sizeof
         (int16_T) << 7U);
  memcpy(&draft_B.BusAssignment.size[0], &draft_P.Constant3_Value[0], sizeof
         (int8_T) << 7U);

  /* MATLABSystem: '<S6>/SinkBlock' */
  ros2::matlab::publish_Pub_draft_1(&draft_B.BusAssignment);

  /* BusAssignment: '<Root>/Bus Assignment1' incorporates:
   *  Constant: '<Root>/Constant4'
   *  Constant: '<Root>/Constant9'
   *  Constant: '<S2>/Constant'
   */
  draft_B.BusAssignment = draft_P.Constant_Value_c;
  draft_B.BusAssignment.timestamp = draft_P.Constant9_Value;
  memcpy(&draft_B.BusAssignment.player_id[0], &draft_P.Constant4_Value[0],
         sizeof(int8_T) << 7U);

  /* MATLABSystem: '<S7>/SinkBlock' */
  ros2::matlab::publish_Pub_draft_8(&draft_B.BusAssignment);

  /* BusAssignment: '<Root>/Bus Assignment2' incorporates:
   *  Constant: '<Root>/Constant5'
   *  Constant: '<S3>/Constant'
   */
  draft_B.BusAssignment2 = draft_P.Constant_Value_l;
  memcpy(&draft_B.BusAssignment2.data[0], &draft_P.Constant5_Value[0], sizeof
         (int32_T) << 7U);

  /* MATLABSystem: '<S8>/SinkBlock' */
  ros2::matlab::publish_Pub_draft_10(&draft_B.BusAssignment2);

  /* BusAssignment: '<Root>/Bus Assignment3' incorporates:
   *  Constant: '<Root>/Constant6'
   *  Constant: '<S4>/Constant'
   */
  draft_B.BusAssignment2 = draft_P.Constant_Value_o;
  memcpy(&draft_B.BusAssignment2.data[0], &draft_P.Constant6_Value[0], sizeof
         (int32_T) << 7U);

  /* MATLABSystem: '<S9>/SinkBlock' */
  ros2::matlab::publish_Pub_draft_14(&draft_B.BusAssignment2);

  /* MATLABSystem: '<S12>/SourceBlock' */
  ros2::matlab::getLatestMessage_Sub_draft_17(&draft_B.BusAssignment);

  /* MATLABSystem: '<S13>/SourceBlock' */
  ros2::matlab::getLatestMessage_Sub_draft_21(&draft_B.BusAssignment2);

  /* MATLABSystem: '<S14>/SourceBlock' */
  ros2::matlab::getLatestMessage_Sub_draft_22(&draft_B.BusAssignment2);

  /* BusAssignment: '<Root>/Bus Assignment4' incorporates:
   *  Constant: '<Root>/Constant7'
   */
  rtb_BusAssignment4.data = draft_P.Constant7_Value;

  /* MATLABSystem: '<S10>/SinkBlock' */
  ros2::matlab::publish_Pub_draft_18(&rtb_BusAssignment4);

  /* MATLABSystem: '<S11>/SourceBlock' */
  ros2::matlab::getLatestMessage_Sub_draft_2(&draft_B.BusAssignment);

  /* MATLABSystem: '<S15>/SourceBlock' */
  ros2::matlab::getLatestMessage_Sub_draft_23(&rtb_BusAssignment4);
}

/* Model initialize function */
void draft::initialize()
{
  /* Start for MATLABSystem: '<S6>/SinkBlock' */
  draft_DW.obj_e.isInitialized = 0;
  draft_DW.obj_e.matlabCodegenIsDeleted = false;
  draft_DW.objisempty_jb = true;
  draft_SystemCore_setup(&draft_DW.obj_e);

  /* Start for MATLABSystem: '<S7>/SinkBlock' */
  draft_DW.obj_k.isInitialized = 0;
  draft_DW.obj_k.matlabCodegenIsDeleted = false;
  draft_DW.objisempty_lf = true;
  draft_SystemCore_setup_j(&draft_DW.obj_k);

  /* Start for MATLABSystem: '<S8>/SinkBlock' */
  draft_DW.obj_f.isInitialized = 0;
  draft_DW.obj_f.matlabCodegenIsDeleted = false;
  draft_DW.objisempty_p = true;
  draft_SystemCore_setup_j1(&draft_DW.obj_f);

  /* Start for MATLABSystem: '<S9>/SinkBlock' */
  draft_DW.obj_g.isInitialized = 0;
  draft_DW.obj_g.matlabCodegenIsDeleted = false;
  draft_DW.objisempty_d4 = true;
  draft_SystemCore_setup_j1i(&draft_DW.obj_g);

  /* Start for MATLABSystem: '<S12>/SourceBlock' */
  draft_DW.obj_j.isInitialized = 0;
  draft_DW.obj_j.matlabCodegenIsDeleted = false;
  draft_DW.objisempty_lr = true;
  draft_SystemCore_setup_j1ij5g(&draft_DW.obj_j);

  /* Start for MATLABSystem: '<S13>/SourceBlock' */
  draft_DW.obj_n.isInitialized = 0;
  draft_DW.obj_n.matlabCodegenIsDeleted = false;
  draft_DW.objisempty_j = true;
  draft_SystemCore_setup_j1ij5gd(&draft_DW.obj_n);

  /* Start for MATLABSystem: '<S14>/SourceBlock' */
  draft_DW.obj_d.isInitialized = 0;
  draft_DW.obj_d.matlabCodegenIsDeleted = false;
  draft_DW.objisempty_l = true;
  draft_SystemCore_setup_j1ij5gdd(&draft_DW.obj_d);

  /* Start for MATLABSystem: '<S10>/SinkBlock' */
  draft_DW.obj.isInitialized = 0;
  draft_DW.obj.matlabCodegenIsDeleted = false;
  draft_DW.objisempty_d = true;
  draft_SystemCore_setup_j1ij(&draft_DW.obj);

  /* Start for MATLABSystem: '<S11>/SourceBlock' */
  draft_DW.obj_gv.isInitialized = 0;
  draft_DW.obj_gv.matlabCodegenIsDeleted = false;
  draft_DW.objisempty_h = true;
  draft_SystemCore_setup_j1ij5(&draft_DW.obj_gv);

  /* Start for MATLABSystem: '<S15>/SourceBlock' */
  draft_DW.obj_m.isInitialized = 0;
  draft_DW.obj_m.matlabCodegenIsDeleted = false;
  draft_DW.objisempty = true;
  draf_SystemCore_setup_j1ij5gddy(&draft_DW.obj_m);
}

/* Model terminate function */
void draft::terminate()
{
  /* Terminate for MATLABSystem: '<S6>/SinkBlock' */
  if (!draft_DW.obj_e.matlabCodegenIsDeleted) {
    draft_DW.obj_e.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S6>/SinkBlock' */

  /* Terminate for MATLABSystem: '<S7>/SinkBlock' */
  if (!draft_DW.obj_k.matlabCodegenIsDeleted) {
    draft_DW.obj_k.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S7>/SinkBlock' */

  /* Terminate for MATLABSystem: '<S8>/SinkBlock' */
  if (!draft_DW.obj_f.matlabCodegenIsDeleted) {
    draft_DW.obj_f.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S8>/SinkBlock' */

  /* Terminate for MATLABSystem: '<S9>/SinkBlock' */
  if (!draft_DW.obj_g.matlabCodegenIsDeleted) {
    draft_DW.obj_g.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S9>/SinkBlock' */

  /* Terminate for MATLABSystem: '<S12>/SourceBlock' */
  if (!draft_DW.obj_j.matlabCodegenIsDeleted) {
    draft_DW.obj_j.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S12>/SourceBlock' */

  /* Terminate for MATLABSystem: '<S13>/SourceBlock' */
  if (!draft_DW.obj_n.matlabCodegenIsDeleted) {
    draft_DW.obj_n.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S13>/SourceBlock' */

  /* Terminate for MATLABSystem: '<S14>/SourceBlock' */
  if (!draft_DW.obj_d.matlabCodegenIsDeleted) {
    draft_DW.obj_d.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S14>/SourceBlock' */

  /* Terminate for MATLABSystem: '<S10>/SinkBlock' */
  if (!draft_DW.obj.matlabCodegenIsDeleted) {
    draft_DW.obj.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S10>/SinkBlock' */

  /* Terminate for MATLABSystem: '<S11>/SourceBlock' */
  if (!draft_DW.obj_gv.matlabCodegenIsDeleted) {
    draft_DW.obj_gv.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S11>/SourceBlock' */

  /* Terminate for MATLABSystem: '<S15>/SourceBlock' */
  if (!draft_DW.obj_m.matlabCodegenIsDeleted) {
    draft_DW.obj_m.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S15>/SourceBlock' */
}

/* Constructor */
draft::draft() :
  draft_B(),
  draft_DW(),
  draft_M()
{
  /* Currently there is no constructor body generated.*/
}

/* Destructor */
draft::~draft()
{
  /* Currently there is no destructor body generated.*/
}

/* Real-Time Model get method */
RT_MODEL_draft_T * draft::getRTM()
{
  return (&draft_M);
}
