// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autodrive_msgs:srv/SetDestination.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__SRV__DETAIL__SET_DESTINATION__TRAITS_HPP_
#define AUTODRIVE_MSGS__SRV__DETAIL__SET_DESTINATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autodrive_msgs/srv/detail/set_destination__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace autodrive_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetDestination_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: latitude
  {
    out << "latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude, out);
    out << ", ";
  }

  // member: longitude
  {
    out << "longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude, out);
    out << ", ";
  }

  // member: parking_lot
  {
    out << "parking_lot: ";
    rosidl_generator_traits::value_to_yaml(msg.parking_lot, out);
    out << ", ";
  }

  // member: rand
  {
    out << "rand: ";
    rosidl_generator_traits::value_to_yaml(msg.rand, out);
    out << ", ";
  }

  // member: rand_mindist
  {
    out << "rand_mindist: ";
    rosidl_generator_traits::value_to_yaml(msg.rand_mindist, out);
    out << ", ";
  }

  // member: auto_re
  {
    out << "auto_re: ";
    rosidl_generator_traits::value_to_yaml(msg.auto_re, out);
    out << ", ";
  }

  // member: skip_confirm
  {
    out << "skip_confirm: ";
    rosidl_generator_traits::value_to_yaml(msg.skip_confirm, out);
    out << ", ";
  }

  // member: local_coord
  {
    out << "local_coord: ";
    rosidl_generator_traits::value_to_yaml(msg.local_coord, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetDestination_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: latitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude, out);
    out << "\n";
  }

  // member: longitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude, out);
    out << "\n";
  }

  // member: parking_lot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parking_lot: ";
    rosidl_generator_traits::value_to_yaml(msg.parking_lot, out);
    out << "\n";
  }

  // member: rand
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rand: ";
    rosidl_generator_traits::value_to_yaml(msg.rand, out);
    out << "\n";
  }

  // member: rand_mindist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rand_mindist: ";
    rosidl_generator_traits::value_to_yaml(msg.rand_mindist, out);
    out << "\n";
  }

  // member: auto_re
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "auto_re: ";
    rosidl_generator_traits::value_to_yaml(msg.auto_re, out);
    out << "\n";
  }

  // member: skip_confirm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "skip_confirm: ";
    rosidl_generator_traits::value_to_yaml(msg.skip_confirm, out);
    out << "\n";
  }

  // member: local_coord
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "local_coord: ";
    rosidl_generator_traits::value_to_yaml(msg.local_coord, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetDestination_Request & msg, bool use_flow_style = false)
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
  const autodrive_msgs::srv::SetDestination_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  autodrive_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autodrive_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const autodrive_msgs::srv::SetDestination_Request & msg)
{
  return autodrive_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<autodrive_msgs::srv::SetDestination_Request>()
{
  return "autodrive_msgs::srv::SetDestination_Request";
}

template<>
inline const char * name<autodrive_msgs::srv::SetDestination_Request>()
{
  return "autodrive_msgs/srv/SetDestination_Request";
}

template<>
struct has_fixed_size<autodrive_msgs::srv::SetDestination_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<autodrive_msgs::srv::SetDestination_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<autodrive_msgs::srv::SetDestination_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace autodrive_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetDestination_Response & msg,
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
  const SetDestination_Response & msg,
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

inline std::string to_yaml(const SetDestination_Response & msg, bool use_flow_style = false)
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
  const autodrive_msgs::srv::SetDestination_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  autodrive_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autodrive_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const autodrive_msgs::srv::SetDestination_Response & msg)
{
  return autodrive_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<autodrive_msgs::srv::SetDestination_Response>()
{
  return "autodrive_msgs::srv::SetDestination_Response";
}

template<>
inline const char * name<autodrive_msgs::srv::SetDestination_Response>()
{
  return "autodrive_msgs/srv/SetDestination_Response";
}

template<>
struct has_fixed_size<autodrive_msgs::srv::SetDestination_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<autodrive_msgs::srv::SetDestination_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<autodrive_msgs::srv::SetDestination_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autodrive_msgs::srv::SetDestination>()
{
  return "autodrive_msgs::srv::SetDestination";
}

template<>
inline const char * name<autodrive_msgs::srv::SetDestination>()
{
  return "autodrive_msgs/srv/SetDestination";
}

template<>
struct has_fixed_size<autodrive_msgs::srv::SetDestination>
  : std::integral_constant<
    bool,
    has_fixed_size<autodrive_msgs::srv::SetDestination_Request>::value &&
    has_fixed_size<autodrive_msgs::srv::SetDestination_Response>::value
  >
{
};

template<>
struct has_bounded_size<autodrive_msgs::srv::SetDestination>
  : std::integral_constant<
    bool,
    has_bounded_size<autodrive_msgs::srv::SetDestination_Request>::value &&
    has_bounded_size<autodrive_msgs::srv::SetDestination_Response>::value
  >
{
};

template<>
struct is_service<autodrive_msgs::srv::SetDestination>
  : std::true_type
{
};

template<>
struct is_service_request<autodrive_msgs::srv::SetDestination_Request>
  : std::true_type
{
};

template<>
struct is_service_response<autodrive_msgs::srv::SetDestination_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AUTODRIVE_MSGS__SRV__DETAIL__SET_DESTINATION__TRAITS_HPP_
