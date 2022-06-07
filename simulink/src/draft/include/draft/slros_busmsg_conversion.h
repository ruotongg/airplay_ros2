#ifndef _SLROS_BUSMSG_CONVERSION_H_
#define _SLROS_BUSMSG_CONVERSION_H_

#include "rclcpp/rclcpp.hpp"
#include <ap_interfaces/msg/pos.hpp>
#include <example_interfaces/msg/int32_multi_array.hpp>
#include <example_interfaces/msg/int8.hpp>
#include <example_interfaces/msg/multi_array_dimension.hpp>
#include <example_interfaces/msg/multi_array_layout.hpp>
#include "draft_types.h"
#include "slros_msgconvert_utils.h"


void convertFromBus(ap_interfaces::msg::Pos& msgPtr, SL_Bus_ap_interfaces_Pos const* busPtr);
void convertToBus(SL_Bus_ap_interfaces_Pos* busPtr, const ap_interfaces::msg::Pos& msgPtr);

void convertFromBus(example_interfaces::msg::Int32MultiArray& msgPtr, SL_Bus_example_interfaces_Int32MultiArray const* busPtr);
void convertToBus(SL_Bus_example_interfaces_Int32MultiArray* busPtr, const example_interfaces::msg::Int32MultiArray& msgPtr);

void convertFromBus(example_interfaces::msg::Int8& msgPtr, SL_Bus_example_interfaces_Int8 const* busPtr);
void convertToBus(SL_Bus_example_interfaces_Int8* busPtr, const example_interfaces::msg::Int8& msgPtr);

void convertFromBus(example_interfaces::msg::MultiArrayDimension& msgPtr, SL_Bus_example_interfaces_MultiArrayDimension const* busPtr);
void convertToBus(SL_Bus_example_interfaces_MultiArrayDimension* busPtr, const example_interfaces::msg::MultiArrayDimension& msgPtr);

void convertFromBus(example_interfaces::msg::MultiArrayLayout& msgPtr, SL_Bus_example_interfaces_MultiArrayLayout const* busPtr);
void convertToBus(SL_Bus_example_interfaces_MultiArrayLayout* busPtr, const example_interfaces::msg::MultiArrayLayout& msgPtr);


#endif
