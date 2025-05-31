// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autodrive_msgs:srv/AttributeDictionary.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__SRV__DETAIL__ATTRIBUTE_DICTIONARY__TRAITS_HPP_
#define AUTODRIVE_MSGS__SRV__DETAIL__ATTRIBUTE_DICTIONARY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autodrive_msgs/srv/detail/attribute_dictionary__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace autodrive_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const AttributeDictionary_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: attribute_key
  {
    out << "attribute_key: ";
    rosidl_generator_traits::value_to_yaml(msg.attribute_key, out);
    out << ", ";
  }

  // member: attribute_val
  {
    out << "attribute_val: ";
    rosidl_generator_traits::value_to_yaml(msg.attribute_val, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AttributeDictionary_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: attribute_key
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "attribute_key: ";
    rosidl_generator_traits::value_to_yaml(msg.attribute_key, out);
    out << "\n";
  }

  // member: attribute_val
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "attribute_val: ";
    rosidl_generator_traits::value_to_yaml(msg.attribute_val, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AttributeDictionary_Request & msg, bool use_flow_style = false)
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
  const autodrive_msgs::srv::AttributeDictionary_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  autodrive_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autodrive_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const autodrive_msgs::srv::AttributeDictionary_Request & msg)
{
  return autodrive_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<autodrive_msgs::srv::AttributeDictionary_Request>()
{
  return "autodrive_msgs::srv::AttributeDictionary_Request";
}

template<>
inline const char * name<autodrive_msgs::srv::AttributeDictionary_Request>()
{
  return "autodrive_msgs/srv/AttributeDictionary_Request";
}

template<>
struct has_fixed_size<autodrive_msgs::srv::AttributeDictionary_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autodrive_msgs::srv::AttributeDictionary_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autodrive_msgs::srv::AttributeDictionary_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace autodrive_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const AttributeDictionary_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: lanelet_ids
  {
    if (msg.lanelet_ids.size() == 0) {
      out << "lanelet_ids: []";
    } else {
      out << "lanelet_ids: [";
      size_t pending_items = msg.lanelet_ids.size();
      for (auto item : msg.lanelet_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: error_msg
  {
    out << "error_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.error_msg, out);
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
  const AttributeDictionary_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: lanelet_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lanelet_ids.size() == 0) {
      out << "lanelet_ids: []\n";
    } else {
      out << "lanelet_ids:\n";
      for (auto item : msg.lanelet_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: error_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.error_msg, out);
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

inline std::string to_yaml(const AttributeDictionary_Response & msg, bool use_flow_style = false)
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
  const autodrive_msgs::srv::AttributeDictionary_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  autodrive_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autodrive_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const autodrive_msgs::srv::AttributeDictionary_Response & msg)
{
  return autodrive_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<autodrive_msgs::srv::AttributeDictionary_Response>()
{
  return "autodrive_msgs::srv::AttributeDictionary_Response";
}

template<>
inline const char * name<autodrive_msgs::srv::AttributeDictionary_Response>()
{
  return "autodrive_msgs/srv/AttributeDictionary_Response";
}

template<>
struct has_fixed_size<autodrive_msgs::srv::AttributeDictionary_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autodrive_msgs::srv::AttributeDictionary_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autodrive_msgs::srv::AttributeDictionary_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autodrive_msgs::srv::AttributeDictionary>()
{
  return "autodrive_msgs::srv::AttributeDictionary";
}

template<>
inline const char * name<autodrive_msgs::srv::AttributeDictionary>()
{
  return "autodrive_msgs/srv/AttributeDictionary";
}

template<>
struct has_fixed_size<autodrive_msgs::srv::AttributeDictionary>
  : std::integral_constant<
    bool,
    has_fixed_size<autodrive_msgs::srv::AttributeDictionary_Request>::value &&
    has_fixed_size<autodrive_msgs::srv::AttributeDictionary_Response>::value
  >
{
};

template<>
struct has_bounded_size<autodrive_msgs::srv::AttributeDictionary>
  : std::integral_constant<
    bool,
    has_bounded_size<autodrive_msgs::srv::AttributeDictionary_Request>::value &&
    has_bounded_size<autodrive_msgs::srv::AttributeDictionary_Response>::value
  >
{
};

template<>
struct is_service<autodrive_msgs::srv::AttributeDictionary>
  : std::true_type
{
};

template<>
struct is_service_request<autodrive_msgs::srv::AttributeDictionary_Request>
  : std::true_type
{
};

template<>
struct is_service_response<autodrive_msgs::srv::AttributeDictionary_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AUTODRIVE_MSGS__SRV__DETAIL__ATTRIBUTE_DICTIONARY__TRAITS_HPP_
