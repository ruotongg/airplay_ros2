#include "slros_busmsg_conversion.h"


// Conversions between SL_Bus_ap_interfaces_Pos and ap_interfaces::msg::Pos

void convertFromBus(ap_interfaces::msg::Pos& msgPtr, SL_Bus_ap_interfaces_Pos const* busPtr)
{
  const std::string rosMessageType("ap_interfaces/Pos");

  convertFromBusVariablePrimitiveArray(msgPtr.player_id, busPtr->player_id, busPtr->player_id_SL_Info);
  convertFromBusVariablePrimitiveArray(msgPtr.size, busPtr->size, busPtr->size_SL_Info);
  convertFromBusVariableStringArray(msgPtr.tag_id, busPtr->tag_id, busPtr->tag_id_SL_Info);
  msgPtr.timestamp = (int64_t) busPtr->timestamp;
  msgPtr.total =  busPtr->total;
  convertFromBusVariablePrimitiveArray(msgPtr.x, busPtr->x, busPtr->x_SL_Info);
  convertFromBusVariablePrimitiveArray(msgPtr.y, busPtr->y, busPtr->y_SL_Info);
}

void convertToBus(SL_Bus_ap_interfaces_Pos* busPtr, const ap_interfaces::msg::Pos& msgPtr)
{
  const std::string rosMessageType("ap_interfaces/Pos");

  convertToBusVariablePrimitiveArray(busPtr->player_id, busPtr->player_id_SL_Info, msgPtr.player_id, slros::EnabledWarning(rosMessageType, "player_id"));
  convertToBusVariablePrimitiveArray(busPtr->size, busPtr->size_SL_Info, msgPtr.size, slros::EnabledWarning(rosMessageType, "size"));
  convertToBusVariableStringArray(busPtr->tag_id, busPtr->tag_id_SL_Info, msgPtr.tag_id, slros::EnabledWarning(rosMessageType, "tag_id"));
  busPtr->timestamp = (real_T) msgPtr.timestamp;
  busPtr->total =  msgPtr.total;
  convertToBusVariablePrimitiveArray(busPtr->x, busPtr->x_SL_Info, msgPtr.x, slros::EnabledWarning(rosMessageType, "x"));
  convertToBusVariablePrimitiveArray(busPtr->y, busPtr->y_SL_Info, msgPtr.y, slros::EnabledWarning(rosMessageType, "y"));
}


// Conversions between SL_Bus_example_interfaces_Int32MultiArray and example_interfaces::msg::Int32MultiArray

void convertFromBus(example_interfaces::msg::Int32MultiArray& msgPtr, SL_Bus_example_interfaces_Int32MultiArray const* busPtr)
{
  const std::string rosMessageType("example_interfaces/Int32MultiArray");

  convertFromBusVariablePrimitiveArray(msgPtr.data, busPtr->data, busPtr->data_SL_Info);
  convertFromBus(msgPtr.layout, &busPtr->layout);
}

void convertToBus(SL_Bus_example_interfaces_Int32MultiArray* busPtr, const example_interfaces::msg::Int32MultiArray& msgPtr)
{
  const std::string rosMessageType("example_interfaces/Int32MultiArray");

  convertToBusVariablePrimitiveArray(busPtr->data, busPtr->data_SL_Info, msgPtr.data, slros::EnabledWarning(rosMessageType, "data"));
  convertToBus(&busPtr->layout, msgPtr.layout);
}


// Conversions between SL_Bus_example_interfaces_Int8 and example_interfaces::msg::Int8

void convertFromBus(example_interfaces::msg::Int8& msgPtr, SL_Bus_example_interfaces_Int8 const* busPtr)
{
  const std::string rosMessageType("example_interfaces/Int8");

  msgPtr.data =  busPtr->data;
}

void convertToBus(SL_Bus_example_interfaces_Int8* busPtr, const example_interfaces::msg::Int8& msgPtr)
{
  const std::string rosMessageType("example_interfaces/Int8");

  busPtr->data =  msgPtr.data;
}


// Conversions between SL_Bus_example_interfaces_MultiArrayDimension and example_interfaces::msg::MultiArrayDimension

void convertFromBus(example_interfaces::msg::MultiArrayDimension& msgPtr, SL_Bus_example_interfaces_MultiArrayDimension const* busPtr)
{
  const std::string rosMessageType("example_interfaces/MultiArrayDimension");

  convertFromBusVariablePrimitiveArray(msgPtr.label, busPtr->label, busPtr->label_SL_Info);
  msgPtr.size =  busPtr->size;
  msgPtr.stride =  busPtr->stride;
}

void convertToBus(SL_Bus_example_interfaces_MultiArrayDimension* busPtr, const example_interfaces::msg::MultiArrayDimension& msgPtr)
{
  const std::string rosMessageType("example_interfaces/MultiArrayDimension");

  convertToBusVariablePrimitiveArray(busPtr->label, busPtr->label_SL_Info, msgPtr.label, slros::EnabledWarning(rosMessageType, "label"));
  busPtr->size =  msgPtr.size;
  busPtr->stride =  msgPtr.stride;
}


// Conversions between SL_Bus_example_interfaces_MultiArrayLayout and example_interfaces::msg::MultiArrayLayout

void convertFromBus(example_interfaces::msg::MultiArrayLayout& msgPtr, SL_Bus_example_interfaces_MultiArrayLayout const* busPtr)
{
  const std::string rosMessageType("example_interfaces/MultiArrayLayout");

  msgPtr.data_offset =  busPtr->data_offset;
  convertFromBusVariableNestedArray(msgPtr.dim, busPtr->dim, busPtr->dim_SL_Info);
}

void convertToBus(SL_Bus_example_interfaces_MultiArrayLayout* busPtr, const example_interfaces::msg::MultiArrayLayout& msgPtr)
{
  const std::string rosMessageType("example_interfaces/MultiArrayLayout");

  busPtr->data_offset =  msgPtr.data_offset;
  convertToBusVariableNestedArray(busPtr->dim, busPtr->dim_SL_Info, msgPtr.dim, slros::EnabledWarning(rosMessageType, "dim"));
}

