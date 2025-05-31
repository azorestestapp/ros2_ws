// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autodrive_msgs:msg/Directions.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__DIRECTIONS__TRAITS_HPP_
#define AUTODRIVE_MSGS__MSG__DETAIL__DIRECTIONS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autodrive_msgs/msg/detail/directions__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'manoeuvres'
#include "autodrive_msgs/msg/detail/manoeuvre__traits.hpp"

namespace autodrive_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Directions & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: manoeuvres
  {
    if (msg.manoeuvres.size() == 0) {
      out << "manoeuvres: []";
    } else {
      out << "manoeuvres: [";
      size_t pending_items = msg.manoeuvres.size();
      for (auto item : msg.manoeuvres) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Directions & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: manoeuvres
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.manoeuvres.size() == 0) {
      out << "manoeuvres: []\n";
    } else {
      out << "manoeuvres:\n";
      for (auto item : msg.manoeuvres) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Directions & msg, bool use_flow_style = false)
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
  const autodrive_msgs::msg::Directions & msg,
  std::ostream & out, size_t indentation = 0)
{
  autodrive_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autodrive_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autodrive_msgs::msg::Directions & msg)
{
  return autodrive_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autodrive_msgs::msg::Directions>()
{
  return "autodrive_msgs::msg::Directions";
}

template<>
inline const char * name<autodrive_msgs::msg::Directions>()
{
  return "autodrive_msgs/msg/Directions";
}

template<>
struct has_fixed_size<autodrive_msgs::msg::Directions>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autodrive_msgs::msg::Directions>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autodrive_msgs::msg::Directions>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__DIRECTIONS__TRAITS_HPP_
