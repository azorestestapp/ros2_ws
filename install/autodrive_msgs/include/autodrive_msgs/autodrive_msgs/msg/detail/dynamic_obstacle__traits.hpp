// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autodrive_msgs:msg/DynamicObstacle.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__DYNAMIC_OBSTACLE__TRAITS_HPP_
#define AUTODRIVE_MSGS__MSG__DETAIL__DYNAMIC_OBSTACLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autodrive_msgs/msg/detail/dynamic_obstacle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'detection'
#include "autodrive_msgs/msg/detail/general_detection__traits.hpp"

namespace autodrive_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DynamicObstacle & msg,
  std::ostream & out)
{
  out << "{";
  // member: detection
  {
    out << "detection: ";
    to_flow_style_yaml(msg.detection, out);
    out << ", ";
  }

  // member: obstacle_type
  {
    out << "obstacle_type: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_type, out);
    out << ", ";
  }

  // member: dynamic_confidence
  {
    out << "dynamic_confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.dynamic_confidence, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DynamicObstacle & msg,
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

  // member: obstacle_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacle_type: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_type, out);
    out << "\n";
  }

  // member: dynamic_confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dynamic_confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.dynamic_confidence, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DynamicObstacle & msg, bool use_flow_style = false)
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
  const autodrive_msgs::msg::DynamicObstacle & msg,
  std::ostream & out, size_t indentation = 0)
{
  autodrive_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autodrive_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autodrive_msgs::msg::DynamicObstacle & msg)
{
  return autodrive_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autodrive_msgs::msg::DynamicObstacle>()
{
  return "autodrive_msgs::msg::DynamicObstacle";
}

template<>
inline const char * name<autodrive_msgs::msg::DynamicObstacle>()
{
  return "autodrive_msgs/msg/DynamicObstacle";
}

template<>
struct has_fixed_size<autodrive_msgs::msg::DynamicObstacle>
  : std::integral_constant<bool, has_fixed_size<autodrive_msgs::msg::GeneralDetection>::value> {};

template<>
struct has_bounded_size<autodrive_msgs::msg::DynamicObstacle>
  : std::integral_constant<bool, has_bounded_size<autodrive_msgs::msg::GeneralDetection>::value> {};

template<>
struct is_message<autodrive_msgs::msg::DynamicObstacle>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__DYNAMIC_OBSTACLE__TRAITS_HPP_
