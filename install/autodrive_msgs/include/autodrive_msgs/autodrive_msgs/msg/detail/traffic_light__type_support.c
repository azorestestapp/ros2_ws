// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autodrive_msgs:msg/TrafficLight.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autodrive_msgs/msg/detail/traffic_light__rosidl_typesupport_introspection_c.h"
#include "autodrive_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autodrive_msgs/msg/detail/traffic_light__functions.h"
#include "autodrive_msgs/msg/detail/traffic_light__struct.h"


// Include directives for member types
// Member `detection`
#include "autodrive_msgs/msg/general_detection.h"
// Member `detection`
#include "autodrive_msgs/msg/detail/general_detection__rosidl_typesupport_introspection_c.h"
// Member `corresponding_lane`
// Member `associated_light`
// Member `associated_stop_line`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autodrive_msgs__msg__TrafficLight__rosidl_typesupport_introspection_c__TrafficLight_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autodrive_msgs__msg__TrafficLight__init(message_memory);
}

void autodrive_msgs__msg__TrafficLight__rosidl_typesupport_introspection_c__TrafficLight_fini_function(void * message_memory)
{
  autodrive_msgs__msg__TrafficLight__fini(message_memory);
}

size_t autodrive_msgs__msg__TrafficLight__rosidl_typesupport_introspection_c__size_function__TrafficLight__corresponding_lane(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return member->size;
}

