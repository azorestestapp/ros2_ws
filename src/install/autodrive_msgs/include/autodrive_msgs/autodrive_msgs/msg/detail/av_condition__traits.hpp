// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autodrive_msgs:msg/AVCondition.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__AV_CONDITION__TRAITS_HPP_
#define AUTODRIVE_MSGS__MSG__DETAIL__AV_CONDITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autodrive_msgs/msg/detail/av_condition__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace autodrive_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AVCondition & msg,
  std::ostream & out)
{
  out << "{";
  // member: condition
  {
    out << "condition: ";
    rosidl_generator_traits::value_to_yaml(msg.condition, out);
    out << ", ";
  }

  // member: passed
  {
    out << "passed: ";
    rosidl_generator_traits::value_to_yaml(msg.passed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AVCondition & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: condition
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "condition: ";
    rosidl_generator_traits::value_to_yaml(msg.condition, out);
    out << "\n";
  }

  // member: passed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "passed: ";
    rosidl_generator_traits::value_to_yaml(msg.passed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AVCondition & msg, bool use_flow_style = false)
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
  const autodrive_msgs::msg::AVCondition & msg,
  std::ostream & out, size_t indentation = 0)
{
  autodrive_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autodrive_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autodrive_msgs::msg::AVCondition & msg)
{
  return autodrive_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autodrive_msgs::msg::AVCondition>()
{
  return "autodrive_msgs::msg::AVCondition";
}

template<>
inline const char * name<autodrive_msgs::msg::AVCondition>()
{
  return "autodrive_msgs/msg/AVCondition";
}

template<>
struct has_fixed_size<autodrive_msgs::msg::AVCondition>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autodrive_msgs::msg::AVCondition>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autodrive_msgs::msg::AVCondition>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__AV_CONDITION__TRAITS_HPP_
