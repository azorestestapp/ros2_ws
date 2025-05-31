// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from autodrive_msgs:msg/SpeedLimit.idl
// generated code does not contain a copyright notice
#include "autodrive_msgs/msg/detail/speed_limit__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "autodrive_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "autodrive_msgs/msg/detail/speed_limit__struct.h"
#include "autodrive_msgs/msg/detail/speed_limit__functions.h"
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

#include "autodrive_msgs/msg/detail/general_detection__functions.h"  // detection

// forward declare type support functions
size_t get_serialized_size_autodrive_msgs__msg__GeneralDetection(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_autodrive_msgs__msg__GeneralDetection(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autodrive_msgs, msg, GeneralDetection)();


using _SpeedLimit__ros_msg_type = autodrive_msgs__msg__SpeedLimit;

static bool _SpeedLimit__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SpeedLimit__ros_msg_type * ros_message = static_cast<const _SpeedLimit__ros_msg_type *>(untyped_ros_message);
  // Field name: detection
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autodrive_msgs, msg, GeneralDetection
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->detection, cdr))
    {
      return false;
    }
  }

  // Field name: max_speed
  {
    cdr << ros_message->max_speed;
  }

  // Field name: min_speed
  {
    cdr << ros_message->min_speed;
  }

  // Field name: speed_limit_confidence
  {
    cdr << ros_message->speed_limit_confidence;
  }

  // Field name: unit
  {
    cdr << ros_message->unit;
  }

  // Field name: speed_limit_unit_confidence
  {
    cdr << ros_message->speed_limit_unit_confidence;
  }

  return true;
}

static bool _SpeedLimit__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SpeedLimit__ros_msg_type * ros_message = static_cast<_SpeedLimit__ros_msg_type *>(untyped_ros_message);
  // Field name: detection
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autodrive_msgs, msg, GeneralDetection
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->detection))
    {
      return false;
    }
  }

  // Field name: max_speed
  {
    cdr >> ros_message->max_speed;
  }

  // Field name: min_speed
  {
    cdr >> ros_message->min_speed;
  }

  // Field name: speed_limit_confidence
  {
    cdr >> ros_message->speed_limit_confidence;
  }

  // Field name: unit
  {
    cdr >> ros_message->unit;
  }

  // Field name: speed_limit_unit_confidence
  {
    cdr >> ros_message->speed_limit_unit_confidence;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autodrive_msgs
size_t get_serialized_size_autodrive_msgs__msg__SpeedLimit(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SpeedLimit__ros_msg_type * ros_message = static_cast<const _SpeedLimit__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name detection

  current_alignment += get_serialized_size_autodrive_msgs__msg__GeneralDetection(
    &(ros_message->detection), current_alignment);
  // field.name max_speed
  {
    size_t item_size = sizeof(ros_message->max_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name min_speed
  {
    size_t item_size = sizeof(ros_message->min_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_limit_confidence
  {
    size_t item_size = sizeof(ros_message->speed_limit_confidence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name unit
  {
    size_t item_size = sizeof(ros_message->unit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_limit_unit_confidence
  {
    size_t item_size = sizeof(ros_message->speed_limit_unit_confidence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SpeedLimit__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_autodrive_msgs__msg__SpeedLimit(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autodrive_msgs
size_t max_serialized_size_autodrive_msgs__msg__SpeedLimit(
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

  // member: detection
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_autodrive_msgs__msg__GeneralDetection(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: max_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: min_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: speed_limit_confidence
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: unit
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: speed_limit_unit_confidence
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = autodrive_msgs__msg__SpeedLimit;
    is_plain =
      (
      offsetof(DataType, speed_limit_unit_confidence) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SpeedLimit__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_autodrive_msgs__msg__SpeedLimit(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SpeedLimit = {
  "autodrive_msgs::msg",
  "SpeedLimit",
  _SpeedLimit__cdr_serialize,
  _SpeedLimit__cdr_deserialize,
  _SpeedLimit__get_serialized_size,
  _SpeedLimit__max_serialized_size
};

static rosidl_message_type_support_t _SpeedLimit__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SpeedLimit,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autodrive_msgs, msg, SpeedLimit)() {
  return &_SpeedLimit__type_support;
}

#if defined(__cplusplus)
}
#endif
