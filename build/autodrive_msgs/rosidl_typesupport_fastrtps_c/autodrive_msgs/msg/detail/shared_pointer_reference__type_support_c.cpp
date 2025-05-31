// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from autodrive_msgs:msg/SharedPointerReference.idl
// generated code does not contain a copyright notice
#include "autodrive_msgs/msg/detail/shared_pointer_reference__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "autodrive_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "autodrive_msgs/msg/detail/shared_pointer_reference__struct.h"
#include "autodrive_msgs/msg/detail/shared_pointer_reference__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // shared_pointer_key
#include "rosidl_runtime_c/string_functions.h"  // shared_pointer_key

// forward declare type support functions


using _SharedPointerReference__ros_msg_type = autodrive_msgs__msg__SharedPointerReference;

static bool _SharedPointerReference__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SharedPointerReference__ros_msg_type * ros_message = static_cast<const _SharedPointerReference__ros_msg_type *>(untyped_ros_message);
  // Field name: shared_pointer_key
  {
    const rosidl_runtime_c__String * str = &ros_message->shared_pointer_key;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: map_active
  {
    cdr << (ros_message->map_active ? true : false);
  }

  // Field name: graph_active
  {
    cdr << (ros_message->graph_active ? true : false);
  }

  return true;
}

static bool _SharedPointerReference__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SharedPointerReference__ros_msg_type * ros_message = static_cast<_SharedPointerReference__ros_msg_type *>(untyped_ros_message);
  // Field name: shared_pointer_key
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->shared_pointer_key.data) {
      rosidl_runtime_c__String__init(&ros_message->shared_pointer_key);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->shared_pointer_key,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'shared_pointer_key'\n");
      return false;
    }
  }

  // Field name: map_active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->map_active = tmp ? true : false;
  }

  // Field name: graph_active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->graph_active = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autodrive_msgs
size_t get_serialized_size_autodrive_msgs__msg__SharedPointerReference(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SharedPointerReference__ros_msg_type * ros_message = static_cast<const _SharedPointerReference__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name shared_pointer_key
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->shared_pointer_key.size + 1);
  // field.name map_active
  {
    size_t item_size = sizeof(ros_message->map_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name graph_active
  {
    size_t item_size = sizeof(ros_message->graph_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SharedPointerReference__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_autodrive_msgs__msg__SharedPointerReference(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autodrive_msgs
size_t max_serialized_size_autodrive_msgs__msg__SharedPointerReference(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: shared_pointer_key
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: map_active
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: graph_active
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = autodrive_msgs__msg__SharedPointerReference;
    is_plain =
      (
      offsetof(DataType, graph_active) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SharedPointerReference__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_autodrive_msgs__msg__SharedPointerReference(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SharedPointerReference = {
  "autodrive_msgs::msg",
  "SharedPointerReference",
  _SharedPointerReference__cdr_serialize,
  _SharedPointerReference__cdr_deserialize,
  _SharedPointerReference__get_serialized_size,
  _SharedPointerReference__max_serialized_size
};

static rosidl_message_type_support_t _SharedPointerReference__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SharedPointerReference,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autodrive_msgs, msg, SharedPointerReference)() {
  return &_SharedPointerReference__type_support;
}

#if defined(__cplusplus)
}
#endif