const void * autodrive_msgs__msg__TrafficLight__rosidl_typesupport_introspection_c__get_const_function__TrafficLight__corresponding_lane(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autodrive_msgs__msg__TrafficLight__rosidl_typesupport_introspection_c__get_function__TrafficLight__corresponding_lane(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void autodrive_msgs__msg__TrafficLight__rosidl_typesupport_introspection_c__fetch_function__TrafficLight__corresponding_lane(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint64_t * item =
    ((const uint64_t *)
    autodrive_msgs__msg__TrafficLight__rosidl_typesupport_introspection_c__get_const_function__TrafficLight__corresponding_lane(untyped_member, index));
  uint64_t * value =
    (uint64_t *)(untyped_value);
  *value = *item;
}

void autodrive_msgs__msg__TrafficLight__rosidl_typesupport_introspection_c__assign_function__TrafficLight__corresponding_lane(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint64_t * item =
    ((uint64_t *)
    autodrive_msgs__msg__TrafficLight__rosidl_typesupport_introspection_c__get_function__TrafficLight__corresponding_lane(untyped_member, index));
  const uint64_t * value =
    (const uint64_t *)(untyped_value);
  *item = *value;
}

bool autodrive_msgs__msg__TrafficLight__rosidl_typesupport_introspection_c__resize_function__TrafficLight__corresponding_lane(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  rosidl_runtime_c__uint64__Sequence__fini(member);
  return rosidl_runtime_c__uint64__Sequence__init(member, size);
}

size_t autodrive_msgs__msg__TrafficLight__rosidl_typesupport_introspection_c__size_function__TrafficLight__associated_light(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return member->size;
}

const void * autodrive_msgs__msg__TrafficLight__rosidl_typesupport_introspection_c__get_const_function__TrafficLight__associated_light(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autodrive_msgs__msg__TrafficLight__rosidl_typesupport_introspection_c__get_function__TrafficLight__associated_light(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void autodrive_msgs__msg__TrafficLight__rosidl_typesupport_introspection_c__fetch_function__TrafficLight__associated_light(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint64_t * item =
    ((const uint64_t *)
    autodrive_msgs__msg__TrafficLight__rosidl_typesupport_introspection_c__get_const_function__TrafficLight__associated_light(untyped_member, index));
  uint64_t * value =
    (uint64_t *)(untyped_value);
  *value = *item;
}

void autodrive_msgs__msg__TrafficLight__rosidl_typesupport_introspection_c__assign_function__TrafficLight__associated_light(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint64_t * item =
    ((uint64_t *)
    autodrive_msgs__msg__TrafficLight__rosidl_typesupport_introspection_c__get_function__TrafficLight__associated_light(untyped_member, index));
  const uint64_t * value =
    (const uint64_t *)(untyped_value);
  *item = *value;
}

bool autodrive_msgs__msg__TrafficLight__rosidl_typesupport_introspection_c__resize_function__TrafficLight__associated_light(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  rosidl_runtime_c__uint64__Sequence__fini(member);
  return rosidl_runtime_c__uint64__Sequence__init(member, size);
}

size_t autodrive_msgs__msg__TrafficLight__rosidl_typesupport_introspection_c__size_function__TrafficLight__associated_stop_line(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return member->size;
}

const void * autodrive_msgs__msg__TrafficLight__rosidl_typesupport_introspection_c__get_const_function__TrafficLight__associated_stop_line(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autodrive_msgs__msg__TrafficLight__rosidl_typesupport_introspection_c__get_function__TrafficLight__associated_stop_line(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void autodrive_msgs__msg__TrafficLight__rosidl_typesupport_introspection_c__fetch_function__TrafficLight__associated_stop_line(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint64_t * item =
    ((const uint64_t *)
    autodrive_msgs__msg__TrafficLight__rosidl_typesupport_introspection_c__get_const_function__TrafficLight__associated_stop_line(untyped_member, index));
  uint64_t * value =
    (uint64_t *)(untyped_value);
  *value = *item;
}

void autodrive_msgs__msg__TrafficLight__rosidl_typesupport_introspection_c__assign_function__TrafficLight__associated_stop_line(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint64_t * item =
    ((uint64_t *)
    autodrive_msgs__msg__TrafficLight__rosidl_typesupport_introspection_c__get_function__TrafficLight__associated_stop_line(untyped_member, index));
  const uint64_t * value =
    (const uint64_t *)(untyped_value);
  *item = *value;
}

bool autodrive_msgs__msg__TrafficLight__rosidl_typesupport_introspection_c__resize_function__TrafficLight__associated_stop_line(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  rosidl_runtime_c__uint64__Sequence__fini(member);
  return rosidl_runtime_c__uint64__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember autodrive_msgs__msg__TrafficLight__rosidl_typesupport_introspection_c__TrafficLight_message_member_array[13] = {
  {
    "detection",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autodrive_msgs__msg__TrafficLight, detection),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "corresponding_lane",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autodrive_msgs__msg__TrafficLight, corresponding_lane),  // bytes offset in struct
    NULL,  // default value
    autodrive_msgs__msg__TrafficLight__rosidl_typesupport_introspection_c__size_function__TrafficLight__corresponding_lane,  // size() function pointer
    autodrive_msgs__msg__TrafficLight__rosidl_typesupport_introspection_c__get_const_function__TrafficLight__corresponding_lane,  // get_const(index) function pointer
    autodrive_msgs__msg__TrafficLight__rosidl_typesupport_introspection_c__get_function__TrafficLight__corresponding_lane,  // get(index) function pointer
    autodrive_msgs__msg__TrafficLight__rosidl_typesupport_introspection_c__fetch_function__TrafficLight__corresponding_lane,  // fetch(index, &value) function pointer
    autodrive_msgs__msg__TrafficLight__rosidl_typesupport_introspection_c__assign_function__TrafficLight__corresponding_lane,  // assign(index, value) function pointer
    autodrive_msgs__msg__TrafficLight__rosidl_typesupport_introspection_c__resize_function__TrafficLight__corresponding_lane  // resize(index) function pointer
  },
  {
    "associated_light",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autodrive_msgs__msg__TrafficLight, associated_light),  // bytes offset in struct
    NULL,  // default value
    autodrive_msgs__msg__TrafficLight__rosidl_typesupport_introspection_c__size_function__TrafficLight__associated_light,  // size() function pointer
    autodrive_msgs__msg__TrafficLight__rosidl_typesupport_introspection_c__get_const_function__TrafficLight__associated_light,  // get_const(index) function pointer
    autodrive_msgs__msg__TrafficLight__rosidl_typesupport_introspection_c__get_function__TrafficLight__associated_light,  // get(index) function pointer
    autodrive_msgs__msg__TrafficLight__rosidl_typesupport_introspection_c__fetch_function__TrafficLight__associated_light,  // fetch(index, &value) function pointer
    autodrive_msgs__msg__TrafficLight__rosidl_typesupport_introspection_c__assign_function__TrafficLight__associated_light,  // assign(index, value) function pointer
    autodrive_msgs__msg__TrafficLight__rosidl_typesupport_introspection_c__resize_function__TrafficLight__associated_light  // resize(index) function pointer
  },
  {
    "associated_stop_line",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autodrive_msgs__msg__TrafficLight, associated_stop_line),  // bytes offset in struct
    NULL,  // default value
    autodrive_msgs__msg__TrafficLight__rosidl_typesupport_introspection_c__size_function__TrafficLight__associated_stop_line,  // size() function pointer
    autodrive_msgs__msg__TrafficLight__rosidl_typesupport_introspection_c__get_const_function__TrafficLight__associated_stop_line,  // get_const(index) function pointer
    autodrive_msgs__msg__TrafficLight__rosidl_typesupport_introspection_c__get_function__TrafficLight__associated_stop_line,  // get(index) function pointer
    autodrive_msgs__msg__TrafficLight__rosidl_typesupport_introspection_c__fetch_function__TrafficLight__associated_stop_line,  // fetch(index, &value) function pointer
    autodrive_msgs__msg__TrafficLight__rosidl_typesupport_introspection_c__assign_function__TrafficLight__associated_stop_line,  // assign(index, value) function pointer
    autodrive_msgs__msg__TrafficLight__rosidl_typesupport_introspection_c__resize_function__TrafficLight__associated_stop_line  // resize(index) function pointer
  },
  {
    "main_bulb",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autodrive_msgs__msg__TrafficLight, main_bulb),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "main_bulb_confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autodrive_msgs__msg__TrafficLight, main_bulb_confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left_turn",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autodrive_msgs__msg__TrafficLight, left_turn),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left_bulb_confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autodrive_msgs__msg__TrafficLight, left_bulb_confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_turn",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autodrive_msgs__msg__TrafficLight, right_turn),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_bulb_confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autodrive_msgs__msg__TrafficLight, right_bulb_confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "flashing",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autodrive_msgs__msg__TrafficLight, flashing),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "shape_category",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autodrive_msgs__msg__TrafficLight, shape_category),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "shape_confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autodrive_msgs__msg__TrafficLight, shape_confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autodrive_msgs__msg__TrafficLight__rosidl_typesupport_introspection_c__TrafficLight_message_members = {
  "autodrive_msgs__msg",  // message namespace
  "TrafficLight",  // message name
  13,  // number of fields
  sizeof(autodrive_msgs__msg__TrafficLight),
  autodrive_msgs__msg__TrafficLight__rosidl_typesupport_introspection_c__TrafficLight_message_member_array,  // message members
  autodrive_msgs__msg__TrafficLight__rosidl_typesupport_introspection_c__TrafficLight_init_function,  // function to initialize message memory (memory has to be allocated)
  autodrive_msgs__msg__TrafficLight__rosidl_typesupport_introspection_c__TrafficLight_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autodrive_msgs__msg__TrafficLight__rosidl_typesupport_introspection_c__TrafficLight_message_type_support_handle = {
  0,
  &autodrive_msgs__msg__TrafficLight__rosidl_typesupport_introspection_c__TrafficLight_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autodrive_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autodrive_msgs, msg, TrafficLight)() {
  autodrive_msgs__msg__TrafficLight__rosidl_typesupport_introspection_c__TrafficLight_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autodrive_msgs, msg, GeneralDetection)();
  if (!autodrive_msgs__msg__TrafficLight__rosidl_typesupport_introspection_c__TrafficLight_message_type_support_handle.typesupport_identifier) {
    autodrive_msgs__msg__TrafficLight__rosidl_typesupport_introspection_c__TrafficLight_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autodrive_msgs__msg__TrafficLight__rosidl_typesupport_introspection_c__TrafficLight_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
