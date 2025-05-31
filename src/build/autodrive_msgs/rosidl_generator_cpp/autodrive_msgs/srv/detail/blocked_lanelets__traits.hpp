// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autodrive_msgs:srv/BlockedLanelets.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__SRV__DETAIL__BLOCKED_LANELETS__TRAITS_HPP_
#define AUTODRIVE_MSGS__SRV__DETAIL__BLOCKED_LANELETS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autodrive_msgs/srv/detail/blocked_lanelets__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace autodrive_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const BlockedLanelets_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: blocked
  {
    if (msg.blocked.size() == 0) {
      out << "blocked: []";
    } else {
      out << "blocked: [";
      size_t pending_items = msg.blocked.size();
      for (auto item : msg.blocked) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const BlockedLanelets_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: blocked
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.blocked.size() == 0) {
      out << "blocked: []\n";
    } else {
      out << "blocked:\n";
      for (auto item : msg.blocked) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BlockedLanelets_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace autodrive_msgs

namespace rosidl_generator_traits
{

[[deprecated("use autodrive_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const autodrive_msgs::srv::BlockedLanelets_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  autodrive_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autodrive_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const autodrive_msgs::srv::BlockedLanelets_Request & msg)
{
  return autodrive_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<autodrive_msgs::srv::BlockedLanelets_Request>()
{
  return "autodrive_msgs::srv::BlockedLanelets_Request";
}

template<>
inline const char * name<autodrive_msgs::srv::BlockedLanelets_Request>()
{
  return "autodrive_msgs/srv/BlockedLanelets_Request";
}

template<>
struct has_fixed_size<autodrive_msgs::srv::BlockedLanelets_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autodrive_msgs::srv::BlockedLanelets_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autodrive_msgs::srv::BlockedLanelets_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace autodrive_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const BlockedLanelets_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: error
  {
    out << "error: ";
    rosidl_generator_traits::value_to_yaml(msg.error, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BlockedLanelets_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error: ";
    rosidl_generator_traits::value_to_yaml(msg.error, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BlockedLanelets_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace autodrive_msgs

namespace rosidl_generator_traits
{

[[deprecated("use autodrive_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const autodrive_msgs::srv::BlockedLanelets_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  autodrive_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autodrive_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const autodrive_msgs::srv::BlockedLanelets_Response & msg)
{
  return autodrive_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<autodrive_msgs::srv::BlockedLanelets_Response>()
{
  return "autodrive_msgs::srv::BlockedLanelets_Response";
}

template<>
inline const char * name<autodrive_msgs::srv::BlockedLanelets_Response>()
{
  return "autodrive_msgs/srv/BlockedLanelets_Response";
}

template<>
struct has_fixed_size<autodrive_msgs::srv::BlockedLanelets_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<autodrive_msgs::srv::BlockedLanelets_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<autodrive_msgs::srv::BlockedLanelets_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autodrive_msgs::srv::BlockedLanelets>()
{
  return "autodrive_msgs::srv::BlockedLanelets";
}

template<>
inline const char * name<autodrive_msgs::srv::BlockedLanelets>()
{
  return "autodrive_msgs/srv/BlockedLanelets";
}

template<>
struct has_fixed_size<autodrive_msgs::srv::BlockedLanelets>
  : std::integral_constant<
    bool,
    has_fixed_size<autodrive_msgs::srv::BlockedLanelets_Request>::value &&
    has_fixed_size<autodrive_msgs::srv::BlockedLanelets_Response>::value
  >
{
};

template<>
struct has_bounded_size<autodrive_msgs::srv::BlockedLanelets>
  : std::integral_constant<
    bool,
    has_bounded_size<autodrive_msgs::srv::BlockedLanelets_Request>::value &&
    has_bounded_size<autodrive_msgs::srv::BlockedLanelets_Response>::value
  >
{
};

template<>
struct is_service<autodrive_msgs::srv::BlockedLanelets>
  : std::true_type
{
};

template<>
struct is_service_request<autodrive_msgs::srv::BlockedLanelets_Request>
  : std::true_type
{
};

template<>
struct is_service_response<autodrive_msgs::srv::BlockedLanelets_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AUTODRIVE_MSGS__SRV__DETAIL__BLOCKED_LANELETS__TRAITS_HPP_
