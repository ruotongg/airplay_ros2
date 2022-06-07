
//
// File ros2nodeinterface.h
//
// Code generated for Simulink model 'draft'.
//
// Model version                  : 1.12
// Simulink Coder version         : 9.7 (R2022a) 13-Nov-2021
// C/C++ source code generated on : Mon Jun 06 22:06:53 2022
//
#ifndef _ROS2_MATLAB_NODEINTERFACE_
#define _ROS2_MATLAB_NODEINTERFACE_
#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable : 4265)
#pragma warning(disable : 4458)
#pragma warning(disable : 4100)
#else
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
#pragma GCC diagnostic ignored "-Wunused-local-typedefs"
#pragma GCC diagnostic ignored "-Wredundant-decls"
#pragma GCC diagnostic ignored "-Wnon-virtual-dtor"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wshadow"
#endif //_MSC_VER
#include "rclcpp/rclcpp.hpp"
class draft;
#include "rtwtypes.h"
#include "draft_types.h"
#include "slros_busmsg_conversion.h"
#include "ap_interfaces/msg/pos.hpp"
#include "example_interfaces/msg/int32_multi_array.hpp"
#include "example_interfaces/msg/int8.hpp"
namespace ros2 {
namespace matlab {
  //Semaphore using std::CV and std::mutex
  class Semaphore {
  public:
    std::mutex mMutex;
    std::condition_variable mCV;
    std::atomic_uint mCount;
    //
    Semaphore(int count = 0)
      : mCount(count) {
      }
    //
    inline void notify() {
      std::unique_lock<std::mutex> lock(mMutex);
      mCount++;
      mCV.notify_all();
    }
    //
    inline void wait() {
      std::unique_lock<std::mutex> lock(mMutex);
      while (mCount == 0) {
        mCV.wait(lock);
      }
      if (mCount)
        mCount--;
    }
  };
  //NodeInterface
  class NodeInterface {
    NodeInterface(const NodeInterface& );
    NodeInterface& operator=(const NodeInterface& );
    //
    rclcpp::Node::SharedPtr mNode;
    std::shared_ptr<draft> mModel;
    rclcpp::executors::MultiThreadedExecutor::SharedPtr mExec;
    //
    Semaphore mBaseRateSem;
    std::shared_ptr<std::thread> mBaseRateThread;
    std::shared_ptr<std::thread> mSchedulerThread;
    //
    //
    Semaphore mStopSem;
    volatile boolean_T mRunModel;
    //
    // draft/Publish
    rclcpp::Publisher<ap_interfaces::msg::Pos>::SharedPtr mPub_draft_1;
    // draft/Publish1
    rclcpp::Publisher<ap_interfaces::msg::Pos>::SharedPtr mPub_draft_8;
    // draft/Publish2
    rclcpp::Publisher<example_interfaces::msg::Int32MultiArray>::SharedPtr mPub_draft_10;
    // draft/Publish3
    rclcpp::Publisher<example_interfaces::msg::Int32MultiArray>::SharedPtr mPub_draft_14;
    // draft/Publish4
    rclcpp::Publisher<example_interfaces::msg::Int8>::SharedPtr mPub_draft_18;
    //
    // draft/Subscribe
    rclcpp::Subscription<ap_interfaces::msg::Pos>::SharedPtr mSub_draft_2;
    ap_interfaces::msg::Pos::SharedPtr mLatestMsg_Sub_draft_2;
    std::mutex mtx_Sub_draft_2;
    // draft/Subscribe1
    rclcpp::Subscription<ap_interfaces::msg::Pos>::SharedPtr mSub_draft_17;
    ap_interfaces::msg::Pos::SharedPtr mLatestMsg_Sub_draft_17;
    std::mutex mtx_Sub_draft_17;
    // draft/Subscribe2
    rclcpp::Subscription<example_interfaces::msg::Int32MultiArray>::SharedPtr mSub_draft_21;
    example_interfaces::msg::Int32MultiArray::SharedPtr mLatestMsg_Sub_draft_21;
    std::mutex mtx_Sub_draft_21;
    // draft/Subscribe3
    rclcpp::Subscription<example_interfaces::msg::Int32MultiArray>::SharedPtr mSub_draft_22;
    example_interfaces::msg::Int32MultiArray::SharedPtr mLatestMsg_Sub_draft_22;
    std::mutex mtx_Sub_draft_22;
    // draft/Subscribe4
    rclcpp::Subscription<example_interfaces::msg::Int8>::SharedPtr mSub_draft_23;
    example_interfaces::msg::Int8::SharedPtr mLatestMsg_Sub_draft_23;
    std::mutex mtx_Sub_draft_23;
    //
  public:
    NodeInterface();
    ~NodeInterface();
    //
    void initialize(int argc, char * const argv[]);
    int run();
    void stop(void);
    void terminate(void);
    //
    boolean_T getStopRequestedFlag(void);
    void schedulerThreadCallback(void);
    void baseRateTask(void);
    // draft/Publish
    void create_Pub_draft_1(const char *topicName, const rmw_qos_profile_t& qosProfile);
    void publish_Pub_draft_1(const SL_Bus_ap_interfaces_Pos* inBus);
    // draft/Publish1
    void create_Pub_draft_8(const char *topicName, const rmw_qos_profile_t& qosProfile);
    void publish_Pub_draft_8(const SL_Bus_ap_interfaces_Pos* inBus);
    // draft/Publish2
    void create_Pub_draft_10(const char *topicName, const rmw_qos_profile_t& qosProfile);
    void publish_Pub_draft_10(const SL_Bus_example_interfaces_Int32MultiArray* inBus);
    // draft/Publish3
    void create_Pub_draft_14(const char *topicName, const rmw_qos_profile_t& qosProfile);
    void publish_Pub_draft_14(const SL_Bus_example_interfaces_Int32MultiArray* inBus);
    // draft/Publish4
    void create_Pub_draft_18(const char *topicName, const rmw_qos_profile_t& qosProfile);
    void publish_Pub_draft_18(const SL_Bus_example_interfaces_Int8* inBus);
    // draft/Subscribe
    void create_Sub_draft_2(const char *topicName, const rmw_qos_profile_t& qosProfile);
    bool getLatestMessage_Sub_draft_2(SL_Bus_ap_interfaces_Pos* outBus);
    // draft/Subscribe1
    void create_Sub_draft_17(const char *topicName, const rmw_qos_profile_t& qosProfile);
    bool getLatestMessage_Sub_draft_17(SL_Bus_ap_interfaces_Pos* outBus);
    // draft/Subscribe2
    void create_Sub_draft_21(const char *topicName, const rmw_qos_profile_t& qosProfile);
    bool getLatestMessage_Sub_draft_21(SL_Bus_example_interfaces_Int32MultiArray* outBus);
    // draft/Subscribe3
    void create_Sub_draft_22(const char *topicName, const rmw_qos_profile_t& qosProfile);
    bool getLatestMessage_Sub_draft_22(SL_Bus_example_interfaces_Int32MultiArray* outBus);
    // draft/Subscribe4
    void create_Sub_draft_23(const char *topicName, const rmw_qos_profile_t& qosProfile);
    bool getLatestMessage_Sub_draft_23(SL_Bus_example_interfaces_Int8* outBus);
    //
    rclcpp::Node::SharedPtr getNode() {
      return mNode;
    }
    //
    std::shared_ptr<draft> getModel() {
      return mModel;
    }
  }; //class NodeInterface
  //
  std::shared_ptr<ros2::matlab::NodeInterface> getNodeInterface();
  // Helper for draft/Publish
  void create_Pub_draft_1(const char *topicName, const rmw_qos_profile_t& qosProfile = rmw_qos_profile_default);
  void publish_Pub_draft_1(const SL_Bus_ap_interfaces_Pos* inBus);
  // Helper for draft/Publish1
  void create_Pub_draft_8(const char *topicName, const rmw_qos_profile_t& qosProfile = rmw_qos_profile_default);
  void publish_Pub_draft_8(const SL_Bus_ap_interfaces_Pos* inBus);
  // Helper for draft/Publish2
  void create_Pub_draft_10(const char *topicName, const rmw_qos_profile_t& qosProfile = rmw_qos_profile_default);
  void publish_Pub_draft_10(const SL_Bus_example_interfaces_Int32MultiArray* inBus);
  // Helper for draft/Publish3
  void create_Pub_draft_14(const char *topicName, const rmw_qos_profile_t& qosProfile = rmw_qos_profile_default);
  void publish_Pub_draft_14(const SL_Bus_example_interfaces_Int32MultiArray* inBus);
  // Helper for draft/Publish4
  void create_Pub_draft_18(const char *topicName, const rmw_qos_profile_t& qosProfile = rmw_qos_profile_default);
  void publish_Pub_draft_18(const SL_Bus_example_interfaces_Int8* inBus);
  // Helper for draft/Subscribe
  void create_Sub_draft_2(const char *topicName, const rmw_qos_profile_t& qosProfile = rmw_qos_profile_default);
  bool getLatestMessage_Sub_draft_2(SL_Bus_ap_interfaces_Pos* outBus);
  // Helper for draft/Subscribe1
  void create_Sub_draft_17(const char *topicName, const rmw_qos_profile_t& qosProfile = rmw_qos_profile_default);
  bool getLatestMessage_Sub_draft_17(SL_Bus_ap_interfaces_Pos* outBus);
  // Helper for draft/Subscribe2
  void create_Sub_draft_21(const char *topicName, const rmw_qos_profile_t& qosProfile = rmw_qos_profile_default);
  bool getLatestMessage_Sub_draft_21(SL_Bus_example_interfaces_Int32MultiArray* outBus);
  // Helper for draft/Subscribe3
  void create_Sub_draft_22(const char *topicName, const rmw_qos_profile_t& qosProfile = rmw_qos_profile_default);
  bool getLatestMessage_Sub_draft_22(SL_Bus_example_interfaces_Int32MultiArray* outBus);
  // Helper for draft/Subscribe4
  void create_Sub_draft_23(const char *topicName, const rmw_qos_profile_t& qosProfile = rmw_qos_profile_default);
  bool getLatestMessage_Sub_draft_23(SL_Bus_example_interfaces_Int8* outBus);
  // Get QoS Settings from RMW
  inline rclcpp::QoS getQOSSettingsFromRMW(const rmw_qos_profile_t& qosProfile) {
      rclcpp::QoS qos(rclcpp::QoSInitialization::from_rmw(qosProfile));
      if (RMW_QOS_POLICY_DURABILITY_TRANSIENT_LOCAL == qosProfile.durability) {
          qos.transient_local();
      } else {
          qos.durability_volatile();
      }
      if (RMW_QOS_POLICY_RELIABILITY_RELIABLE == qosProfile.reliability) {
          qos.reliable();
      } else {
          qos.best_effort();
      }
      return qos;
  }
}//namespace matlab
}//namespace ros2
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
#endif //_ROS2_MATLAB_ROS2CGEN_MULTIRATE_
