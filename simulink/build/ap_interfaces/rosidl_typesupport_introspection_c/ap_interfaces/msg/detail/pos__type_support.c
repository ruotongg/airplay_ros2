// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ap_interfaces:msg\Pos.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ap_interfaces/msg/detail/pos__rosidl_typesupport_introspection_c.h"
#include "ap_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ap_interfaces/msg/detail/pos__functions.h"
#include "ap_interfaces/msg/detail/pos__struct.h"


// Include directives for member types
// Member `x`
// Member `y`
// Member `player_id`
// Member `size`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `tag_id`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Pos__rosidl_typesupport_introspection_c__Pos_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ap_interfaces__msg__Pos__init(message_memory);
}

void Pos__rosidl_typesupport_introspection_c__Pos_fini_function(void * message_memory)
{
  ap_interfaces__msg__Pos__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Pos__rosidl_typesupport_introspection_c__Pos_message_member_array[7] = {
  {
    "total",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ap_interfaces__msg__Pos, total),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ap_interfaces__msg__Pos, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ap_interfaces__msg__Pos, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ap_interfaces__msg__Pos, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "player_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ap_interfaces__msg__Pos, player_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tag_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ap_interfaces__msg__Pos, tag_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ap_interfaces__msg__Pos, size),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Pos__rosidl_typesupport_introspection_c__Pos_message_members = {
  "ap_interfaces__msg",  // message namespace
  "Pos",  // message name
  7,  // number of fields
  sizeof(ap_interfaces__msg__Pos),
  Pos__rosidl_typesupport_introspection_c__Pos_message_member_array,  // message members
  Pos__rosidl_typesupport_introspection_c__Pos_init_function,  // function to initialize message memory (memory has to be allocated)
  Pos__rosidl_typesupport_introspection_c__Pos_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Pos__rosidl_typesupport_introspection_c__Pos_message_type_support_handle = {
  0,
  &Pos__rosidl_typesupport_introspection_c__Pos_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ap_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ap_interfaces, msg, Pos)() {
  if (!Pos__rosidl_typesupport_introspection_c__Pos_message_type_support_handle.typesupport_identifier) {
    Pos__rosidl_typesupport_introspection_c__Pos_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Pos__rosidl_typesupport_introspection_c__Pos_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
