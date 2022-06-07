/*
 * draft_types.h
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

#ifndef RTW_HEADER_draft_types_h_
#define RTW_HEADER_draft_types_h_
#include "rtwtypes.h"

/* Model Code Variants */
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_

struct SL_Bus_ROSVariableLengthArrayInfo
{
  uint32_T CurrentLength;
  uint32_T ReceivedLength;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_std_msgs_String_
#define DEFINED_TYPEDEF_FOR_SL_Bus_std_msgs_String_

struct SL_Bus_std_msgs_String
{
  uint8_T data[128];
  SL_Bus_ROSVariableLengthArrayInfo data_SL_Info;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ap_interfaces_Pos_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ap_interfaces_Pos_

struct SL_Bus_ap_interfaces_Pos
{
  int8_T total;
  real_T timestamp;
  int16_T x[128];
  SL_Bus_ROSVariableLengthArrayInfo x_SL_Info;
  int16_T y[128];
  SL_Bus_ROSVariableLengthArrayInfo y_SL_Info;
  int8_T player_id[128];
  SL_Bus_ROSVariableLengthArrayInfo player_id_SL_Info;
  SL_Bus_std_msgs_String tag_id[16];
  SL_Bus_ROSVariableLengthArrayInfo tag_id_SL_Info;
  int8_T size[128];
  SL_Bus_ROSVariableLengthArrayInfo size_SL_Info;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_example_interfaces_MultiArrayDimension_
#define DEFINED_TYPEDEF_FOR_SL_Bus_example_interfaces_MultiArrayDimension_

struct SL_Bus_example_interfaces_MultiArrayDimension
{
  uint8_T label[128];
  SL_Bus_ROSVariableLengthArrayInfo label_SL_Info;
  uint32_T size;
  uint32_T stride;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_example_interfaces_MultiArrayLayout_
#define DEFINED_TYPEDEF_FOR_SL_Bus_example_interfaces_MultiArrayLayout_

struct SL_Bus_example_interfaces_MultiArrayLayout
{
  SL_Bus_example_interfaces_MultiArrayDimension dim[16];
  SL_Bus_ROSVariableLengthArrayInfo dim_SL_Info;
  uint32_T data_offset;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_example_interfaces_Int32MultiArray_
#define DEFINED_TYPEDEF_FOR_SL_Bus_example_interfaces_Int32MultiArray_

struct SL_Bus_example_interfaces_Int32MultiArray
{
  SL_Bus_example_interfaces_MultiArrayLayout layout;
  int32_T data[128];
  SL_Bus_ROSVariableLengthArrayInfo data_SL_Info;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_example_interfaces_Int8_
#define DEFINED_TYPEDEF_FOR_SL_Bus_example_interfaces_Int8_

struct SL_Bus_example_interfaces_Int8
{
  int8_T data;
};

#endif

/* Custom Type definition for MATLABSystem: '<S15>/SourceBlock' */
#include "rmw/qos_profiles.h"
#include "rmw/types.h"
#include "rmw/types.h"
#include "rmw/types.h"
#ifndef struct_ros_slros2_internal_block_Pub_T
#define struct_ros_slros2_internal_block_Pub_T

struct ros_slros2_internal_block_Pub_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                              /* struct_ros_slros2_internal_block_Pub_T */

#ifndef struct_ros_slros2_internal_block_Sub_T
#define struct_ros_slros2_internal_block_Sub_T

struct ros_slros2_internal_block_Sub_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                              /* struct_ros_slros2_internal_block_Sub_T */

/* Parameters for system: '<S11>/Enabled Subsystem' */
typedef struct P_EnabledSubsystem_draft_T_ P_EnabledSubsystem_draft_T;

/* Parameters for system: '<S13>/Enabled Subsystem' */
typedef struct P_EnabledSubsystem_draft_l_T_ P_EnabledSubsystem_draft_l_T;

/* Parameters (default storage) */
typedef struct P_draft_T_ P_draft_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_draft_T RT_MODEL_draft_T;

#endif                                 /* RTW_HEADER_draft_types_h_ */
