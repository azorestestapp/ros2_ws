// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autodrive_msgs:msg/RailroadCrossing.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autodrive_msgs/msg/detail/railroad_crossing__rosidl_typesupport_introspection_c.h"
#include "autodrive_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autodrive_msgs/msg/detail/railroad_crossing__functions.h"
#include "autodrive_msgs/msg/detail/railroad_crossing__struct.h"


// Include directives for member types
// Member `detection`
#include "autodrive_msgs/msg/general_detection.h"
// Member `detection`
#include "autodrive_msgs/msg/detail/general_detection__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autodrive_msgs__msg__RailroadCrossing__rosidl_typesupport_introspection_c__RailroadCrossing_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autodrive_msgs__msg__RailroadCrossing__init(message_memory);
}

void autodrive_msgs__msg__RailroadCrossing__rosidl_typesupport_introspection_c__RailroadCrossing_fini_function(void * message_memory)
{
  autodrive_msgs__msg__RailroadCrossing__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember autodrive_msgs__msg__RailroadCrossing__rosidl_typesupport_introspection_c__RailroadCrossing_message_member_array[6] = {
  {
    "detection",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autodrive_msgs__msg__RailroadCrossing, detection),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bar",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autodrive_msgs__msg__RailroadCrossing, bar),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "active",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autodrive_msgs__msg__RailroadCrossing, active),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bar_activity_confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autodrive_msgs__msg__RailroadCrossing, bar_activity_confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "railroad_sign",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autodrive_msgs__msg__RailroadCrossing, railroad_sign),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stop_line",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autodrive_msgs__msg__RailroadCrossing, stop_line),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autodrive_msgs__msg__RailroadCrossing__rosidl_typesupport_introspection_c__RailroadCrossing_message_members = {
  "autodrive_msgs__msg",  // message namespace
  "RailroadCrossing",  // message name
  6,  // number of fields
  sizeof(autodrive_msgs__msg__RailroadCrossing),
  autodrive_msgs__msg__RailroadCrossing__rosidl_typesupport_introspection_c__RailroadCrossing_message_member_array,  // message members
  autodrive_msgs__msg__RailroadCrossing__rosidl_typesupport_introspection_c__RailroadCrossing_init_function,  // function to initialize message memory (memory has to be allocated)
  autodrive_msgs__msg__RailroadCrossing__rosidl_typesupport_introspection_c__RailroadCrossing_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autodrive_msgs__msg__RailroadCrossing__rosidl_typesupport_introspection_c__RailroadCrossing_message_type_support_handle = {
  0,
  &autodrive_msgs__msg__RailroadCrossing__rosidl_typesupport_introspection_c__RailroadCrossing_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autodrive_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autodrive_msgs, msg, RailroadCrossing)() {
  autodrive_msgs__msg__RailroadCrossing__rosidl_typesupport_introspection_c__RailroadCrossing_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autodrive_msgs, msg, GeneralDetection)();
  if (!autodrive_msgs__msg__RailroadCrossing__rosidl_typesupport_introspection_c__RailroadCrossing_message_type_support_handle.typesupport_identifier) {
    autodrive_msgs__msg__RailroadCrossing__rosidl_typesupport_introspection_c__RailroadCrossing_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autodrive_msgs__msg__RailroadCrossing__rosidl_typesupport_introspection_c__RailroadCrossing_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
