// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from autodrive_msgs:msg/TrafficSign.idl
// generated code does not contain a copyright notice
#include "autodrive_msgs/msg/detail/traffic_sign__rosidl_typesupport_fastrtps_cpp.hpp"
#include "autodrive_msgs/msg/detail/traffic_sign__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace autodrive_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const autodrive_msgs::msg::GeneralDetection &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  autodrive_msgs::msg::GeneralDetection &);
size_t get_serialized_size(
  const autodrive_msgs::msg::GeneralDetection &,
  size_t current_alignment);
size_t
max_serialized_size_GeneralDetection(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace autodrive_msgs


namespace autodrive_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autodrive_msgs
cdr_serialize(
  const autodrive_msgs::msg::TrafficSign & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: detection
  autodrive_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.detection,
    cdr);
  // Member: corresponding_lane
  {
    cdr << ros_message.corresponding_lane;
  }
  // Member: associated_sign
  {
    cdr << ros_message.associated_sign;
  }
  // Member: associated_stop_line
  {
    cdr << ros_message.associated_stop_line;
  }
  // Member: sign_type
  cdr << ros_message.sign_type;
  // Member: sign_type_confidence
  cdr << ros_message.sign_type_confidence;
  // Member: start_time
  cdr << ros_message.start_time;
  // Member: end_time
  cdr << ros_message.end_time;
  // Member: start_day
  cdr << ros_message.start_day;
  // Member: end_day
  cdr << ros_message.end_day;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autodrive_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  autodrive_msgs::msg::TrafficSign & ros_message)
{
  // Member: detection
  autodrive_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.detection);

  // Member: corresponding_lane
  {
    cdr >> ros_message.corresponding_lane;
  }

  // Member: associated_sign
  {
    cdr >> ros_message.associated_sign;
  }

  // Member: associated_stop_line
  {
    cdr >> ros_message.associated_stop_line;
  }

  // Member: sign_type
  cdr >> ros_message.sign_type;

  // Member: sign_type_confidence
  cdr >> ros_message.sign_type_confidence;

  // Member: start_time
  cdr >> ros_message.start_time;

  // Member: end_time
  cdr >> ros_message.end_time;

  // Member: start_day
  cdr >> ros_message.start_day;

  // Member: end_day
  cdr >> ros_message.end_day;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autodrive_msgs
get_serialized_size(
  const autodrive_msgs::msg::TrafficSign & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: detection

  current_alignment +=
    autodrive_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.detection, current_alignment);
  // Member: corresponding_lane
  {
    size_t array_size = ros_message.corresponding_lane.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.corresponding_lane[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: associated_sign
  {
    size_t array_size = ros_message.associated_sign.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.associated_sign[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: associated_stop_line
  {
    size_t array_size = ros_message.associated_stop_line.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.associated_stop_line[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sign_type
  {
    size_t item_size = sizeof(ros_message.sign_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sign_type_confidence
  {
    size_t item_size = sizeof(ros_message.sign_type_confidence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: start_time
  {
    size_t item_size = sizeof(ros_message.start_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: end_time
  {
    size_t item_size = sizeof(ros_message.end_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: start_day
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.start_day.size() + 1);
  // Member: end_day
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.end_day.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autodrive_msgs
max_serialized_size_TrafficSign(
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


  // Member: detection
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        autodrive_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_GeneralDetection(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: corresponding_lane
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

  // Member: associated_sign
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

  // Member: associated_stop_line
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

  // Member: sign_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: sign_type_confidence
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: start_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: end_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: start_day
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

  // Member: end_day
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
    using DataType = autodrive_msgs::msg::TrafficSign;
    is_plain =
      (
      offsetof(DataType, end_day) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _TrafficSign__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const autodrive_msgs::msg::TrafficSign *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TrafficSign__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<autodrive_msgs::msg::TrafficSign *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TrafficSign__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const autodrive_msgs::msg::TrafficSign *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TrafficSign__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_TrafficSign(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _TrafficSign__callbacks = {
  "autodrive_msgs::msg",
  "TrafficSign",
  _TrafficSign__cdr_serialize,
  _TrafficSign__cdr_deserialize,
  _TrafficSign__get_serialized_size,
  _TrafficSign__max_serialized_size
};

static rosidl_message_type_support_t _TrafficSign__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TrafficSign__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace autodrive_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_autodrive_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<autodrive_msgs::msg::TrafficSign>()
{
  return &autodrive_msgs::msg::typesupport_fastrtps_cpp::_TrafficSign__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, autodrive_msgs, msg, TrafficSign)() {
  return &autodrive_msgs::msg::typesupport_fastrtps_cpp::_TrafficSign__handle;
}

#ifdef __cplusplus
}
#endif
