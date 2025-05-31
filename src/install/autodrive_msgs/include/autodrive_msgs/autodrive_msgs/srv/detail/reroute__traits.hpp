// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autodrive_msgs:srv/Reroute.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__SRV__DETAIL__REROUTE__TRAITS_HPP_
#define AUTODRIVE_MSGS__SRV__DETAIL__REROUTE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autodrive_msgs/srv/detail/reroute__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace autodrive_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Reroute_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: start_lanelet_id
  {
    if (msg.start_lanelet_id.size() == 0) {
      out << "start_lanelet_id: []";
    } else {
      out << "start_lanelet_id: [";
      size_t pending_items = msg.start_lanelet_id.size();
      for (auto item : msg.start_lanelet_id) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: end_lanelet_id
  {
    if (msg.end_lanelet_id.size() == 0) {
      out << "end_lanelet_id: []";
    } else {
      out << "end_lanelet_id: [";
      size_t pending_items = msg.end_lanelet_id.size();
      for (auto item : msg.end_lanelet_id) {
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
  const Reroute_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: start_lanelet_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.start_lanelet_id.size() == 0) {
      out << "start_lanelet_id: []\n";
    } else {
      out << "start_lanelet_id:\n";
      for (auto item : msg.start_lanelet_id) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: end_lanelet_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.end_lanelet_id.size() == 0) {
      out << "end_lanelet_id: []\n";
    } else {
      out << "end_lanelet_id:\n";
      for (auto item : msg.end_lanelet_id) {
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

inline std::string to_yaml(const Reroute_Request & msg, bool use_flow_style = false)
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
  const autodrive_msgs::srv::Reroute_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  autodrive_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autodrive_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const autodrive_msgs::srv::Reroute_Request & msg)
{
  return autodrive_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<autodrive_msgs::srv::Reroute_Request>()
{
  return "autodrive_msgs::srv::Reroute_Request";
}

template<>
inline const char * name<autodrive_msgs::srv::Reroute_Request>()
{
  return "autodrive_msgs/srv/Reroute_Request";
}

template<>
struct has_fixed_size<autodrive_msgs::srv::Reroute_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autodrive_msgs::srv::Reroute_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autodrive_msgs::srv::Reroute_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace autodrive_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Reroute_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: confirm
  {
    out << "confirm: ";
    rosidl_generator_traits::value_to_yaml(msg.confirm, out);
    out << ", ";
  }

  // member: error
  {
    out << "error: ";
    rosidl_generator_traits::value_to_yaml(msg.error, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Reroute_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: confirm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confirm: ";
    rosidl_generator_traits::value_to_yaml(msg.confirm, out);
    out << "\n";
  }

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

inline std::string to_yaml(const Reroute_Response & msg, bool use_flow_style = false)
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
  const autodrive_msgs::srv::Reroute_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  autodrive_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autodrive_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const autodrive_msgs::srv::Reroute_Response & msg)
{
  return autodrive_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<autodrive_msgs::srv::Reroute_Response>()
{
  return "autodrive_msgs::srv::Reroute_Response";
}

template<>
inline const char * name<autodrive_msgs::srv::Reroute_Response>()
{
  return "autodrive_msgs/srv/Reroute_Response";
}

template<>
struct has_fixed_size<autodrive_msgs::srv::Reroute_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autodrive_msgs::srv::Reroute_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autodrive_msgs::srv::Reroute_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autodrive_msgs::srv::Reroute>()
{
  return "autodrive_msgs::srv::Reroute";
}

template<>
inline const char * name<autodrive_msgs::srv::Reroute>()
{
  return "autodrive_msgs/srv/Reroute";
}

template<>
struct has_fixed_size<autodrive_msgs::srv::Reroute>
  : std::integral_constant<
    bool,
    has_fixed_size<autodrive_msgs::srv::Reroute_Request>::value &&
    has_fixed_size<autodrive_msgs::srv::Reroute_Response>::value
  >
{
};

template<>
struct has_bounded_size<autodrive_msgs::srv::Reroute>
  : std::integral_constant<
    bool,
    has_bounded_size<autodrive_msgs::srv::Reroute_Request>::value &&
    has_bounded_size<autodrive_msgs::srv::Reroute_Response>::value
  >
{
};

template<>
struct is_service<autodrive_msgs::srv::Reroute>
  : std::true_type
{
};

template<>
struct is_service_request<autodrive_msgs::srv::Reroute_Request>
  : std::true_type
{
};

template<>
struct is_service_response<autodrive_msgs::srv::Reroute_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AUTODRIVE_MSGS__SRV__DETAIL__REROUTE__TRAITS_HPP_
