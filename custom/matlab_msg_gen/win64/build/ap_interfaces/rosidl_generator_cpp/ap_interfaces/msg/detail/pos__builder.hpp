// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ap_interfaces:msg\Pos.idl
// generated code does not contain a copyright notice

#ifndef AP_INTERFACES__MSG__DETAIL__POS__BUILDER_HPP_
#define AP_INTERFACES__MSG__DETAIL__POS__BUILDER_HPP_

#include "ap_interfaces/msg/detail/pos__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ap_interfaces
{

namespace msg
{

namespace builder
{

class Init_Pos_size
{
public:
  explicit Init_Pos_size(::ap_interfaces::msg::Pos & msg)
  : msg_(msg)
  {}
  ::ap_interfaces::msg::Pos size(::ap_interfaces::msg::Pos::_size_type arg)
  {
    msg_.size = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ap_interfaces::msg::Pos msg_;
};

class Init_Pos_tag_id
{
public:
  explicit Init_Pos_tag_id(::ap_interfaces::msg::Pos & msg)
  : msg_(msg)
  {}
  Init_Pos_size tag_id(::ap_interfaces::msg::Pos::_tag_id_type arg)
  {
    msg_.tag_id = std::move(arg);
    return Init_Pos_size(msg_);
  }

private:
  ::ap_interfaces::msg::Pos msg_;
};

class Init_Pos_player_id
{
public:
  explicit Init_Pos_player_id(::ap_interfaces::msg::Pos & msg)
  : msg_(msg)
  {}
  Init_Pos_tag_id player_id(::ap_interfaces::msg::Pos::_player_id_type arg)
  {
    msg_.player_id = std::move(arg);
    return Init_Pos_tag_id(msg_);
  }

private:
  ::ap_interfaces::msg::Pos msg_;
};

class Init_Pos_y
{
public:
  explicit Init_Pos_y(::ap_interfaces::msg::Pos & msg)
  : msg_(msg)
  {}
  Init_Pos_player_id y(::ap_interfaces::msg::Pos::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Pos_player_id(msg_);
  }

private:
  ::ap_interfaces::msg::Pos msg_;
};

class Init_Pos_x
{
public:
  explicit Init_Pos_x(::ap_interfaces::msg::Pos & msg)
  : msg_(msg)
  {}
  Init_Pos_y x(::ap_interfaces::msg::Pos::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Pos_y(msg_);
  }

private:
  ::ap_interfaces::msg::Pos msg_;
};

class Init_Pos_timestamp
{
public:
  explicit Init_Pos_timestamp(::ap_interfaces::msg::Pos & msg)
  : msg_(msg)
  {}
  Init_Pos_x timestamp(::ap_interfaces::msg::Pos::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_Pos_x(msg_);
  }

private:
  ::ap_interfaces::msg::Pos msg_;
};

class Init_Pos_total
{
public:
  Init_Pos_total()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pos_timestamp total(::ap_interfaces::msg::Pos::_total_type arg)
  {
    msg_.total = std::move(arg);
    return Init_Pos_timestamp(msg_);
  }

private:
  ::ap_interfaces::msg::Pos msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ap_interfaces::msg::Pos>()
{
  return ap_interfaces::msg::builder::Init_Pos_total();
}

}  // namespace ap_interfaces

#endif  // AP_INTERFACES__MSG__DETAIL__POS__BUILDER_HPP_
