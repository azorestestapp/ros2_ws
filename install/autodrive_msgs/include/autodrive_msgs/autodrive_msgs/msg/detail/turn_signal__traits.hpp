// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autodrive_msgs:msg/TurnSignal.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__TURN_SIGNAL__TRAITS_HPP_
#define AUTODRIVE_MSGS__MSG__DETAIL__TURN_SIGNAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autodrive_msgs/msg/detail/turn_signal__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace autodrive_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TurnSignal & msg,
  std::ostream & out)
{
  out << "{";
  // member: signal
  {
    out << "signal: ";
    rosidl_generator_traits::value_to_yaml(msg.signal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TurnSignal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: signal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "signal: ";
    rosidl_generator_traits::value_to_yaml(msg.signal, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TurnSignal & msg, bool use_flow_style = false)
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
  const autodrive_msgs::msg::TurnSignal & msg,
  std::ostream & out, size_t indentation = 0)
{
  autodrive_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autodrive_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autodrive_msgs::msg::TurnSignal & msg)
{
  return autodrive_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autodrive_msgs::msg::TurnSignal>()
{
  return "autodrive_msgs::msg::TurnSignal";
}

template<>
inline const char * name<autodrive_msgs::msg::TurnSignal>()
{
  return "autodrive_msgs/msg/TurnSignal";
}

template<>
struct has_fixed_size<autodrive_msgs::msg::TurnSignal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<autodrive_msgs::msg::TurnSignal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<autodrive_msgs::msg::TurnSignal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__TURN_SIGNAL__TRAITS_HPP_
