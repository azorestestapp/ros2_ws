// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autodrive_msgs:msg/WheelVelocities.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__WHEEL_VELOCITIES__TRAITS_HPP_
#define AUTODRIVE_MSGS__MSG__DETAIL__WHEEL_VELOCITIES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autodrive_msgs/msg/detail/wheel_velocities__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace autodrive_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WheelVelocities & msg,
  std::ostream & out)
{
  out << "{";
  // member: front_left_velocity
  {
    out << "front_left_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.front_left_velocity, out);
    out << ", ";
  }

  // member: front_right_velocity
  {
    out << "front_right_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.front_right_velocity, out);
    out << ", ";
  }

  // member: rear_left_velocity
  {
    out << "rear_left_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_left_velocity, out);
    out << ", ";
  }

  // member: rear_right_velocity
  {
    out << "rear_right_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_right_velocity, out);
    out << ", ";
  }

  // member: steering_angle
  {
    out << "steering_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_angle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WheelVelocities & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: front_left_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_left_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.front_left_velocity, out);
    out << "\n";
  }

  // member: front_right_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_right_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.front_right_velocity, out);
    out << "\n";
  }

  // member: rear_left_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_left_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_left_velocity, out);
    out << "\n";
  }

  // member: rear_right_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_right_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_right_velocity, out);
    out << "\n";
  }

  // member: steering_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_angle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WheelVelocities & msg, bool use_flow_style = false)
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
  const autodrive_msgs::msg::WheelVelocities & msg,
  std::ostream & out, size_t indentation = 0)
{
  autodrive_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autodrive_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autodrive_msgs::msg::WheelVelocities & msg)
{
  return autodrive_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autodrive_msgs::msg::WheelVelocities>()
{
  return "autodrive_msgs::msg::WheelVelocities";
}

template<>
inline const char * name<autodrive_msgs::msg::WheelVelocities>()
{
  return "autodrive_msgs/msg/WheelVelocities";
}

template<>
struct has_fixed_size<autodrive_msgs::msg::WheelVelocities>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<autodrive_msgs::msg::WheelVelocities>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<autodrive_msgs::msg::WheelVelocities>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__WHEEL_VELOCITIES__TRAITS_HPP_
