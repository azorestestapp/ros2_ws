// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autodrive_msgs:msg/MPCControl.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__MPC_CONTROL__TRAITS_HPP_
#define AUTODRIVE_MSGS__MSG__DETAIL__MPC_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autodrive_msgs/msg/detail/mpc_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace autodrive_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MPCControl & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: duration
  {
    out << "duration: ";
    rosidl_generator_traits::value_to_yaml(msg.duration, out);
    out << ", ";
  }

  // member: steering_angle_1
  {
    out << "steering_angle_1: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_angle_1, out);
    out << ", ";
  }

  // member: steering_angle_2
  {
    out << "steering_angle_2: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_angle_2, out);
    out << ", ";
  }

  // member: steering_angle_3
  {
    out << "steering_angle_3: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_angle_3, out);
    out << ", ";
  }

  // member: accel_1
  {
    out << "accel_1: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_1, out);
    out << ", ";
  }

  // member: accel_2
  {
    out << "accel_2: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_2, out);
    out << ", ";
  }

  // member: accel_3
  {
    out << "accel_3: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_3, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MPCControl & msg,
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

  // member: duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration: ";
    rosidl_generator_traits::value_to_yaml(msg.duration, out);
    out << "\n";
  }

  // member: steering_angle_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering_angle_1: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_angle_1, out);
    out << "\n";
  }

  // member: steering_angle_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering_angle_2: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_angle_2, out);
    out << "\n";
  }

  // member: steering_angle_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering_angle_3: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_angle_3, out);
    out << "\n";
  }

  // member: accel_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_1: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_1, out);
    out << "\n";
  }

  // member: accel_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_2: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_2, out);
    out << "\n";
  }

  // member: accel_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_3: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_3, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MPCControl & msg, bool use_flow_style = false)
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
  const autodrive_msgs::msg::MPCControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  autodrive_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autodrive_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autodrive_msgs::msg::MPCControl & msg)
{
  return autodrive_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autodrive_msgs::msg::MPCControl>()
{
  return "autodrive_msgs::msg::MPCControl";
}

template<>
inline const char * name<autodrive_msgs::msg::MPCControl>()
{
  return "autodrive_msgs/msg/MPCControl";
}

template<>
struct has_fixed_size<autodrive_msgs::msg::MPCControl>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<autodrive_msgs::msg::MPCControl>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<autodrive_msgs::msg::MPCControl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__MPC_CONTROL__TRAITS_HPP_
