// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autodrive_msgs:msg/TrafficLight.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__TRAFFIC_LIGHT__TRAITS_HPP_
#define AUTODRIVE_MSGS__MSG__DETAIL__TRAFFIC_LIGHT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autodrive_msgs/msg/detail/traffic_light__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'detection'
#include "autodrive_msgs/msg/detail/general_detection__traits.hpp"

namespace autodrive_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrafficLight & msg,
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

  // member: associated_light
  {
    if (msg.associated_light.size() == 0) {
      out << "associated_light: []";
    } else {
      out << "associated_light: [";
      size_t pending_items = msg.associated_light.size();
      for (auto item : msg.associated_light) {
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

  // member: main_bulb
  {
    out << "main_bulb: ";
    rosidl_generator_traits::value_to_yaml(msg.main_bulb, out);
    out << ", ";
  }

  // member: main_bulb_confidence
  {
    out << "main_bulb_confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.main_bulb_confidence, out);
    out << ", ";
  }

  // member: left_turn
  {
    out << "left_turn: ";
    rosidl_generator_traits::value_to_yaml(msg.left_turn, out);
    out << ", ";
  }

  // member: left_bulb_confidence
  {
    out << "left_bulb_confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.left_bulb_confidence, out);
    out << ", ";
  }

  // member: right_turn
  {
    out << "right_turn: ";
    rosidl_generator_traits::value_to_yaml(msg.right_turn, out);
    out << ", ";
  }

  // member: right_bulb_confidence
  {
    out << "right_bulb_confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.right_bulb_confidence, out);
    out << ", ";
  }

  // member: flashing
  {
    out << "flashing: ";
    rosidl_generator_traits::value_to_yaml(msg.flashing, out);
    out << ", ";
  }

  // member: shape_category
  {
    out << "shape_category: ";
    rosidl_generator_traits::value_to_yaml(msg.shape_category, out);
    out << ", ";
  }

  // member: shape_confidence
  {
    out << "shape_confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.shape_confidence, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrafficLight & msg,
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

  // member: associated_light
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.associated_light.size() == 0) {
      out << "associated_light: []\n";
    } else {
      out << "associated_light:\n";
      for (auto item : msg.associated_light) {
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

  // member: main_bulb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "main_bulb: ";
    rosidl_generator_traits::value_to_yaml(msg.main_bulb, out);
    out << "\n";
  }

  // member: main_bulb_confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "main_bulb_confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.main_bulb_confidence, out);
    out << "\n";
  }

  // member: left_turn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_turn: ";
    rosidl_generator_traits::value_to_yaml(msg.left_turn, out);
    out << "\n";
  }

  // member: left_bulb_confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_bulb_confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.left_bulb_confidence, out);
    out << "\n";
  }

  // member: right_turn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_turn: ";
    rosidl_generator_traits::value_to_yaml(msg.right_turn, out);
    out << "\n";
  }

  // member: right_bulb_confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_bulb_confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.right_bulb_confidence, out);
    out << "\n";
  }

  // member: flashing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flashing: ";
    rosidl_generator_traits::value_to_yaml(msg.flashing, out);
    out << "\n";
  }

  // member: shape_category
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shape_category: ";
    rosidl_generator_traits::value_to_yaml(msg.shape_category, out);
    out << "\n";
  }

  // member: shape_confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shape_confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.shape_confidence, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrafficLight & msg, bool use_flow_style = false)
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
  const autodrive_msgs::msg::TrafficLight & msg,
  std::ostream & out, size_t indentation = 0)
{
  autodrive_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autodrive_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autodrive_msgs::msg::TrafficLight & msg)
{
  return autodrive_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autodrive_msgs::msg::TrafficLight>()
{
  return "autodrive_msgs::msg::TrafficLight";
}

template<>
inline const char * name<autodrive_msgs::msg::TrafficLight>()
{
  return "autodrive_msgs/msg/TrafficLight";
}

template<>
struct has_fixed_size<autodrive_msgs::msg::TrafficLight>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autodrive_msgs::msg::TrafficLight>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autodrive_msgs::msg::TrafficLight>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__TRAFFIC_LIGHT__TRAITS_HPP_
