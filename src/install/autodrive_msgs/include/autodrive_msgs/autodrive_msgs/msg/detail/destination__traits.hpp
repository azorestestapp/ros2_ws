// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autodrive_msgs:msg/Destination.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__DESTINATION__TRAITS_HPP_
#define AUTODRIVE_MSGS__MSG__DETAIL__DESTINATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autodrive_msgs/msg/detail/destination__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace autodrive_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Destination & msg,
  std::ostream & out)
{
  out << "{";
  // member: east
  {
    out << "east: ";
    rosidl_generator_traits::value_to_yaml(msg.east, out);
    out << ", ";
  }

  // member: north
  {
    out << "north: ";
    rosidl_generator_traits::value_to_yaml(msg.north, out);
    out << ", ";
  }

  // member: parking
  {
    out << "parking: ";
    rosidl_generator_traits::value_to_yaml(msg.parking, out);
    out << ", ";
  }

  // member: multiroute
  {
    out << "multiroute: ";
    rosidl_generator_traits::value_to_yaml(msg.multiroute, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Destination & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: east
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "east: ";
    rosidl_generator_traits::value_to_yaml(msg.east, out);
    out << "\n";
  }

  // member: north
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "north: ";
    rosidl_generator_traits::value_to_yaml(msg.north, out);
    out << "\n";
  }

  // member: parking
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parking: ";
    rosidl_generator_traits::value_to_yaml(msg.parking, out);
    out << "\n";
  }

  // member: multiroute
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "multiroute: ";
    rosidl_generator_traits::value_to_yaml(msg.multiroute, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Destination & msg, bool use_flow_style = false)
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
  const autodrive_msgs::msg::Destination & msg,
  std::ostream & out, size_t indentation = 0)
{
  autodrive_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autodrive_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autodrive_msgs::msg::Destination & msg)
{
  return autodrive_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autodrive_msgs::msg::Destination>()
{
  return "autodrive_msgs::msg::Destination";
}

template<>
inline const char * name<autodrive_msgs::msg::Destination>()
{
  return "autodrive_msgs/msg/Destination";
}

template<>
struct has_fixed_size<autodrive_msgs::msg::Destination>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<autodrive_msgs::msg::Destination>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<autodrive_msgs::msg::Destination>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__DESTINATION__TRAITS_HPP_
