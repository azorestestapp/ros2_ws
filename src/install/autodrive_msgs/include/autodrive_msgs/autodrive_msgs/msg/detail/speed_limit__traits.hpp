// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autodrive_msgs:msg/SpeedLimit.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__SPEED_LIMIT__TRAITS_HPP_
#define AUTODRIVE_MSGS__MSG__DETAIL__SPEED_LIMIT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autodrive_msgs/msg/detail/speed_limit__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'detection'
#include "autodrive_msgs/msg/detail/general_detection__traits.hpp"

namespace autodrive_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SpeedLimit & msg,
  std::ostream & out)
{
  out << "{";
  // member: detection
  {
    out << "detection: ";
    to_flow_style_yaml(msg.detection, out);
    out << ", ";
  }

  // member: max_speed
  {
    out << "max_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.max_speed, out);
    out << ", ";
  }

  // member: min_speed
  {
    out << "min_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.min_speed, out);
    out << ", ";
  }

  // member: speed_limit_confidence
  {
    out << "speed_limit_confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_limit_confidence, out);
    out << ", ";
  }

  // member: unit
  {
    out << "unit: ";
    rosidl_generator_traits::value_to_yaml(msg.unit, out);
    out << ", ";
  }

  // member: speed_limit_unit_confidence
  {
    out << "speed_limit_unit_confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_limit_unit_confidence, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SpeedLimit & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: detection
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "detection:\n";
    to_block_style_yaml(msg.detection, out, indentation + 2);
  }

  // member: max_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.max_speed, out);
    out << "\n";
  }

  // member: min_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.min_speed, out);
    out << "\n";
  }

  // member: speed_limit_confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_limit_confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_limit_confidence, out);
    out << "\n";
  }

  // member: unit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "unit: ";
    rosidl_generator_traits::value_to_yaml(msg.unit, out);
    out << "\n";
  }

  // member: speed_limit_unit_confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_limit_unit_confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_limit_unit_confidence, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SpeedLimit & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace autodrive_msgs

namespace rosidl_generator_traits
{

[[deprecated("use autodrive_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const autodrive_msgs::msg::SpeedLimit & msg,
  std::ostream & out, size_t indentation = 0)
{
  autodrive_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autodrive_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autodrive_msgs::msg::SpeedLimit & msg)
{
  return autodrive_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autodrive_msgs::msg::SpeedLimit>()
{
  return "autodrive_msgs::msg::SpeedLimit";
}

template<>
inline const char * name<autodrive_msgs::msg::SpeedLimit>()
{
  return "autodrive_msgs/msg/SpeedLimit";
}

template<>
struct has_fixed_size<autodrive_msgs::msg::SpeedLimit>
  : std::integral_constant<bool, has_fixed_size<autodrive_msgs::msg::GeneralDetection>::value> {};

template<>
struct has_bounded_size<autodrive_msgs::msg::SpeedLimit>
  : std::integral_constant<bool, has_bounded_size<autodrive_msgs::msg::GeneralDetection>::value> {};

template<>
struct is_message<autodrive_msgs::msg::SpeedLimit>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__SPEED_LIMIT__TRAITS_HPP_
