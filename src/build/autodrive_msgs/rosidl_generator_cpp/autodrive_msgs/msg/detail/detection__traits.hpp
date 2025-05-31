// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autodrive_msgs:msg/Detection.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__DETECTION__TRAITS_HPP_
#define AUTODRIVE_MSGS__MSG__DETAIL__DETECTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autodrive_msgs/msg/detail/detection__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'detection'
#include "autodrive_msgs/msg/detail/general_detection__traits.hpp"
// Member 'dynamic_obstacles'
#include "autodrive_msgs/msg/detail/dynamic_obstacle__traits.hpp"
// Member 'static_obstacles'
#include "autodrive_msgs/msg/detail/static_obstacle__traits.hpp"
// Member 'railroad_crossings'
#include "autodrive_msgs/msg/detail/railroad_crossing__traits.hpp"
// Member 'traffic_lights'
#include "autodrive_msgs/msg/detail/traffic_light__traits.hpp"
// Member 'traffic_signs'
#include "autodrive_msgs/msg/detail/traffic_sign__traits.hpp"
// Member 'speed_limits'
#include "autodrive_msgs/msg/detail/speed_limit__traits.hpp"
// Member 'stop_lines'
#include "autodrive_msgs/msg/detail/stopline__traits.hpp"

namespace autodrive_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Detection & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: detection
  {
    if (msg.detection.size() == 0) {
      out << "detection: []";
    } else {
      out << "detection: [";
      size_t pending_items = msg.detection.size();
      for (auto item : msg.detection) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: dynamic_obstacles
  {
    if (msg.dynamic_obstacles.size() == 0) {
      out << "dynamic_obstacles: []";
    } else {
      out << "dynamic_obstacles: [";
      size_t pending_items = msg.dynamic_obstacles.size();
      for (auto item : msg.dynamic_obstacles) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: static_obstacles
  {
    if (msg.static_obstacles.size() == 0) {
      out << "static_obstacles: []";
    } else {
      out << "static_obstacles: [";
      size_t pending_items = msg.static_obstacles.size();
      for (auto item : msg.static_obstacles) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: railroad_crossings
  {
    if (msg.railroad_crossings.size() == 0) {
      out << "railroad_crossings: []";
    } else {
      out << "railroad_crossings: [";
      size_t pending_items = msg.railroad_crossings.size();
      for (auto item : msg.railroad_crossings) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: traffic_lights
  {
    if (msg.traffic_lights.size() == 0) {
      out << "traffic_lights: []";
    } else {
      out << "traffic_lights: [";
      size_t pending_items = msg.traffic_lights.size();
      for (auto item : msg.traffic_lights) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: traffic_signs
  {
    if (msg.traffic_signs.size() == 0) {
      out << "traffic_signs: []";
    } else {
      out << "traffic_signs: [";
      size_t pending_items = msg.traffic_signs.size();
      for (auto item : msg.traffic_signs) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: speed_limits
  {
    if (msg.speed_limits.size() == 0) {
      out << "speed_limits: []";
    } else {
      out << "speed_limits: [";
      size_t pending_items = msg.speed_limits.size();
      for (auto item : msg.speed_limits) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: stop_lines
  {
    if (msg.stop_lines.size() == 0) {
      out << "stop_lines: []";
    } else {
      out << "stop_lines: [";
      size_t pending_items = msg.stop_lines.size();
      for (auto item : msg.stop_lines) {
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
  const Detection & msg,
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

  // member: detection
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.detection.size() == 0) {
      out << "detection: []\n";
    } else {
      out << "detection:\n";
      for (auto item : msg.detection) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: dynamic_obstacles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.dynamic_obstacles.size() == 0) {
      out << "dynamic_obstacles: []\n";
    } else {
      out << "dynamic_obstacles:\n";
      for (auto item : msg.dynamic_obstacles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: static_obstacles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.static_obstacles.size() == 0) {
      out << "static_obstacles: []\n";
    } else {
      out << "static_obstacles:\n";
      for (auto item : msg.static_obstacles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: railroad_crossings
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.railroad_crossings.size() == 0) {
      out << "railroad_crossings: []\n";
    } else {
      out << "railroad_crossings:\n";
      for (auto item : msg.railroad_crossings) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: traffic_lights
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.traffic_lights.size() == 0) {
      out << "traffic_lights: []\n";
    } else {
      out << "traffic_lights:\n";
      for (auto item : msg.traffic_lights) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: traffic_signs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.traffic_signs.size() == 0) {
      out << "traffic_signs: []\n";
    } else {
      out << "traffic_signs:\n";
      for (auto item : msg.traffic_signs) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: speed_limits
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.speed_limits.size() == 0) {
      out << "speed_limits: []\n";
    } else {
      out << "speed_limits:\n";
      for (auto item : msg.speed_limits) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: stop_lines
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.stop_lines.size() == 0) {
      out << "stop_lines: []\n";
    } else {
      out << "stop_lines:\n";
      for (auto item : msg.stop_lines) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Detection & msg, bool use_flow_style = false)
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
  const autodrive_msgs::msg::Detection & msg,
  std::ostream & out, size_t indentation = 0)
{
  autodrive_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autodrive_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autodrive_msgs::msg::Detection & msg)
{
  return autodrive_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autodrive_msgs::msg::Detection>()
{
  return "autodrive_msgs::msg::Detection";
}

template<>
inline const char * name<autodrive_msgs::msg::Detection>()
{
  return "autodrive_msgs/msg/Detection";
}

template<>
struct has_fixed_size<autodrive_msgs::msg::Detection>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autodrive_msgs::msg::Detection>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autodrive_msgs::msg::Detection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__DETECTION__TRAITS_HPP_
