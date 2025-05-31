// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autodrive_msgs:msg/TrafficSign.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__TRAFFIC_SIGN__TRAITS_HPP_
#define AUTODRIVE_MSGS__MSG__DETAIL__TRAFFIC_SIGN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autodrive_msgs/msg/detail/traffic_sign__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'detection'
#include "autodrive_msgs/msg/detail/general_detection__traits.hpp"

namespace autodrive_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrafficSign & msg,
  std::ostream & out)
{
  out << "{";
  // member: detection
  {
    out << "detection: ";
    to_flow_style_yaml(msg.detection, out);
    out << ", ";
  }

  // member: corresponding_lane
  {
    if (msg.corresponding_lane.size() == 0) {
      out << "corresponding_lane: []";
    } else {
      out << "corresponding_lane: [";
      size_t pending_items = msg.corresponding_lane.size();
      for (auto item : msg.corresponding_lane) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: associated_sign
  {
    if (msg.associated_sign.size() == 0) {
      out << "associated_sign: []";
    } else {
      out << "associated_sign: [";
      size_t pending_items = msg.associated_sign.size();
      for (auto item : msg.associated_sign) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: associated_stop_line
  {
    if (msg.associated_stop_line.size() == 0) {
      out << "associated_stop_line: []";
    } else {
      out << "associated_stop_line: [";
      size_t pending_items = msg.associated_stop_line.size();
      for (auto item : msg.associated_stop_line) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: sign_type
  {
    out << "sign_type: ";
    rosidl_generator_traits::value_to_yaml(msg.sign_type, out);
    out << ", ";
  }

  // member: sign_type_confidence
  {
    out << "sign_type_confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.sign_type_confidence, out);
    out << ", ";
  }

  // member: start_time
  {
    out << "start_time: ";
    rosidl_generator_traits::value_to_yaml(msg.start_time, out);
    out << ", ";
  }

  // member: end_time
  {
    out << "end_time: ";
    rosidl_generator_traits::value_to_yaml(msg.end_time, out);
    out << ", ";
  }

  // member: start_day
  {
    out << "start_day: ";
    rosidl_generator_traits::value_to_yaml(msg.start_day, out);
    out << ", ";
  }

  // member: end_day
  {
    out << "end_day: ";
    rosidl_generator_traits::value_to_yaml(msg.end_day, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrafficSign & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: detection
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "detection:\n";
    to_block_style_yaml(msg.detection, out, indentation + 2);
  }

  // member: corresponding_lane
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.corresponding_lane.size() == 0) {
      out << "corresponding_lane: []\n";
    } else {
      out << "corresponding_lane:\n";
      for (auto item : msg.corresponding_lane) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: associated_sign
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.associated_sign.size() == 0) {
      out << "associated_sign: []\n";
    } else {
      out << "associated_sign:\n";
      for (auto item : msg.associated_sign) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: associated_stop_line
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.associated_stop_line.size() == 0) {
      out << "associated_stop_line: []\n";
    } else {
      out << "associated_stop_line:\n";
      for (auto item : msg.associated_stop_line) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: sign_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sign_type: ";
    rosidl_generator_traits::value_to_yaml(msg.sign_type, out);
    out << "\n";
  }

  // member: sign_type_confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sign_type_confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.sign_type_confidence, out);
    out << "\n";
  }

  // member: start_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_time: ";
    rosidl_generator_traits::value_to_yaml(msg.start_time, out);
    out << "\n";
  }

  // member: end_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_time: ";
    rosidl_generator_traits::value_to_yaml(msg.end_time, out);
    out << "\n";
  }

  // member: start_day
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_day: ";
    rosidl_generator_traits::value_to_yaml(msg.start_day, out);
    out << "\n";
  }

  // member: end_day
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_day: ";
    rosidl_generator_traits::value_to_yaml(msg.end_day, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrafficSign & msg, bool use_flow_style = false)
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
  const autodrive_msgs::msg::TrafficSign & msg,
  std::ostream & out, size_t indentation = 0)
{
  autodrive_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autodrive_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autodrive_msgs::msg::TrafficSign & msg)
{
  return autodrive_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autodrive_msgs::msg::TrafficSign>()
{
  return "autodrive_msgs::msg::TrafficSign";
}

template<>
inline const char * name<autodrive_msgs::msg::TrafficSign>()
{
  return "autodrive_msgs/msg/TrafficSign";
}

template<>
struct has_fixed_size<autodrive_msgs::msg::TrafficSign>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autodrive_msgs::msg::TrafficSign>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autodrive_msgs::msg::TrafficSign>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__TRAFFIC_SIGN__TRAITS_HPP_
