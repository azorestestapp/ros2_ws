// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from autodrive_msgs:msg/TrafficSign.idl
// generated code does not contain a copyright notice
#include "autodrive_msgs/msg/detail/traffic_sign__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "autodrive_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "autodrive_msgs/msg/detail/traffic_sign__struct.h"
#include "autodrive_msgs/msg/detail/traffic_sign__functions.h"
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
#include "rosidl_runtime_c/primitives_sequence.h"  // associated_sign, associated_stop_line, corresponding_lane
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // associated_sign, associated_stop_line, corresponding_lane
#include "rosidl_runtime_c/string.h"  // end_day, start_day
#include "rosidl_runtime_c/string_functions.h"  // end_day, start_day

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


using _TrafficSign__ros_msg_type = autodrive_msgs__msg__TrafficSign;

static bool _TrafficSign__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TrafficSign__ros_msg_type * ros_message = static_cast<const _TrafficSign__ros_msg_type *>(untyped_ros_message);
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

  // Field name: corresponding_lane
  {
    size_t size = ros_message->corresponding_lane.size;
    auto array_ptr = ros_message->corresponding_lane.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: associated_sign
  {
    size_t size = ros_message->associated_sign.size;
    auto array_ptr = ros_message->associated_sign.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: associated_stop_line
  {
    size_t size = ros_message->associated_stop_line.size;
    auto array_ptr = ros_message->associated_stop_line.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: sign_type
  {
    cdr << ros_message->sign_type;
  }

  // Field name: sign_type_confidence
  {
    cdr << ros_message->sign_type_confidence;
  }

  // Field name: start_time
  {
    cdr << ros_message->start_time;
  }

  // Field name: end_time
  {
    cdr << ros_message->end_time;
  }

  // Field name: start_day
  {
    const rosidl_runtime_c__String * str = &ros_message->start_day;
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

  // Field name: end_day
  {
    const rosidl_runtime_c__String * str = &ros_message->end_day;
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

  return true;
}

static bool _TrafficSign__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TrafficSign__ros_msg_type * ros_message = static_cast<_TrafficSign__ros_msg_type *>(untyped_ros_message);
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

  // Field name: corresponding_lane
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->corresponding_lane.data) {
      rosidl_runtime_c__uint64__Sequence__fini(&ros_message->corresponding_lane);
    }
    if (!rosidl_runtime_c__uint64__Sequence__init(&ros_message->corresponding_lane, size)) {
      fprintf(stderr, "failed to create array for field 'corresponding_lane'");
      return false;
    }
    auto array_ptr = ros_message->corresponding_lane.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: associated_sign
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->associated_sign.data) {
      rosidl_runtime_c__uint64__Sequence__fini(&ros_message->associated_sign);
    }
    if (!rosidl_runtime_c__uint64__Sequence__init(&ros_message->associated_sign, size)) {
      fprintf(stderr, "failed to create array for field 'associated_sign'");
      return false;
    }
    auto array_ptr = ros_message->associated_sign.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: associated_stop_line
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->associated_stop_line.data) {
      rosidl_runtime_c__uint64__Sequence__fini(&ros_message->associated_stop_line);
    }
    if (!rosidl_runtime_c__uint64__Sequence__init(&ros_message->associated_stop_line, size)) {
      fprintf(stderr, "failed to create array for field 'associated_stop_line'");
      return false;
    }
    auto array_ptr = ros_message->associated_stop_line.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: sign_type
  {
    cdr >> ros_message->sign_type;
  }

  // Field name: sign_type_confidence
  {
    cdr >> ros_message->sign_type_confidence;
  }

  // Field name: start_time
  {
    cdr >> ros_message->start_time;
  }

  // Field name: end_time
  {
    cdr >> ros_message->end_time;
  }

  // Field name: start_day
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->start_day.data) {
      rosidl_runtime_c__String__init(&ros_message->start_day);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->start_day,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'start_day'\n");
      return false;
    }
  }

  // Field name: end_day
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->end_day.data) {
      rosidl_runtime_c__String__init(&ros_message->end_day);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->end_day,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'end_day'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autodrive_msgs
size_t get_serialized_size_autodrive_msgs__msg__TrafficSign(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TrafficSign__ros_msg_type * ros_message = static_cast<const _TrafficSign__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name detection

  current_alignment += get_serialized_size_autodrive_msgs__msg__GeneralDetection(
    &(ros_message->detection), current_alignment);
  // field.name corresponding_lane
  {
    size_t array_size = ros_message->corresponding_lane.size;
    auto array_ptr = ros_message->corresponding_lane.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name associated_sign
  {
    size_t array_size = ros_message->associated_sign.size;
    auto array_ptr = ros_message->associated_sign.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name associated_stop_line
  {
    size_t array_size = ros_message->associated_stop_line.size;
    auto array_ptr = ros_message->associated_stop_line.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sign_type
  {
    size_t item_size = sizeof(ros_message->sign_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sign_type_confidence
  {
    size_t item_size = sizeof(ros_message->sign_type_confidence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name start_time
  {
    size_t item_size = sizeof(ros_message->start_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name end_time
  {
    size_t item_size = sizeof(ros_message->end_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name start_day
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->start_day.size + 1);
  // field.name end_day
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->end_day.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _TrafficSign__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_autodrive_msgs__msg__TrafficSign(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autodrive_msgs
size_t max_serialized_size_autodrive_msgs__msg__TrafficSign(
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
  // member: corresponding_lane
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: associated_sign
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: associated_stop_line
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: sign_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: sign_type_confidence
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: start_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: end_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: start_day
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
  // member: end_day
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

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = autodrive_msgs__msg__TrafficSign;
    is_plain =
      (
      offsetof(DataType, end_day) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _TrafficSign__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_autodrive_msgs__msg__TrafficSign(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TrafficSign = {
  "autodrive_msgs::msg",
  "TrafficSign",
  _TrafficSign__cdr_serialize,
  _TrafficSign__cdr_deserialize,
  _TrafficSign__get_serialized_size,
  _TrafficSign__max_serialized_size
};

static rosidl_message_type_support_t _TrafficSign__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TrafficSign,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autodrive_msgs, msg, TrafficSign)() {
  return &_TrafficSign__type_support;
}

#if defined(__cplusplus)
}
#endif
