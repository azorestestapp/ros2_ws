// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from autodrive_msgs:msg/Detection.idl
// generated code does not contain a copyright notice
#include "autodrive_msgs/msg/detail/detection__rosidl_typesupport_fastrtps_cpp.hpp"
#include "autodrive_msgs/msg/detail/detection__struct.hpp"

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
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

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
bool cdr_serialize(
  const autodrive_msgs::msg::DynamicObstacle &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  autodrive_msgs::msg::DynamicObstacle &);
size_t get_serialized_size(
  const autodrive_msgs::msg::DynamicObstacle &,
  size_t current_alignment);
size_t
max_serialized_size_DynamicObstacle(
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
bool cdr_serialize(
  const autodrive_msgs::msg::StaticObstacle &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  autodrive_msgs::msg::StaticObstacle &);
size_t get_serialized_size(
  const autodrive_msgs::msg::StaticObstacle &,
  size_t current_alignment);
size_t
max_serialized_size_StaticObstacle(
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
bool cdr_serialize(
  const autodrive_msgs::msg::RailroadCrossing &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  autodrive_msgs::msg::RailroadCrossing &);
size_t get_serialized_size(
  const autodrive_msgs::msg::RailroadCrossing &,
  size_t current_alignment);
size_t
max_serialized_size_RailroadCrossing(
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
bool cdr_serialize(
  const autodrive_msgs::msg::TrafficLight &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  autodrive_msgs::msg::TrafficLight &);
size_t get_serialized_size(
  const autodrive_msgs::msg::TrafficLight &,
  size_t current_alignment);
size_t
max_serialized_size_TrafficLight(
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
bool cdr_serialize(
  const autodrive_msgs::msg::TrafficSign &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  autodrive_msgs::msg::TrafficSign &);
size_t get_serialized_size(
  const autodrive_msgs::msg::TrafficSign &,
  size_t current_alignment);
size_t
max_serialized_size_TrafficSign(
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
bool cdr_serialize(
  const autodrive_msgs::msg::SpeedLimit &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  autodrive_msgs::msg::SpeedLimit &);
size_t get_serialized_size(
  const autodrive_msgs::msg::SpeedLimit &,
  size_t current_alignment);
size_t
max_serialized_size_SpeedLimit(
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
bool cdr_serialize(
  const autodrive_msgs::msg::Stopline &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  autodrive_msgs::msg::Stopline &);
size_t get_serialized_size(
  const autodrive_msgs::msg::Stopline &,
  size_t current_alignment);
size_t
max_serialized_size_Stopline(
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
  const autodrive_msgs::msg::Detection & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: detection
  {
    size_t size = ros_message.detection.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      autodrive_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.detection[i],
        cdr);
    }
  }
  // Member: dynamic_obstacles
  {
    size_t size = ros_message.dynamic_obstacles.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      autodrive_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.dynamic_obstacles[i],
        cdr);
    }
  }
  // Member: static_obstacles
  {
    size_t size = ros_message.static_obstacles.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      autodrive_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.static_obstacles[i],
        cdr);
    }
  }
  // Member: railroad_crossings
  {
    size_t size = ros_message.railroad_crossings.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      autodrive_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.railroad_crossings[i],
        cdr);
    }
  }
  // Member: traffic_lights
  {
    size_t size = ros_message.traffic_lights.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      autodrive_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.traffic_lights[i],
        cdr);
    }
  }
  // Member: traffic_signs
  {
    size_t size = ros_message.traffic_signs.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      autodrive_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.traffic_signs[i],
        cdr);
    }
  }
  // Member: speed_limits
  {
    size_t size = ros_message.speed_limits.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      autodrive_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.speed_limits[i],
        cdr);
    }
  }
  // Member: stop_lines
  {
    size_t size = ros_message.stop_lines.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      autodrive_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.stop_lines[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autodrive_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  autodrive_msgs::msg::Detection & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: detection
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.detection.resize(size);
    for (size_t i = 0; i < size; i++) {
      autodrive_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.detection[i]);
    }
  }

  // Member: dynamic_obstacles
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.dynamic_obstacles.resize(size);
    for (size_t i = 0; i < size; i++) {
      autodrive_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.dynamic_obstacles[i]);
    }
  }

  // Member: static_obstacles
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.static_obstacles.resize(size);
    for (size_t i = 0; i < size; i++) {
      autodrive_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.static_obstacles[i]);
    }
  }

  // Member: railroad_crossings
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.railroad_crossings.resize(size);
    for (size_t i = 0; i < size; i++) {
      autodrive_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.railroad_crossings[i]);
    }
  }

  // Member: traffic_lights
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.traffic_lights.resize(size);
    for (size_t i = 0; i < size; i++) {
      autodrive_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.traffic_lights[i]);
    }
  }

  // Member: traffic_signs
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.traffic_signs.resize(size);
    for (size_t i = 0; i < size; i++) {
      autodrive_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.traffic_signs[i]);
    }
  }

  // Member: speed_limits
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.speed_limits.resize(size);
    for (size_t i = 0; i < size; i++) {
      autodrive_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.speed_limits[i]);
    }
  }

  // Member: stop_lines
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.stop_lines.resize(size);
    for (size_t i = 0; i < size; i++) {
      autodrive_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.stop_lines[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autodrive_msgs
get_serialized_size(
  const autodrive_msgs::msg::Detection & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: detection
  {
    size_t array_size = ros_message.detection.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        autodrive_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.detection[index], current_alignment);
    }
  }
  // Member: dynamic_obstacles
  {
    size_t array_size = ros_message.dynamic_obstacles.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        autodrive_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.dynamic_obstacles[index], current_alignment);
    }
  }
  // Member: static_obstacles
  {
    size_t array_size = ros_message.static_obstacles.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        autodrive_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.static_obstacles[index], current_alignment);
    }
  }
  // Member: railroad_crossings
  {
    size_t array_size = ros_message.railroad_crossings.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        autodrive_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.railroad_crossings[index], current_alignment);
    }
  }
  // Member: traffic_lights
  {
    size_t array_size = ros_message.traffic_lights.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        autodrive_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.traffic_lights[index], current_alignment);
    }
  }
  // Member: traffic_signs
  {
    size_t array_size = ros_message.traffic_signs.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        autodrive_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.traffic_signs[index], current_alignment);
    }
  }
  // Member: speed_limits
  {
    size_t array_size = ros_message.speed_limits.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        autodrive_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.speed_limits[index], current_alignment);
    }
  }
  // Member: stop_lines
  {
    size_t array_size = ros_message.stop_lines.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        autodrive_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.stop_lines[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_autodrive_msgs
max_serialized_size_Detection(
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


  // Member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: detection
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


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

  // Member: dynamic_obstacles
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        autodrive_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_DynamicObstacle(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: static_obstacles
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        autodrive_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_StaticObstacle(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: railroad_crossings
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        autodrive_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_RailroadCrossing(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: traffic_lights
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        autodrive_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_TrafficLight(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: traffic_signs
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        autodrive_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_TrafficSign(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: speed_limits
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        autodrive_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_SpeedLimit(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: stop_lines
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        autodrive_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Stopline(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = autodrive_msgs::msg::Detection;
    is_plain =
      (
      offsetof(DataType, stop_lines) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Detection__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const autodrive_msgs::msg::Detection *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Detection__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<autodrive_msgs::msg::Detection *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Detection__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const autodrive_msgs::msg::Detection *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Detection__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Detection(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Detection__callbacks = {
  "autodrive_msgs::msg",
  "Detection",
  _Detection__cdr_serialize,
  _Detection__cdr_deserialize,
  _Detection__get_serialized_size,
  _Detection__max_serialized_size
};

static rosidl_message_type_support_t _Detection__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Detection__callbacks,
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
get_message_type_support_handle<autodrive_msgs::msg::Detection>()
{
  return &autodrive_msgs::msg::typesupport_fastrtps_cpp::_Detection__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, autodrive_msgs, msg, Detection)() {
  return &autodrive_msgs::msg::typesupport_fastrtps_cpp::_Detection__handle;
}

#ifdef __cplusplus
}
#endif
