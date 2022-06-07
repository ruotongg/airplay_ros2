// Copyright 2020-2021 The MathWorks, Inc.
// Common copy functions for ap_interfaces/Pos
#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable : 4100)
#pragma warning(disable : 4265)
#pragma warning(disable : 4456)
#pragma warning(disable : 4458)
#pragma warning(disable : 4946)
#pragma warning(disable : 4244)
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
#include "ap_interfaces/msg/pos.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class AP_INTERFACES_EXPORT ap_interfaces_msg_Pos_common : public MATLABROS2MsgInterface<ap_interfaces::msg::Pos> {
  public:
    virtual ~ap_interfaces_msg_Pos_common(){}
    virtual void copy_from_struct(ap_interfaces::msg::Pos* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const ap_interfaces::msg::Pos* msg, MultiLibLoader loader, size_t size = 1);
};
  void ap_interfaces_msg_Pos_common::copy_from_struct(ap_interfaces::msg::Pos* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //total
        const matlab::data::TypedArray<int8_t> total_arr = arr["total"];
        msg->total = total_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'total' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'total' is wrong type; expected a int8.");
    }
    try {
        //timestamp
        const matlab::data::TypedArray<int64_t> timestamp_arr = arr["timestamp"];
        msg->timestamp = timestamp_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'timestamp' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'timestamp' is wrong type; expected a int64.");
    }
    try {
        //x
        const matlab::data::TypedArray<int16_t> x_arr = arr["x"];
        size_t nelem = x_arr.getNumberOfElements();
        	msg->x.resize(nelem);
        	std::copy(x_arr.begin(), x_arr.begin()+nelem, msg->x.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'x' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'x' is wrong type; expected a int16.");
    }
    try {
        //y
        const matlab::data::TypedArray<int16_t> y_arr = arr["y"];
        size_t nelem = y_arr.getNumberOfElements();
        	msg->y.resize(nelem);
        	std::copy(y_arr.begin(), y_arr.begin()+nelem, msg->y.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'y' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'y' is wrong type; expected a int16.");
    }
    try {
        //player_id
        const matlab::data::TypedArray<int8_t> player_id_arr = arr["player_id"];
        size_t nelem = player_id_arr.getNumberOfElements();
        	msg->player_id.resize(nelem);
        	std::copy(player_id_arr.begin(), player_id_arr.begin()+nelem, msg->player_id.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'player_id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'player_id' is wrong type; expected a int8.");
    }
    try {
        //tag_id
        const matlab::data::CellArray tag_id_cellarr = arr["tag_id"];
        size_t nelem = tag_id_cellarr.getNumberOfElements();
        for (size_t idx=0; idx < nelem; ++idx){
        	const matlab::data::CharArray tag_id_arr = tag_id_cellarr[idx];
        	msg->tag_id.push_back(tag_id_arr.toAscii());
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'tag_id' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'tag_id' is wrong type; expected a string.");
    }
    try {
        //size
        const matlab::data::TypedArray<int8_t> size_arr = arr["size"];
        size_t nelem = size_arr.getNumberOfElements();
        	msg->size.resize(nelem);
        	std::copy(size_arr.begin(), size_arr.begin()+nelem, msg->size.begin());
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'size' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'size' is wrong type; expected a int8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ap_interfaces_msg_Pos_common::get_arr(MDFactory_T& factory, const ap_interfaces::msg::Pos* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","total","timestamp","x","y","player_id","tag_id","size"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("ap_interfaces/Pos");
    // total
    auto currentElement_total = (msg + ctr)->total;
    outArray[ctr]["total"] = factory.createScalar(currentElement_total);
    // timestamp
    auto currentElement_timestamp = (msg + ctr)->timestamp;
    outArray[ctr]["timestamp"] = factory.createScalar(currentElement_timestamp);
    // x
    auto currentElement_x = (msg + ctr)->x;
    outArray[ctr]["x"] = factory.createArray<ap_interfaces::msg::Pos::_x_type::const_iterator, int16_t>({currentElement_x.size(), 1}, currentElement_x.begin(), currentElement_x.end());
    // y
    auto currentElement_y = (msg + ctr)->y;
    outArray[ctr]["y"] = factory.createArray<ap_interfaces::msg::Pos::_y_type::const_iterator, int16_t>({currentElement_y.size(), 1}, currentElement_y.begin(), currentElement_y.end());
    // player_id
    auto currentElement_player_id = (msg + ctr)->player_id;
    outArray[ctr]["player_id"] = factory.createArray<ap_interfaces::msg::Pos::_player_id_type::const_iterator, int8_t>({currentElement_player_id.size(), 1}, currentElement_player_id.begin(), currentElement_player_id.end());
    // tag_id
    auto currentElement_tag_id = (msg + ctr)->tag_id;
    auto tag_idoutCell = factory.createCellArray({currentElement_tag_id.size(),1});
    for(size_t idxin = 0; idxin < currentElement_tag_id.size(); ++ idxin){
    	tag_idoutCell[idxin] = factory.createCharArray(currentElement_tag_id[idxin]);
    }
    outArray[ctr]["tag_id"] = tag_idoutCell;
    // size
    auto currentElement_size = (msg + ctr)->size;
    outArray[ctr]["size"] = factory.createArray<ap_interfaces::msg::Pos::_size_type::const_iterator, int8_t>({currentElement_size.size(), 1}, currentElement_size.begin(), currentElement_size.end());
    }
    return std::move(outArray);
  } 
class AP_INTERFACES_EXPORT ap_interfaces_Pos_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ap_interfaces_Pos_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ap_interfaces_Pos_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<ap_interfaces::msg::Pos,ap_interfaces_msg_Pos_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ap_interfaces_Pos_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<ap_interfaces::msg::Pos,ap_interfaces_msg_Pos_common>>();
  }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ap_interfaces_msg_Pos_common, MATLABROS2MsgInterface<ap_interfaces::msg::Pos>)
CLASS_LOADER_REGISTER_CLASS(ap_interfaces_Pos_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER