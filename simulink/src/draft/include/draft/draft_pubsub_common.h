
//
// Code generated for Simulink model 'draft'.
//
// Model version                  : 1.12
// Simulink Coder version         : 9.7 (R2022a) 13-Nov-2021
// C/C++ source code generated on : Mon Jun 06 22:06:55 2022
//
#ifndef _SLROS2_COMMON_H_
#define _SLROS2_COMMON_H_
#include "draft_types.h"
#ifndef SET_QOS_VALUES
#define SET_QOS_VALUES(qosStruct, hist, dep, dur, rel)  \
    {                                                   \
        qosStruct.history = hist;                       \
        qosStruct.depth = dep;                          \
        qosStruct.durability = dur;                     \
        qosStruct.reliability = rel;                    \
    }
#endif
namespace ros2 {
    namespace matlab {
        // draft/Publish
        extern void create_Pub_draft_1(const char *topicName, const rmw_qos_profile_t& qosProfile);
        extern void publish_Pub_draft_1(const SL_Bus_ap_interfaces_Pos* inBus);
        // draft/Publish1
        extern void create_Pub_draft_8(const char *topicName, const rmw_qos_profile_t& qosProfile);
        extern void publish_Pub_draft_8(const SL_Bus_ap_interfaces_Pos* inBus);
        // draft/Publish2
        extern void create_Pub_draft_10(const char *topicName, const rmw_qos_profile_t& qosProfile);
        extern void publish_Pub_draft_10(const SL_Bus_example_interfaces_Int32MultiArray* inBus);
        // draft/Publish3
        extern void create_Pub_draft_14(const char *topicName, const rmw_qos_profile_t& qosProfile);
        extern void publish_Pub_draft_14(const SL_Bus_example_interfaces_Int32MultiArray* inBus);
        // draft/Publish4
        extern void create_Pub_draft_18(const char *topicName, const rmw_qos_profile_t& qosProfile);
        extern void publish_Pub_draft_18(const SL_Bus_example_interfaces_Int8* inBus);
        // draft/Subscribe
        extern void create_Sub_draft_2(const char *topicName, const rmw_qos_profile_t& qosProfile);
        extern bool getLatestMessage_Sub_draft_2(SL_Bus_ap_interfaces_Pos* outBus);
        // draft/Subscribe1
        extern void create_Sub_draft_17(const char *topicName, const rmw_qos_profile_t& qosProfile);
        extern bool getLatestMessage_Sub_draft_17(SL_Bus_ap_interfaces_Pos* outBus);
        // draft/Subscribe2
        extern void create_Sub_draft_21(const char *topicName, const rmw_qos_profile_t& qosProfile);
        extern bool getLatestMessage_Sub_draft_21(SL_Bus_example_interfaces_Int32MultiArray* outBus);
        // draft/Subscribe3
        extern void create_Sub_draft_22(const char *topicName, const rmw_qos_profile_t& qosProfile);
        extern bool getLatestMessage_Sub_draft_22(SL_Bus_example_interfaces_Int32MultiArray* outBus);
        // draft/Subscribe4
        extern void create_Sub_draft_23(const char *topicName, const rmw_qos_profile_t& qosProfile);
        extern bool getLatestMessage_Sub_draft_23(SL_Bus_example_interfaces_Int8* outBus);
    }
}
#endif // _SLROS2_COMMON_H_
