// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from autodrive_msgs:msg/Detection.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "autodrive_msgs/msg/detail/detection__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace autodrive_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Detection_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) autodrive_msgs::msg::Detection(_init);
}

void Detection_fini_function(void * message_memory)
{
  auto typed_message = static_cast<autodrive_msgs::msg::Detection *>(message_memory);
  typed_message->~Detection();
}

size_t size_function__Detection__detection(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<autodrive_msgs::msg::GeneralDetection> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Detection__detection(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<autodrive_msgs::msg::GeneralDetection> *>(untyped_member);
  return &member[index];
}

void * get_function__Detection__detection(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<autodrive_msgs::msg::GeneralDetection> *>(untyped_member);
  return &member[index];
}

void fetch_function__Detection__detection(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const autodrive_msgs::msg::GeneralDetection *>(
    get_const_function__Detection__detection(untyped_member, index));
  auto & value = *reinterpret_cast<autodrive_msgs::msg::GeneralDetection *>(untyped_value);
  value = item;
}

void assign_function__Detection__detection(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<autodrive_msgs::msg::GeneralDetection *>(
    get_function__Detection__detection(untyped_member, index));
  const auto & value = *reinterpret_cast<const autodrive_msgs::msg::GeneralDetection *>(untyped_value);
  item = value;
}

void resize_function__Detection__detection(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<autodrive_msgs::msg::GeneralDetection> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Detection__dynamic_obstacles(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<autodrive_msgs::msg::DynamicObstacle> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Detection__dynamic_obstacles(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<autodrive_msgs::msg::DynamicObstacle> *>(untyped_member);
  return &member[index];
}

void * get_function__Detection__dynamic_obstacles(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<autodrive_msgs::msg::DynamicObstacle> *>(untyped_member);
  return &member[index];
}

void fetch_function__Detection__dynamic_obstacles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const autodrive_msgs::msg::DynamicObstacle *>(
    get_const_function__Detection__dynamic_obstacles(untyped_member, index));
  auto & value = *reinterpret_cast<autodrive_msgs::msg::DynamicObstacle *>(untyped_value);
  value = item;
}

void assign_function__Detection__dynamic_obstacles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<autodrive_msgs::msg::DynamicObstacle *>(
    get_function__Detection__dynamic_obstacles(untyped_member, index));
  const auto & value = *reinterpret_cast<const autodrive_msgs::msg::DynamicObstacle *>(untyped_value);
  item = value;
}

void resize_function__Detection__dynamic_obstacles(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<autodrive_msgs::msg::DynamicObstacle> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Detection__static_obstacles(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<autodrive_msgs::msg::StaticObstacle> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Detection__static_obstacles(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<autodrive_msgs::msg::StaticObstacle> *>(untyped_member);
  return &member[index];
}

void * get_function__Detection__static_obstacles(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<autodrive_msgs::msg::StaticObstacle> *>(untyped_member);
  return &member[index];
}

void fetch_function__Detection__static_obstacles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const autodrive_msgs::msg::StaticObstacle *>(
    get_const_function__Detection__static_obstacles(untyped_member, index));
  auto & value = *reinterpret_cast<autodrive_msgs::msg::StaticObstacle *>(untyped_value);
  value = item;
}

void assign_function__Detection__static_obstacles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<autodrive_msgs::msg::StaticObstacle *>(
    get_function__Detection__static_obstacles(untyped_member, index));
  const auto & value = *reinterpret_cast<const autodrive_msgs::msg::StaticObstacle *>(untyped_value);
  item = value;
}

void resize_function__Detection__static_obstacles(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<autodrive_msgs::msg::StaticObstacle> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Detection__railroad_crossings(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<autodrive_msgs::msg::RailroadCrossing> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Detection__railroad_crossings(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<autodrive_msgs::msg::RailroadCrossing> *>(untyped_member);
  return &member[index];
}

void * get_function__Detection__railroad_crossings(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<autodrive_msgs::msg::RailroadCrossing> *>(untyped_member);
  return &member[index];
}

void fetch_function__Detection__railroad_crossings(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const autodrive_msgs::msg::RailroadCrossing *>(
    get_const_function__Detection__railroad_crossings(untyped_member, index));
  auto & value = *reinterpret_cast<autodrive_msgs::msg::RailroadCrossing *>(untyped_value);
  value = item;
}

void assign_function__Detection__railroad_crossings(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<autodrive_msgs::msg::RailroadCrossing *>(
    get_function__Detection__railroad_crossings(untyped_member, index));
  const auto & value = *reinterpret_cast<const autodrive_msgs::msg::RailroadCrossing *>(untyped_value);
  item = value;
}

void resize_function__Detection__railroad_crossings(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<autodrive_msgs::msg::RailroadCrossing> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Detection__traffic_lights(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<autodrive_msgs::msg::TrafficLight> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Detection__traffic_lights(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<autodrive_msgs::msg::TrafficLight> *>(untyped_member);
  return &member[index];
}

void * get_function__Detection__traffic_lights(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<autodrive_msgs::msg::TrafficLight> *>(untyped_member);
  return &member[index];
}

void fetch_function__Detection__traffic_lights(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const autodrive_msgs::msg::TrafficLight *>(
    get_const_function__Detection__traffic_lights(untyped_member, index));
  auto & value = *reinterpret_cast<autodrive_msgs::msg::TrafficLight *>(untyped_value);
  value = item;
}

void assign_function__Detection__traffic_lights(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<autodrive_msgs::msg::TrafficLight *>(
    get_function__Detection__traffic_lights(untyped_member, index));
  const auto & value = *reinterpret_cast<const autodrive_msgs::msg::TrafficLight *>(untyped_value);
  item = value;
}

void resize_function__Detection__traffic_lights(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<autodrive_msgs::msg::TrafficLight> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Detection__traffic_signs(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<autodrive_msgs::msg::TrafficSign> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Detection__traffic_signs(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<autodrive_msgs::msg::TrafficSign> *>(untyped_member);
  return &member[index];
}

void * get_function__Detection__traffic_signs(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<autodrive_msgs::msg::TrafficSign> *>(untyped_member);
  return &member[index];
}

void fetch_function__Detection__traffic_signs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const autodrive_msgs::msg::TrafficSign *>(
    get_const_function__Detection__traffic_signs(untyped_member, index));
  auto & value = *reinterpret_cast<autodrive_msgs::msg::TrafficSign *>(untyped_value);
  value = item;
}

void assign_function__Detection__traffic_signs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<autodrive_msgs::msg::TrafficSign *>(
    get_function__Detection__traffic_signs(untyped_member, index));
  const auto & value = *reinterpret_cast<const autodrive_msgs::msg::TrafficSign *>(untyped_value);
  item = value;
}

void resize_function__Detection__traffic_signs(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<autodrive_msgs::msg::TrafficSign> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Detection__speed_limits(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<autodrive_msgs::msg::SpeedLimit> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Detection__speed_limits(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<autodrive_msgs::msg::SpeedLimit> *>(untyped_member);
  return &member[index];
}

void * get_function__Detection__speed_limits(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<autodrive_msgs::msg::SpeedLimit> *>(untyped_member);
  return &member[index];
}

void fetch_function__Detection__speed_limits(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const autodrive_msgs::msg::SpeedLimit *>(
    get_const_function__Detection__speed_limits(untyped_member, index));
  auto & value = *reinterpret_cast<autodrive_msgs::msg::SpeedLimit *>(untyped_value);
  value = item;
}

void assign_function__Detection__speed_limits(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<autodrive_msgs::msg::SpeedLimit *>(
    get_function__Detection__speed_limits(untyped_member, index));
  const auto & value = *reinterpret_cast<const autodrive_msgs::msg::SpeedLimit *>(untyped_value);
  item = value;
}

void resize_function__Detection__speed_limits(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<autodrive_msgs::msg::SpeedLimit> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Detection__stop_lines(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<autodrive_msgs::msg::Stopline> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Detection__stop_lines(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<autodrive_msgs::msg::Stopline> *>(untyped_member);
  return &member[index];
}

void * get_function__Detection__stop_lines(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<autodrive_msgs::msg::Stopline> *>(untyped_member);
  return &member[index];
}

void fetch_function__Detection__stop_lines(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const autodrive_msgs::msg::Stopline *>(
    get_const_function__Detection__stop_lines(untyped_member, index));
  auto & value = *reinterpret_cast<autodrive_msgs::msg::Stopline *>(untyped_value);
  value = item;
}

void assign_function__Detection__stop_lines(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<autodrive_msgs::msg::Stopline *>(
    get_function__Detection__stop_lines(untyped_member, index));
  const auto & value = *reinterpret_cast<const autodrive_msgs::msg::Stopline *>(untyped_value);
  item = value;
}

void resize_function__Detection__stop_lines(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<autodrive_msgs::msg::Stopline> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Detection_message_member_array[9] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autodrive_msgs::msg::Detection, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "detection",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<autodrive_msgs::msg::GeneralDetection>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autodrive_msgs::msg::Detection, detection),  // bytes offset in struct
    nullptr,  // default value
    size_function__Detection__detection,  // size() function pointer
    get_const_function__Detection__detection,  // get_const(index) function pointer
    get_function__Detection__detection,  // get(index) function pointer
    fetch_function__Detection__detection,  // fetch(index, &value) function pointer
    assign_function__Detection__detection,  // assign(index, value) function pointer
    resize_function__Detection__detection  // resize(index) function pointer
  },
  {
    "dynamic_obstacles",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<autodrive_msgs::msg::DynamicObstacle>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autodrive_msgs::msg::Detection, dynamic_obstacles),  // bytes offset in struct
    nullptr,  // default value
    size_function__Detection__dynamic_obstacles,  // size() function pointer
    get_const_function__Detection__dynamic_obstacles,  // get_const(index) function pointer
    get_function__Detection__dynamic_obstacles,  // get(index) function pointer
    fetch_function__Detection__dynamic_obstacles,  // fetch(index, &value) function pointer
    assign_function__Detection__dynamic_obstacles,  // assign(index, value) function pointer
    resize_function__Detection__dynamic_obstacles  // resize(index) function pointer
  },
  {
    "static_obstacles",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<autodrive_msgs::msg::StaticObstacle>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autodrive_msgs::msg::Detection, static_obstacles),  // bytes offset in struct
    nullptr,  // default value
    size_function__Detection__static_obstacles,  // size() function pointer
    get_const_function__Detection__static_obstacles,  // get_const(index) function pointer
    get_function__Detection__static_obstacles,  // get(index) function pointer
    fetch_function__Detection__static_obstacles,  // fetch(index, &value) function pointer
    assign_function__Detection__static_obstacles,  // assign(index, value) function pointer
    resize_function__Detection__static_obstacles  // resize(index) function pointer
  },
  {
    "railroad_crossings",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<autodrive_msgs::msg::RailroadCrossing>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autodrive_msgs::msg::Detection, railroad_crossings),  // bytes offset in struct
    nullptr,  // default value
    size_function__Detection__railroad_crossings,  // size() function pointer
    get_const_function__Detection__railroad_crossings,  // get_const(index) function pointer
    get_function__Detection__railroad_crossings,  // get(index) function pointer
    fetch_function__Detection__railroad_crossings,  // fetch(index, &value) function pointer
    assign_function__Detection__railroad_crossings,  // assign(index, value) function pointer
    resize_function__Detection__railroad_crossings  // resize(index) function pointer
  },
  {
    "traffic_lights",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<autodrive_msgs::msg::TrafficLight>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autodrive_msgs::msg::Detection, traffic_lights),  // bytes offset in struct
    nullptr,  // default value
    size_function__Detection__traffic_lights,  // size() function pointer
    get_const_function__Detection__traffic_lights,  // get_const(index) function pointer
    get_function__Detection__traffic_lights,  // get(index) function pointer
    fetch_function__Detection__traffic_lights,  // fetch(index, &value) function pointer
    assign_function__Detection__traffic_lights,  // assign(index, value) function pointer
    resize_function__Detection__traffic_lights  // resize(index) function pointer
  },
  {
    "traffic_signs",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<autodrive_msgs::msg::TrafficSign>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autodrive_msgs::msg::Detection, traffic_signs),  // bytes offset in struct
    nullptr,  // default value
    size_function__Detection__traffic_signs,  // size() function pointer
    get_const_function__Detection__traffic_signs,  // get_const(index) function pointer
    get_function__Detection__traffic_signs,  // get(index) function pointer
    fetch_function__Detection__traffic_signs,  // fetch(index, &value) function pointer
    assign_function__Detection__traffic_signs,  // assign(index, value) function pointer
    resize_function__Detection__traffic_signs  // resize(index) function pointer
  },
  {
    "speed_limits",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<autodrive_msgs::msg::SpeedLimit>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autodrive_msgs::msg::Detection, speed_limits),  // bytes offset in struct
    nullptr,  // default value
    size_function__Detection__speed_limits,  // size() function pointer
    get_const_function__Detection__speed_limits,  // get_const(index) function pointer
    get_function__Detection__speed_limits,  // get(index) function pointer
    fetch_function__Detection__speed_limits,  // fetch(index, &value) function pointer
    assign_function__Detection__speed_limits,  // assign(index, value) function pointer
    resize_function__Detection__speed_limits  // resize(index) function pointer
  },
  {
    "stop_lines",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<autodrive_msgs::msg::Stopline>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autodrive_msgs::msg::Detection, stop_lines),  // bytes offset in struct
    nullptr,  // default value
    size_function__Detection__stop_lines,  // size() function pointer
    get_const_function__Detection__stop_lines,  // get_const(index) function pointer
    get_function__Detection__stop_lines,  // get(index) function pointer
    fetch_function__Detection__stop_lines,  // fetch(index, &value) function pointer
    assign_function__Detection__stop_lines,  // assign(index, value) function pointer
    resize_function__Detection__stop_lines  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Detection_message_members = {
  "autodrive_msgs::msg",  // message namespace
  "Detection",  // message name
  9,  // number of fields
  sizeof(autodrive_msgs::msg::Detection),
  Detection_message_member_array,  // message members
  Detection_init_function,  // function to initialize message memory (memory has to be allocated)
  Detection_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Detection_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Detection_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace autodrive_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<autodrive_msgs::msg::Detection>()
{
  return &::autodrive_msgs::msg::rosidl_typesupport_introspection_cpp::Detection_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, autodrive_msgs, msg, Detection)() {
  return &::autodrive_msgs::msg::rosidl_typesupport_introspection_cpp::Detection_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
