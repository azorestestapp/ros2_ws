// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autodrive_msgs:msg/Directions.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autodrive_msgs/msg/detail/directions__rosidl_typesupport_introspection_c.h"
#include "autodrive_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autodrive_msgs/msg/detail/directions__functions.h"
#include "autodrive_msgs/msg/detail/directions__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `manoeuvres`
#include "autodrive_msgs/msg/manoeuvre.h"
// Member `manoeuvres`
#include "autodrive_msgs/msg/detail/manoeuvre__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autodrive_msgs__msg__Directions__rosidl_typesupport_introspection_c__Directions_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autodrive_msgs__msg__Directions__init(message_memory);
}

void autodrive_msgs__msg__Directions__rosidl_typesupport_introspection_c__Directions_fini_function(void * message_memory)
{
  autodrive_msgs__msg__Directions__fini(message_memory);
}

size_t autodrive_msgs__msg__Directions__rosidl_typesupport_introspection_c__size_function__Directions__manoeuvres(
  const void * untyped_member)
{
  const autodrive_msgs__msg__Manoeuvre__Sequence * member =
    (const autodrive_msgs__msg__Manoeuvre__Sequence *)(untyped_member);
  return member->size;
}

const void * autodrive_msgs__msg__Directions__rosidl_typesupport_introspection_c__get_const_function__Directions__manoeuvres(
  const void * untyped_member, size_t index)
{
  const autodrive_msgs__msg__Manoeuvre__Sequence * member =
    (const autodrive_msgs__msg__Manoeuvre__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autodrive_msgs__msg__Directions__rosidl_typesupport_introspection_c__get_function__Directions__manoeuvres(
  void * untyped_member, size_t index)
{
  autodrive_msgs__msg__Manoeuvre__Sequence * member =
    (autodrive_msgs__msg__Manoeuvre__Sequence *)(untyped_member);
  return &member->data[index];
}

void autodrive_msgs__msg__Directions__rosidl_typesupport_introspection_c__fetch_function__Directions__manoeuvres(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const autodrive_msgs__msg__Manoeuvre * item =
    ((const autodrive_msgs__msg__Manoeuvre *)
    autodrive_msgs__msg__Directions__rosidl_typesupport_introspection_c__get_const_function__Directions__manoeuvres(untyped_member, index));
  autodrive_msgs__msg__Manoeuvre * value =
    (autodrive_msgs__msg__Manoeuvre *)(untyped_value);
  *value = *item;
}

void autodrive_msgs__msg__Directions__rosidl_typesupport_introspection_c__assign_function__Directions__manoeuvres(
  void * untyped_member, size_t index, const void * untyped_value)
{
  autodrive_msgs__msg__Manoeuvre * item =
    ((autodrive_msgs__msg__Manoeuvre *)
    autodrive_msgs__msg__Directions__rosidl_typesupport_introspection_c__get_function__Directions__manoeuvres(untyped_member, index));
  const autodrive_msgs__msg__Manoeuvre * value =
    (const autodrive_msgs__msg__Manoeuvre *)(untyped_value);
  *item = *value;
}

bool autodrive_msgs__msg__Directions__rosidl_typesupport_introspection_c__resize_function__Directions__manoeuvres(
  void * untyped_member, size_t size)
{
  autodrive_msgs__msg__Manoeuvre__Sequence * member =
    (autodrive_msgs__msg__Manoeuvre__Sequence *)(untyped_member);
  autodrive_msgs__msg__Manoeuvre__Sequence__fini(member);
  return autodrive_msgs__msg__Manoeuvre__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember autodrive_msgs__msg__Directions__rosidl_typesupport_introspection_c__Directions_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autodrive_msgs__msg__Directions, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "manoeuvres",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autodrive_msgs__msg__Directions, manoeuvres),  // bytes offset in struct
    NULL,  // default value
    autodrive_msgs__msg__Directions__rosidl_typesupport_introspection_c__size_function__Directions__manoeuvres,  // size() function pointer
    autodrive_msgs__msg__Directions__rosidl_typesupport_introspection_c__get_const_function__Directions__manoeuvres,  // get_const(index) function pointer
    autodrive_msgs__msg__Directions__rosidl_typesupport_introspection_c__get_function__Directions__manoeuvres,  // get(index) function pointer
    autodrive_msgs__msg__Directions__rosidl_typesupport_introspection_c__fetch_function__Directions__manoeuvres,  // fetch(index, &value) function pointer
    autodrive_msgs__msg__Directions__rosidl_typesupport_introspection_c__assign_function__Directions__manoeuvres,  // assign(index, value) function pointer
    autodrive_msgs__msg__Directions__rosidl_typesupport_introspection_c__resize_function__Directions__manoeuvres  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autodrive_msgs__msg__Directions__rosidl_typesupport_introspection_c__Directions_message_members = {
  "autodrive_msgs__msg",  // message namespace
  "Directions",  // message name
  2,  // number of fields
  sizeof(autodrive_msgs__msg__Directions),
  autodrive_msgs__msg__Directions__rosidl_typesupport_introspection_c__Directions_message_member_array,  // message members
  autodrive_msgs__msg__Directions__rosidl_typesupport_introspection_c__Directions_init_function,  // function to initialize message memory (memory has to be allocated)
  autodrive_msgs__msg__Directions__rosidl_typesupport_introspection_c__Directions_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autodrive_msgs__msg__Directions__rosidl_typesupport_introspection_c__Directions_message_type_support_handle = {
  0,
  &autodrive_msgs__msg__Directions__rosidl_typesupport_introspection_c__Directions_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autodrive_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autodrive_msgs, msg, Directions)() {
  autodrive_msgs__msg__Directions__rosidl_typesupport_introspection_c__Directions_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  autodrive_msgs__msg__Directions__rosidl_typesupport_introspection_c__Directions_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autodrive_msgs, msg, Manoeuvre)();
  if (!autodrive_msgs__msg__Directions__rosidl_typesupport_introspection_c__Directions_message_type_support_handle.typesupport_identifier) {
    autodrive_msgs__msg__Directions__rosidl_typesupport_introspection_c__Directions_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autodrive_msgs__msg__Directions__rosidl_typesupport_introspection_c__Directions_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
