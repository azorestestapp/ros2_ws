// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autodrive_msgs:msg/Manoeuvre.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__MANOEUVRE__TRAITS_HPP_
#define AUTODRIVE_MSGS__MSG__DETAIL__MANOEUVRE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autodrive_msgs/msg/detail/manoeuvre__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'direction'
#include "autodrive_msgs/msg/detail/direction__traits.hpp"

namespace autodrive_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Manoeuvre & msg,
  std::ostream & out)
{
  out << "{";
  // member: direction
  {
    out << "direction: ";
    to_flow_style_yaml(msg.direction, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Manoeuvre & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "direction:\n";
    to_block_style_yaml(msg.direction, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Manoeuvre & msg, bool use_flow_style = false)
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
  const autodrive_msgs::msg::Manoeuvre & msg,
  std::ostream & out, size_t indentation = 0)
{
  autodrive_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autodrive_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autodrive_msgs::msg::Manoeuvre & msg)
{
  return autodrive_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autodrive_msgs::msg::Manoeuvre>()
{
  return "autodrive_msgs::msg::Manoeuvre";
}

template<>
inline const char * name<autodrive_msgs::msg::Manoeuvre>()
{
  return "autodrive_msgs/msg/Manoeuvre";
}

template<>
struct has_fixed_size<autodrive_msgs::msg::Manoeuvre>
  : std::integral_constant<bool, has_fixed_size<autodrive_msgs::msg::Direction>::value> {};

template<>
struct has_bounded_size<autodrive_msgs::msg::Manoeuvre>
  : std::integral_constant<bool, has_bounded_size<autodrive_msgs::msg::Direction>::value> {};

template<>
struct is_message<autodrive_msgs::msg::Manoeuvre>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__MANOEUVRE__TRAITS_HPP_
