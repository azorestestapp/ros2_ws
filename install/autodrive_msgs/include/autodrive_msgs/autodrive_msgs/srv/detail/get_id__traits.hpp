// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autodrive_msgs:srv/GetId.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__SRV__DETAIL__GET_ID__TRAITS_HPP_
#define AUTODRIVE_MSGS__SRV__DETAIL__GET_ID__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autodrive_msgs/srv/detail/get_id__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace autodrive_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetId_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: east
  {
    if (msg.east.size() == 0) {
      out << "east: []";
    } else {
      out << "east: [";
      size_t pending_items = msg.east.size();
      for (auto item : msg.east) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: north
  {
    if (msg.north.size() == 0) {
      out << "north: []";
    } else {
      out << "north: [";
      size_t pending_items = msg.north.size();
      for (auto item : msg.north) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: radius
  {
    if (msg.radius.size() == 0) {
      out << "radius: []";
    } else {
      out << "radius: [";
      size_t pending_items = msg.radius.size();
      for (auto item : msg.radius) {
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
  const GetId_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: east
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.east.size() == 0) {
      out << "east: []\n";
    } else {
      out << "east:\n";
      for (auto item : msg.east) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: north
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.north.size() == 0) {
      out << "north: []\n";
    } else {
      out << "north:\n";
      for (auto item : msg.north) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.radius.size() == 0) {
      out << "radius: []\n";
    } else {
      out << "radius:\n";
      for (auto item : msg.radius) {
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

inline std::string to_yaml(const GetId_Request & msg, bool use_flow_style = false)
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
  const autodrive_msgs::srv::GetId_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  autodrive_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autodrive_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const autodrive_msgs::srv::GetId_Request & msg)
{
  return autodrive_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<autodrive_msgs::srv::GetId_Request>()
{
  return "autodrive_msgs::srv::GetId_Request";
}

template<>
inline const char * name<autodrive_msgs::srv::GetId_Request>()
{
  return "autodrive_msgs/srv/GetId_Request";
}

template<>
struct has_fixed_size<autodrive_msgs::srv::GetId_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autodrive_msgs::srv::GetId_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autodrive_msgs::srv::GetId_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace autodrive_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetId_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: error
  {
    out << "error: ";
    rosidl_generator_traits::value_to_yaml(msg.error, out);
    out << ", ";
  }

  // member: lanelet_id
  {
    if (msg.lanelet_id.size() == 0) {
      out << "lanelet_id: []";
    } else {
      out << "lanelet_id: [";
      size_t pending_items = msg.lanelet_id.size();
      for (auto item : msg.lanelet_id) {
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
  const GetId_Response & msg,
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

  // member: lanelet_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lanelet_id.size() == 0) {
      out << "lanelet_id: []\n";
    } else {
      out << "lanelet_id:\n";
      for (auto item : msg.lanelet_id) {
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

inline std::string to_yaml(const GetId_Response & msg, bool use_flow_style = false)
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
  const autodrive_msgs::srv::GetId_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  autodrive_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autodrive_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const autodrive_msgs::srv::GetId_Response & msg)
{
  return autodrive_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<autodrive_msgs::srv::GetId_Response>()
{
  return "autodrive_msgs::srv::GetId_Response";
}

template<>
inline const char * name<autodrive_msgs::srv::GetId_Response>()
{
  return "autodrive_msgs/srv/GetId_Response";
}

template<>
struct has_fixed_size<autodrive_msgs::srv::GetId_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autodrive_msgs::srv::GetId_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autodrive_msgs::srv::GetId_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autodrive_msgs::srv::GetId>()
{
  return "autodrive_msgs::srv::GetId";
}

template<>
inline const char * name<autodrive_msgs::srv::GetId>()
{
  return "autodrive_msgs/srv/GetId";
}

template<>
struct has_fixed_size<autodrive_msgs::srv::GetId>
  : std::integral_constant<
    bool,
    has_fixed_size<autodrive_msgs::srv::GetId_Request>::value &&
    has_fixed_size<autodrive_msgs::srv::GetId_Response>::value
  >
{
};

template<>
struct has_bounded_size<autodrive_msgs::srv::GetId>
  : std::integral_constant<
    bool,
    has_bounded_size<autodrive_msgs::srv::GetId_Request>::value &&
    has_bounded_size<autodrive_msgs::srv::GetId_Response>::value
  >
{
};

template<>
struct is_service<autodrive_msgs::srv::GetId>
  : std::true_type
{
};

template<>
struct is_service_request<autodrive_msgs::srv::GetId_Request>
  : std::true_type
{
};

template<>
struct is_service_response<autodrive_msgs::srv::GetId_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AUTODRIVE_MSGS__SRV__DETAIL__GET_ID__TRAITS_HPP_
