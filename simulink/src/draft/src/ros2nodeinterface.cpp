
//
// File ros2nodeinterface.cpp
//
// Code generated for Simulink model 'draft'.
//
// Model version                  : 1.12
// Simulink Coder version         : 9.7 (R2022a) 13-Nov-2021
// C/C++ source code generated on : Mon Jun 06 22:06:54 2022
//
#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable : 4244)
#pragma warning(disable : 4265)
#pragma warning(disable : 4458)
#pragma warning(disable : 4100)
#else
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
#pragma GCC diagnostic ignored "-Wunused-local-typedefs"
#pragma GCC diagnostic ignored "-Wredundant-decls"
#pragma GCC diagnostic ignored "-Wnon-virtual-dtor"
#pragma GCC diagnostic ignored "-Wdelete-non-virtual-dtor"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wshadow"
#endif //_MSC_VER
#include "rclcpp/rclcpp.hpp"
#include "draft.h"
#include "ros2nodeinterface.h"
#include <thread>
#include <chrono>
#include <utility>
const std::string SLROSNodeName("draft");
namespace ros2 {
namespace matlab {
NodeInterface::NodeInterface()
    : mNode()
    , mModel()
    , mExec()
    , mBaseRateSem()
    , mBaseRateThread()
    , mSchedulerThread()
    , mStopSem()
    , mRunModel(true){
  }
NodeInterface::~NodeInterface() {
    terminate();
  }
void NodeInterface::initialize(int argc, char * const argv[]) {
    try {
        //initialize ros2
        std::vector<char *> args(argv, argv + argc);
        rclcpp::init(static_cast<int>(args.size()), args.data());
        //create the Node specified in Model
        std::string NodeName("draft");
        mNode = std::make_shared<rclcpp::Node>(NodeName);
        mExec = std::make_shared<rclcpp::executors::MultiThreadedExecutor>();
        mExec->add_node(mNode);
        //initialize the model which will initialize the publishers and subscribers
        mModel = std::make_shared<draft>(
        );
		rtmSetErrorStatus(mModel->getRTM(), (NULL));
        mModel->initialize();
        //create the threads for the rates in the Model
        mBaseRateThread = std::make_shared<std::thread>(&NodeInterface::baseRateTask, this);
		mSchedulerThread = std::make_shared<std::thread>(&NodeInterface::schedulerThreadCallback, this);
    }
    catch (std::exception& ex) {
        std::cout << ex.what() << std::endl;
        throw ex;
    }
    catch (...) {
        std::cout << "Unknown exception" << std::endl;
        throw;
    }
}
int NodeInterface::run() {
  if (mExec) {
    mExec->spin();
  }
  mRunModel = false;
  return 0;
}
boolean_T NodeInterface::getStopRequestedFlag(void) {
    #ifndef rtmGetStopRequested
    return (!(rtmGetErrorStatus(mModel->getRTM())
        == (NULL)));
    #else
    return (!(rtmGetErrorStatus(mModel->getRTM())
        == (NULL)) || rtmGetStopRequested(mModel->getRTM()));
    #endif
}
void NodeInterface::stop(void) {
  if (mExec.get()) {
    mExec->cancel();
    if (mNode) {
      mExec->remove_node(mNode);
    }
    while (mExec.use_count() > 1);
  }
}
void NodeInterface::terminate(void) {
    if (mBaseRateThread.get()) {
        mRunModel = false;
        mBaseRateSem.notify(); // break out wait
        mBaseRateThread->join();
        if (mSchedulerThread.get()) {
            mSchedulerThread->join();
            mSchedulerThread.reset();
        }
        mBaseRateThread.reset();
        if (mModel.get()) {
            mModel->terminate();
        }
        // Release publisher draft/Publish
        mPub_draft_1.reset();
        // Release publisher draft/Publish1
        mPub_draft_8.reset();
        // Release publisher draft/Publish2
        mPub_draft_10.reset();
        // Release publisher draft/Publish3
        mPub_draft_14.reset();
        // Release publisher draft/Publish4
        mPub_draft_18.reset();
        // Release subscriber draft/Subscribe
        mSub_draft_2.reset();
        // Release subscriber draft/Subscribe1
        mSub_draft_17.reset();
        // Release subscriber draft/Subscribe2
        mSub_draft_21.reset();
        // Release subscriber draft/Subscribe3
        mSub_draft_22.reset();
        // Release subscriber draft/Subscribe4
        mSub_draft_23.reset();
        mModel.reset();
        mExec.reset();
        mNode.reset();
        rclcpp::shutdown();
    }
}
//
void NodeInterface::schedulerThreadCallback(void)
{
  while (mRunModel) {
        std::this_thread::sleep_for(std::chrono::nanoseconds(16666667));
        mBaseRateSem.notify();
    }
}
//Model specific
void NodeInterface::baseRateTask(void) {
  mRunModel = (rtmGetErrorStatus(mModel->getRTM()) ==
              (NULL));
  while (mRunModel) {
    mBaseRateSem.wait();
    if (!mRunModel) break;
    mModel->step();
    mRunModel &= !NodeInterface::getStopRequestedFlag(); //If RunModel and not stop requested
  }
  NodeInterface::stop();
}
// draft/Publish
void NodeInterface::create_Pub_draft_1(const char *topicName, const rmw_qos_profile_t& qosProfile){
  mPub_draft_1 = mNode->create_publisher<ap_interfaces::msg::Pos>(topicName, ros2::matlab::getQOSSettingsFromRMW(qosProfile));
}
void NodeInterface::publish_Pub_draft_1(const SL_Bus_ap_interfaces_Pos* inBus) {
  auto msg = std::make_unique<ap_interfaces::msg::Pos>();
  convertFromBus(*msg, inBus);
  mPub_draft_1->publish(std::move(msg));
}
// draft/Publish1
void NodeInterface::create_Pub_draft_8(const char *topicName, const rmw_qos_profile_t& qosProfile){
  mPub_draft_8 = mNode->create_publisher<ap_interfaces::msg::Pos>(topicName, ros2::matlab::getQOSSettingsFromRMW(qosProfile));
}
void NodeInterface::publish_Pub_draft_8(const SL_Bus_ap_interfaces_Pos* inBus) {
  auto msg = std::make_unique<ap_interfaces::msg::Pos>();
  convertFromBus(*msg, inBus);
  mPub_draft_8->publish(std::move(msg));
}
// draft/Publish2
void NodeInterface::create_Pub_draft_10(const char *topicName, const rmw_qos_profile_t& qosProfile){
  mPub_draft_10 = mNode->create_publisher<example_interfaces::msg::Int32MultiArray>(topicName, ros2::matlab::getQOSSettingsFromRMW(qosProfile));
}
void NodeInterface::publish_Pub_draft_10(const SL_Bus_example_interfaces_Int32MultiArray* inBus) {
  auto msg = std::make_unique<example_interfaces::msg::Int32MultiArray>();
  convertFromBus(*msg, inBus);
  mPub_draft_10->publish(std::move(msg));
}
// draft/Publish3
void NodeInterface::create_Pub_draft_14(const char *topicName, const rmw_qos_profile_t& qosProfile){
  mPub_draft_14 = mNode->create_publisher<example_interfaces::msg::Int32MultiArray>(topicName, ros2::matlab::getQOSSettingsFromRMW(qosProfile));
}
void NodeInterface::publish_Pub_draft_14(const SL_Bus_example_interfaces_Int32MultiArray* inBus) {
  auto msg = std::make_unique<example_interfaces::msg::Int32MultiArray>();
  convertFromBus(*msg, inBus);
  mPub_draft_14->publish(std::move(msg));
}
// draft/Publish4
void NodeInterface::create_Pub_draft_18(const char *topicName, const rmw_qos_profile_t& qosProfile){
  mPub_draft_18 = mNode->create_publisher<example_interfaces::msg::Int8>(topicName, ros2::matlab::getQOSSettingsFromRMW(qosProfile));
}
void NodeInterface::publish_Pub_draft_18(const SL_Bus_example_interfaces_Int8* inBus) {
  auto msg = std::make_unique<example_interfaces::msg::Int8>();
  convertFromBus(*msg, inBus);
  mPub_draft_18->publish(std::move(msg));
}
// draft/Subscribe
void NodeInterface::create_Sub_draft_2(const char *topicName, const rmw_qos_profile_t& qosProfile){
    auto callback = [this](ap_interfaces::msg::Pos::SharedPtr msg) {
        std::lock_guard<std::mutex> lockMsg(mtx_Sub_draft_2);
        mLatestMsg_Sub_draft_2 = msg;
    };
    mSub_draft_2 = mNode->create_subscription<ap_interfaces::msg::Pos>(topicName, ros2::matlab::getQOSSettingsFromRMW(qosProfile), callback);
}
bool NodeInterface::getLatestMessage_Sub_draft_2(SL_Bus_ap_interfaces_Pos* outBus) {
    if (mLatestMsg_Sub_draft_2.get()) {
        std::lock_guard<std::mutex> lockMsg(mtx_Sub_draft_2);
        convertToBus(outBus, *mLatestMsg_Sub_draft_2);
        mLatestMsg_Sub_draft_2.reset();
        return true;
    }
    return false;
}
// draft/Subscribe1
void NodeInterface::create_Sub_draft_17(const char *topicName, const rmw_qos_profile_t& qosProfile){
    auto callback = [this](ap_interfaces::msg::Pos::SharedPtr msg) {
        std::lock_guard<std::mutex> lockMsg(mtx_Sub_draft_17);
        mLatestMsg_Sub_draft_17 = msg;
    };
    mSub_draft_17 = mNode->create_subscription<ap_interfaces::msg::Pos>(topicName, ros2::matlab::getQOSSettingsFromRMW(qosProfile), callback);
}
bool NodeInterface::getLatestMessage_Sub_draft_17(SL_Bus_ap_interfaces_Pos* outBus) {
    if (mLatestMsg_Sub_draft_17.get()) {
        std::lock_guard<std::mutex> lockMsg(mtx_Sub_draft_17);
        convertToBus(outBus, *mLatestMsg_Sub_draft_17);
        mLatestMsg_Sub_draft_17.reset();
        return true;
    }
    return false;
}
// draft/Subscribe2
void NodeInterface::create_Sub_draft_21(const char *topicName, const rmw_qos_profile_t& qosProfile){
    auto callback = [this](example_interfaces::msg::Int32MultiArray::SharedPtr msg) {
        std::lock_guard<std::mutex> lockMsg(mtx_Sub_draft_21);
        mLatestMsg_Sub_draft_21 = msg;
    };
    mSub_draft_21 = mNode->create_subscription<example_interfaces::msg::Int32MultiArray>(topicName, ros2::matlab::getQOSSettingsFromRMW(qosProfile), callback);
}
bool NodeInterface::getLatestMessage_Sub_draft_21(SL_Bus_example_interfaces_Int32MultiArray* outBus) {
    if (mLatestMsg_Sub_draft_21.get()) {
        std::lock_guard<std::mutex> lockMsg(mtx_Sub_draft_21);
        convertToBus(outBus, *mLatestMsg_Sub_draft_21);
        mLatestMsg_Sub_draft_21.reset();
        return true;
    }
    return false;
}
// draft/Subscribe3
void NodeInterface::create_Sub_draft_22(const char *topicName, const rmw_qos_profile_t& qosProfile){
    auto callback = [this](example_interfaces::msg::Int32MultiArray::SharedPtr msg) {
        std::lock_guard<std::mutex> lockMsg(mtx_Sub_draft_22);
        mLatestMsg_Sub_draft_22 = msg;
    };
    mSub_draft_22 = mNode->create_subscription<example_interfaces::msg::Int32MultiArray>(topicName, ros2::matlab::getQOSSettingsFromRMW(qosProfile), callback);
}
bool NodeInterface::getLatestMessage_Sub_draft_22(SL_Bus_example_interfaces_Int32MultiArray* outBus) {
    if (mLatestMsg_Sub_draft_22.get()) {
        std::lock_guard<std::mutex> lockMsg(mtx_Sub_draft_22);
        convertToBus(outBus, *mLatestMsg_Sub_draft_22);
        mLatestMsg_Sub_draft_22.reset();
        return true;
    }
    return false;
}
// draft/Subscribe4
void NodeInterface::create_Sub_draft_23(const char *topicName, const rmw_qos_profile_t& qosProfile){
    auto callback = [this](example_interfaces::msg::Int8::SharedPtr msg) {
        std::lock_guard<std::mutex> lockMsg(mtx_Sub_draft_23);
        mLatestMsg_Sub_draft_23 = msg;
    };
    mSub_draft_23 = mNode->create_subscription<example_interfaces::msg::Int8>(topicName, ros2::matlab::getQOSSettingsFromRMW(qosProfile), callback);
}
bool NodeInterface::getLatestMessage_Sub_draft_23(SL_Bus_example_interfaces_Int8* outBus) {
    if (mLatestMsg_Sub_draft_23.get()) {
        std::lock_guard<std::mutex> lockMsg(mtx_Sub_draft_23);
        convertToBus(outBus, *mLatestMsg_Sub_draft_23);
        mLatestMsg_Sub_draft_23.reset();
        return true;
    }
    return false;
}
// Helper for draft/Publish
void create_Pub_draft_1(const char *topicName, const rmw_qos_profile_t& qosProfile){
  ros2::matlab::getNodeInterface()->create_Pub_draft_1(topicName, qosProfile);
}
void publish_Pub_draft_1(const SL_Bus_ap_interfaces_Pos* inBus) {
  ros2::matlab::getNodeInterface()->publish_Pub_draft_1(inBus);
}
// Helper for draft/Publish1
void create_Pub_draft_8(const char *topicName, const rmw_qos_profile_t& qosProfile){
  ros2::matlab::getNodeInterface()->create_Pub_draft_8(topicName, qosProfile);
}
void publish_Pub_draft_8(const SL_Bus_ap_interfaces_Pos* inBus) {
  ros2::matlab::getNodeInterface()->publish_Pub_draft_8(inBus);
}
// Helper for draft/Publish2
void create_Pub_draft_10(const char *topicName, const rmw_qos_profile_t& qosProfile){
  ros2::matlab::getNodeInterface()->create_Pub_draft_10(topicName, qosProfile);
}
void publish_Pub_draft_10(const SL_Bus_example_interfaces_Int32MultiArray* inBus) {
  ros2::matlab::getNodeInterface()->publish_Pub_draft_10(inBus);
}
// Helper for draft/Publish3
void create_Pub_draft_14(const char *topicName, const rmw_qos_profile_t& qosProfile){
  ros2::matlab::getNodeInterface()->create_Pub_draft_14(topicName, qosProfile);
}
void publish_Pub_draft_14(const SL_Bus_example_interfaces_Int32MultiArray* inBus) {
  ros2::matlab::getNodeInterface()->publish_Pub_draft_14(inBus);
}
// Helper for draft/Publish4
void create_Pub_draft_18(const char *topicName, const rmw_qos_profile_t& qosProfile){
  ros2::matlab::getNodeInterface()->create_Pub_draft_18(topicName, qosProfile);
}
void publish_Pub_draft_18(const SL_Bus_example_interfaces_Int8* inBus) {
  ros2::matlab::getNodeInterface()->publish_Pub_draft_18(inBus);
}
// Helper for draft/Subscribe
void create_Sub_draft_2(const char *topicName, const rmw_qos_profile_t& qosProfile){
  ros2::matlab::getNodeInterface()->create_Sub_draft_2(topicName, qosProfile);
}
bool getLatestMessage_Sub_draft_2(SL_Bus_ap_interfaces_Pos* outBus) {
  return ros2::matlab::getNodeInterface()->getLatestMessage_Sub_draft_2(outBus);
}
// Helper for draft/Subscribe1
void create_Sub_draft_17(const char *topicName, const rmw_qos_profile_t& qosProfile){
  ros2::matlab::getNodeInterface()->create_Sub_draft_17(topicName, qosProfile);
}
bool getLatestMessage_Sub_draft_17(SL_Bus_ap_interfaces_Pos* outBus) {
  return ros2::matlab::getNodeInterface()->getLatestMessage_Sub_draft_17(outBus);
}
// Helper for draft/Subscribe2
void create_Sub_draft_21(const char *topicName, const rmw_qos_profile_t& qosProfile){
  ros2::matlab::getNodeInterface()->create_Sub_draft_21(topicName, qosProfile);
}
bool getLatestMessage_Sub_draft_21(SL_Bus_example_interfaces_Int32MultiArray* outBus) {
  return ros2::matlab::getNodeInterface()->getLatestMessage_Sub_draft_21(outBus);
}
// Helper for draft/Subscribe3
void create_Sub_draft_22(const char *topicName, const rmw_qos_profile_t& qosProfile){
  ros2::matlab::getNodeInterface()->create_Sub_draft_22(topicName, qosProfile);
}
bool getLatestMessage_Sub_draft_22(SL_Bus_example_interfaces_Int32MultiArray* outBus) {
  return ros2::matlab::getNodeInterface()->getLatestMessage_Sub_draft_22(outBus);
}
// Helper for draft/Subscribe4
void create_Sub_draft_23(const char *topicName, const rmw_qos_profile_t& qosProfile){
  ros2::matlab::getNodeInterface()->create_Sub_draft_23(topicName, qosProfile);
}
bool getLatestMessage_Sub_draft_23(SL_Bus_example_interfaces_Int8* outBus) {
  return ros2::matlab::getNodeInterface()->getLatestMessage_Sub_draft_23(outBus);
}
}//namespace matlab
}//namespace ros2
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
