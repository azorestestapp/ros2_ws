// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autodrive_msgs:msg/Detection.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autodrive_msgs/msg/detail/detection__rosidl_typesupport_introspection_c.h"
#include "autodrive_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autodrive_msgs/msg/detail/detection__functions.h"
#include "autodrive_msgs/msg/detail/detection__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `detection`
#include "autodrive_msgs/msg/general_detection.h"
// Member `detection`
#include "autodrive_msgs/msg/detail/general_detection__rosidl_typesupport_introspection_c.h"
// Member `dynamic_obstacles`
#include "autodrive_msgs/msg/dynamic_obstacle.h"
// Member `dynamic_obstacles`
#include "autodrive_msgs/msg/detail/dynamic_obstacle__rosidl_typesupport_introspection_c.h"
// Member `static_obstacles`
#include "autodrive_msgs/msg/static_obstacle.h"
// Member `static_obstacles`
#include "autodrive_msgs/msg/detail/static_obstacle__rosidl_typesupport_introspection_c.h"
// Member `railroad_crossings`
#include "autodrive_msgs/msg/railroad_crossing.h"
// Member `railroad_crossings`
#include "autodrive_msgs/msg/detail/railroad_crossing__rosidl_typesupport_introspection_c.h"
// Member `traffic_lights`
#include "autodrive_msgs/msg/traffic_light.h"
// Member `traffic_lights`
#include "autodrive_msgs/msg/detail/traffic_light__rosidl_typesupport_introspection_c.h"
// Member `traffic_signs`
#include "autodrive_msgs/msg/traffic_sign.h"
// Member `traffic_signs`
#include "autodrive_msgs/msg/detail/traffic_sign__rosidl_typesupport_introspection_c.h"
// Member `speed_limits`
#include "autodrive_msgs/msg/speed_limit.h"
// Member `speed_limits`
#include "autodrive_msgs/msg/detail/speed_limit__rosidl_typesupport_introspection_c.h"
// Member `stop_lines`
#include "autodrive_msgs/msg/stopline.h"
// Member `stop_lines`
#include "autodrive_msgs/msg/detail/stopline__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autodrive_msgs__msg__Detection__init(message_memory);
}

void autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_fini_function(void * message_memory)
{
  autodrive_msgs__msg__Detection__fini(message_memory);
}

size_t autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__size_function__Detection__detection(
  const void * untyped_member)
{
  const autodrive_msgs__msg__GeneralDetection__Sequence * member =
    (const autodrive_msgs__msg__GeneralDetection__Sequence *)(untyped_member);
  return member->size;
}

const void * autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_const_function__Detection__detection(
  const void * untyped_member, size_t index)
{
  const autodrive_msgs__msg__GeneralDetection__Sequence * member =
    (const autodrive_msgs__msg__GeneralDetection__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_function__Detection__detection(
  void * untyped_member, size_t index)
{
  autodrive_msgs__msg__GeneralDetection__Sequence * member =
    (autodrive_msgs__msg__GeneralDetection__Sequence *)(untyped_member);
  return &member->data[index];
}

void autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__fetch_function__Detection__detection(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const autodrive_msgs__msg__GeneralDetection * item =
    ((const autodrive_msgs__msg__GeneralDetection *)
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_const_function__Detection__detection(untyped_member, index));
  autodrive_msgs__msg__GeneralDetection * value =
    (autodrive_msgs__msg__GeneralDetection *)(untyped_value);
  *value = *item;
}

void autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__assign_function__Detection__detection(
  void * untyped_member, size_t index, const void * untyped_value)
{
  autodrive_msgs__msg__GeneralDetection * item =
    ((autodrive_msgs__msg__GeneralDetection *)
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_function__Detection__detection(untyped_member, index));
  const autodrive_msgs__msg__GeneralDetection * value =
    (const autodrive_msgs__msg__GeneralDetection *)(untyped_value);
  *item = *value;
}

bool autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__resize_function__Detection__detection(
  void * untyped_member, size_t size)
{
  autodrive_msgs__msg__GeneralDetection__Sequence * member =
    (autodrive_msgs__msg__GeneralDetection__Sequence *)(untyped_member);
  autodrive_msgs__msg__GeneralDetection__Sequence__fini(member);
  return autodrive_msgs__msg__GeneralDetection__Sequence__init(member, size);
}

size_t autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__size_function__Detection__dynamic_obstacles(
  const void * untyped_member)
{
  const autodrive_msgs__msg__DynamicObstacle__Sequence * member =
    (const autodrive_msgs__msg__DynamicObstacle__Sequence *)(untyped_member);
  return member->size;
}

const void * autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_const_function__Detection__dynamic_obstacles(
  const void * untyped_member, size_t index)
{
  const autodrive_msgs__msg__DynamicObstacle__Sequence * member =
    (const autodrive_msgs__msg__DynamicObstacle__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_function__Detection__dynamic_obstacles(
  void * untyped_member, size_t index)
{
  autodrive_msgs__msg__DynamicObstacle__Sequence * member =
    (autodrive_msgs__msg__DynamicObstacle__Sequence *)(untyped_member);
  return &member->data[index];
}

void autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__fetch_function__Detection__dynamic_obstacles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const autodrive_msgs__msg__DynamicObstacle * item =
    ((const autodrive_msgs__msg__DynamicObstacle *)
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_const_function__Detection__dynamic_obstacles(untyped_member, index));
  autodrive_msgs__msg__DynamicObstacle * value =
    (autodrive_msgs__msg__DynamicObstacle *)(untyped_value);
  *value = *item;
}

void autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__assign_function__Detection__dynamic_obstacles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  autodrive_msgs__msg__DynamicObstacle * item =
    ((autodrive_msgs__msg__DynamicObstacle *)
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_function__Detection__dynamic_obstacles(untyped_member, index));
  const autodrive_msgs__msg__DynamicObstacle * value =
    (const autodrive_msgs__msg__DynamicObstacle *)(untyped_value);
  *item = *value;
}

bool autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__resize_function__Detection__dynamic_obstacles(
  void * untyped_member, size_t size)
{
  autodrive_msgs__msg__DynamicObstacle__Sequence * member =
    (autodrive_msgs__msg__DynamicObstacle__Sequence *)(untyped_member);
  autodrive_msgs__msg__DynamicObstacle__Sequence__fini(member);
  return autodrive_msgs__msg__DynamicObstacle__Sequence__init(member, size);
}

size_t autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__size_function__Detection__static_obstacles(
  const void * untyped_member)
{
  const autodrive_msgs__msg__StaticObstacle__Sequence * member =
    (const autodrive_msgs__msg__StaticObstacle__Sequence *)(untyped_member);
  return member->size;
}

const void * autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_const_function__Detection__static_obstacles(
  const void * untyped_member, size_t index)
{
  const autodrive_msgs__msg__StaticObstacle__Sequence * member =
    (const autodrive_msgs__msg__StaticObstacle__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_function__Detection__static_obstacles(
  void * untyped_member, size_t index)
{
  autodrive_msgs__msg__StaticObstacle__Sequence * member =
    (autodrive_msgs__msg__StaticObstacle__Sequence *)(untyped_member);
  return &member->data[index];
}

void autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__fetch_function__Detection__static_obstacles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const autodrive_msgs__msg__StaticObstacle * item =
    ((const autodrive_msgs__msg__StaticObstacle *)
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_const_function__Detection__static_obstacles(untyped_member, index));
  autodrive_msgs__msg__StaticObstacle * value =
    (autodrive_msgs__msg__StaticObstacle *)(untyped_value);
  *value = *item;
}

void autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__assign_function__Detection__static_obstacles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  autodrive_msgs__msg__StaticObstacle * item =
    ((autodrive_msgs__msg__StaticObstacle *)
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_function__Detection__static_obstacles(untyped_member, index));
  const autodrive_msgs__msg__StaticObstacle * value =
    (const autodrive_msgs__msg__StaticObstacle *)(untyped_value);
  *item = *value;
}

bool autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__resize_function__Detection__static_obstacles(
  void * untyped_member, size_t size)
{
  autodrive_msgs__msg__StaticObstacle__Sequence * member =
    (autodrive_msgs__msg__StaticObstacle__Sequence *)(untyped_member);
  autodrive_msgs__msg__StaticObstacle__Sequence__fini(member);
  return autodrive_msgs__msg__StaticObstacle__Sequence__init(member, size);
}

size_t autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__size_function__Detection__railroad_crossings(
  const void * untyped_member)
{
  const autodrive_msgs__msg__RailroadCrossing__Sequence * member =
    (const autodrive_msgs__msg__RailroadCrossing__Sequence *)(untyped_member);
  return member->size;
}

const void * autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_const_function__Detection__railroad_crossings(
  const void * untyped_member, size_t index)
{
  const autodrive_msgs__msg__RailroadCrossing__Sequence * member =
    (const autodrive_msgs__msg__RailroadCrossing__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_function__Detection__railroad_crossings(
  void * untyped_member, size_t index)
{
  autodrive_msgs__msg__RailroadCrossing__Sequence * member =
    (autodrive_msgs__msg__RailroadCrossing__Sequence *)(untyped_member);
  return &member->data[index];
}

void autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__fetch_function__Detection__railroad_crossings(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const autodrive_msgs__msg__RailroadCrossing * item =
    ((const autodrive_msgs__msg__RailroadCrossing *)
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_const_function__Detection__railroad_crossings(untyped_member, index));
  autodrive_msgs__msg__RailroadCrossing * value =
    (autodrive_msgs__msg__RailroadCrossing *)(untyped_value);
  *value = *item;
}

void autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__assign_function__Detection__railroad_crossings(
  void * untyped_member, size_t index, const void * untyped_value)
{
  autodrive_msgs__msg__RailroadCrossing * item =
    ((autodrive_msgs__msg__RailroadCrossing *)
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_function__Detection__railroad_crossings(untyped_member, index));
  const autodrive_msgs__msg__RailroadCrossing * value =
    (const autodrive_msgs__msg__RailroadCrossing *)(untyped_value);
  *item = *value;
}

bool autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__resize_function__Detection__railroad_crossings(
  void * untyped_member, size_t size)
{
  autodrive_msgs__msg__RailroadCrossing__Sequence * member =
    (autodrive_msgs__msg__RailroadCrossing__Sequence *)(untyped_member);
  autodrive_msgs__msg__RailroadCrossing__Sequence__fini(member);
  return autodrive_msgs__msg__RailroadCrossing__Sequence__init(member, size);
}

size_t autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__size_function__Detection__traffic_lights(
  const void * untyped_member)
{
  const autodrive_msgs__msg__TrafficLight__Sequence * member =
    (const autodrive_msgs__msg__TrafficLight__Sequence *)(untyped_member);
  return member->size;
}

const void * autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_const_function__Detection__traffic_lights(
  const void * untyped_member, size_t index)
{
  const autodrive_msgs__msg__TrafficLight__Sequence * member =
    (const autodrive_msgs__msg__TrafficLight__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_function__Detection__traffic_lights(
  void * untyped_member, size_t index)
{
  autodrive_msgs__msg__TrafficLight__Sequence * member =
    (autodrive_msgs__msg__TrafficLight__Sequence *)(untyped_member);
  return &member->data[index];
}

void autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__fetch_function__Detection__traffic_lights(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const autodrive_msgs__msg__TrafficLight * item =
    ((const autodrive_msgs__msg__TrafficLight *)
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_const_function__Detection__traffic_lights(untyped_member, index));
  autodrive_msgs__msg__TrafficLight * value =
    (autodrive_msgs__msg__TrafficLight *)(untyped_value);
  *value = *item;
}

void autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__assign_function__Detection__traffic_lights(
  void * untyped_member, size_t index, const void * untyped_value)
{
  autodrive_msgs__msg__TrafficLight * item =
    ((autodrive_msgs__msg__TrafficLight *)
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_function__Detection__traffic_lights(untyped_member, index));
  const autodrive_msgs__msg__TrafficLight * value =
    (const autodrive_msgs__msg__TrafficLight *)(untyped_value);
  *item = *value;
}

bool autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__resize_function__Detection__traffic_lights(
  void * untyped_member, size_t size)
{
  autodrive_msgs__msg__TrafficLight__Sequence * member =
    (autodrive_msgs__msg__TrafficLight__Sequence *)(untyped_member);
  autodrive_msgs__msg__TrafficLight__Sequence__fini(member);
  return autodrive_msgs__msg__TrafficLight__Sequence__init(member, size);
}

size_t autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__size_function__Detection__traffic_signs(
  const void * untyped_member)
{
  const autodrive_msgs__msg__TrafficSign__Sequence * member =
    (const autodrive_msgs__msg__TrafficSign__Sequence *)(untyped_member);
  return member->size;
}

const void * autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_const_function__Detection__traffic_signs(
  const void * untyped_member, size_t index)
{
  const autodrive_msgs__msg__TrafficSign__Sequence * member =
    (const autodrive_msgs__msg__TrafficSign__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_function__Detection__traffic_signs(
  void * untyped_member, size_t index)
{
  autodrive_msgs__msg__TrafficSign__Sequence * member =
    (autodrive_msgs__msg__TrafficSign__Sequence *)(untyped_member);
  return &member->data[index];
}

void autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__fetch_function__Detection__traffic_signs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const autodrive_msgs__msg__TrafficSign * item =
    ((const autodrive_msgs__msg__TrafficSign *)
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_const_function__Detection__traffic_signs(untyped_member, index));
  autodrive_msgs__msg__TrafficSign * value =
    (autodrive_msgs__msg__TrafficSign *)(untyped_value);
  *value = *item;
}

void autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__assign_function__Detection__traffic_signs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  autodrive_msgs__msg__TrafficSign * item =
    ((autodrive_msgs__msg__TrafficSign *)
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_function__Detection__traffic_signs(untyped_member, index));
  const autodrive_msgs__msg__TrafficSign * value =
    (const autodrive_msgs__msg__TrafficSign *)(untyped_value);
  *item = *value;
}

bool autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__resize_function__Detection__traffic_signs(
  void * untyped_member, size_t size)
{
  autodrive_msgs__msg__TrafficSign__Sequence * member =
    (autodrive_msgs__msg__TrafficSign__Sequence *)(untyped_member);
  autodrive_msgs__msg__TrafficSign__Sequence__fini(member);
  return autodrive_msgs__msg__TrafficSign__Sequence__init(member, size);
}

size_t autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__size_function__Detection__speed_limits(
  const void * untyped_member)
{
  const autodrive_msgs__msg__SpeedLimit__Sequence * member =
    (const autodrive_msgs__msg__SpeedLimit__Sequence *)(untyped_member);
  return member->size;
}

const void * autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_const_function__Detection__speed_limits(
  const void * untyped_member, size_t index)
{
  const autodrive_msgs__msg__SpeedLimit__Sequence * member =
    (const autodrive_msgs__msg__SpeedLimit__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_function__Detection__speed_limits(
  void * untyped_member, size_t index)
{
  autodrive_msgs__msg__SpeedLimit__Sequence * member =
    (autodrive_msgs__msg__SpeedLimit__Sequence *)(untyped_member);
  return &member->data[index];
}

void autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__fetch_function__Detection__speed_limits(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const autodrive_msgs__msg__SpeedLimit * item =
    ((const autodrive_msgs__msg__SpeedLimit *)
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_const_function__Detection__speed_limits(untyped_member, index));
  autodrive_msgs__msg__SpeedLimit * value =
    (autodrive_msgs__msg__SpeedLimit *)(untyped_value);
  *value = *item;
}

void autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__assign_function__Detection__speed_limits(
  void * untyped_member, size_t index, const void * untyped_value)
{
  autodrive_msgs__msg__SpeedLimit * item =
    ((autodrive_msgs__msg__SpeedLimit *)
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_function__Detection__speed_limits(untyped_member, index));
  const autodrive_msgs__msg__SpeedLimit * value =
    (const autodrive_msgs__msg__SpeedLimit *)(untyped_value);
  *item = *value;
}

bool autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__resize_function__Detection__speed_limits(
  void * untyped_member, size_t size)
{
  autodrive_msgs__msg__SpeedLimit__Sequence * member =
    (autodrive_msgs__msg__SpeedLimit__Sequence *)(untyped_member);
  autodrive_msgs__msg__SpeedLimit__Sequence__fini(member);
  return autodrive_msgs__msg__SpeedLimit__Sequence__init(member, size);
}

size_t autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__size_function__Detection__stop_lines(
  const void * untyped_member)
{
  const autodrive_msgs__msg__Stopline__Sequence * member =
    (const autodrive_msgs__msg__Stopline__Sequence *)(untyped_member);
  return member->size;
}

const void * autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_const_function__Detection__stop_lines(
  const void * untyped_member, size_t index)
{
  const autodrive_msgs__msg__Stopline__Sequence * member =
    (const autodrive_msgs__msg__Stopline__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_function__Detection__stop_lines(
  void * untyped_member, size_t index)
{
  autodrive_msgs__msg__Stopline__Sequence * member =
    (autodrive_msgs__msg__Stopline__Sequence *)(untyped_member);
  return &member->data[index];
}

void autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__fetch_function__Detection__stop_lines(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const autodrive_msgs__msg__Stopline * item =
    ((const autodrive_msgs__msg__Stopline *)
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_const_function__Detection__stop_lines(untyped_member, index));
  autodrive_msgs__msg__Stopline * value =
    (autodrive_msgs__msg__Stopline *)(untyped_value);
  *value = *item;
}

void autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__assign_function__Detection__stop_lines(
  void * untyped_member, size_t index, const void * untyped_value)
{
  autodrive_msgs__msg__Stopline * item =
    ((autodrive_msgs__msg__Stopline *)
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_function__Detection__stop_lines(untyped_member, index));
  const autodrive_msgs__msg__Stopline * value =
    (const autodrive_msgs__msg__Stopline *)(untyped_value);
  *item = *value;
}

bool autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__resize_function__Detection__stop_lines(
  void * untyped_member, size_t size)
{
  autodrive_msgs__msg__Stopline__Sequence * member =
    (autodrive_msgs__msg__Stopline__Sequence *)(untyped_member);
  autodrive_msgs__msg__Stopline__Sequence__fini(member);
  return autodrive_msgs__msg__Stopline__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_member_array[9] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autodrive_msgs__msg__Detection, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "detection",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autodrive_msgs__msg__Detection, detection),  // bytes offset in struct
    NULL,  // default value
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__size_function__Detection__detection,  // size() function pointer
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_const_function__Detection__detection,  // get_const(index) function pointer
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_function__Detection__detection,  // get(index) function pointer
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__fetch_function__Detection__detection,  // fetch(index, &value) function pointer
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__assign_function__Detection__detection,  // assign(index, value) function pointer
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__resize_function__Detection__detection  // resize(index) function pointer
  },
  {
    "dynamic_obstacles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autodrive_msgs__msg__Detection, dynamic_obstacles),  // bytes offset in struct
    NULL,  // default value
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__size_function__Detection__dynamic_obstacles,  // size() function pointer
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_const_function__Detection__dynamic_obstacles,  // get_const(index) function pointer
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_function__Detection__dynamic_obstacles,  // get(index) function pointer
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__fetch_function__Detection__dynamic_obstacles,  // fetch(index, &value) function pointer
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__assign_function__Detection__dynamic_obstacles,  // assign(index, value) function pointer
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__resize_function__Detection__dynamic_obstacles  // resize(index) function pointer
  },
  {
    "static_obstacles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autodrive_msgs__msg__Detection, static_obstacles),  // bytes offset in struct
    NULL,  // default value
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__size_function__Detection__static_obstacles,  // size() function pointer
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_const_function__Detection__static_obstacles,  // get_const(index) function pointer
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_function__Detection__static_obstacles,  // get(index) function pointer
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__fetch_function__Detection__static_obstacles,  // fetch(index, &value) function pointer
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__assign_function__Detection__static_obstacles,  // assign(index, value) function pointer
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__resize_function__Detection__static_obstacles  // resize(index) function pointer
  },
  {
    "railroad_crossings",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autodrive_msgs__msg__Detection, railroad_crossings),  // bytes offset in struct
    NULL,  // default value
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__size_function__Detection__railroad_crossings,  // size() function pointer
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_const_function__Detection__railroad_crossings,  // get_const(index) function pointer
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_function__Detection__railroad_crossings,  // get(index) function pointer
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__fetch_function__Detection__railroad_crossings,  // fetch(index, &value) function pointer
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__assign_function__Detection__railroad_crossings,  // assign(index, value) function pointer
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__resize_function__Detection__railroad_crossings  // resize(index) function pointer
  },
  {
    "traffic_lights",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autodrive_msgs__msg__Detection, traffic_lights),  // bytes offset in struct
    NULL,  // default value
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__size_function__Detection__traffic_lights,  // size() function pointer
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_const_function__Detection__traffic_lights,  // get_const(index) function pointer
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_function__Detection__traffic_lights,  // get(index) function pointer
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__fetch_function__Detection__traffic_lights,  // fetch(index, &value) function pointer
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__assign_function__Detection__traffic_lights,  // assign(index, value) function pointer
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__resize_function__Detection__traffic_lights  // resize(index) function pointer
  },
  {
    "traffic_signs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autodrive_msgs__msg__Detection, traffic_signs),  // bytes offset in struct
    NULL,  // default value
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__size_function__Detection__traffic_signs,  // size() function pointer
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_const_function__Detection__traffic_signs,  // get_const(index) function pointer
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_function__Detection__traffic_signs,  // get(index) function pointer
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__fetch_function__Detection__traffic_signs,  // fetch(index, &value) function pointer
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__assign_function__Detection__traffic_signs,  // assign(index, value) function pointer
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__resize_function__Detection__traffic_signs  // resize(index) function pointer
  },
  {
    "speed_limits",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autodrive_msgs__msg__Detection, speed_limits),  // bytes offset in struct
    NULL,  // default value
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__size_function__Detection__speed_limits,  // size() function pointer
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_const_function__Detection__speed_limits,  // get_const(index) function pointer
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_function__Detection__speed_limits,  // get(index) function pointer
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__fetch_function__Detection__speed_limits,  // fetch(index, &value) function pointer
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__assign_function__Detection__speed_limits,  // assign(index, value) function pointer
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__resize_function__Detection__speed_limits  // resize(index) function pointer
  },
  {
    "stop_lines",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autodrive_msgs__msg__Detection, stop_lines),  // bytes offset in struct
    NULL,  // default value
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__size_function__Detection__stop_lines,  // size() function pointer
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_const_function__Detection__stop_lines,  // get_const(index) function pointer
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__get_function__Detection__stop_lines,  // get(index) function pointer
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__fetch_function__Detection__stop_lines,  // fetch(index, &value) function pointer
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__assign_function__Detection__stop_lines,  // assign(index, value) function pointer
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__resize_function__Detection__stop_lines  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_members = {
  "autodrive_msgs__msg",  // message namespace
  "Detection",  // message name
  9,  // number of fields
  sizeof(autodrive_msgs__msg__Detection),
  autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_member_array,  // message members
  autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_init_function,  // function to initialize message memory (memory has to be allocated)
  autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_type_support_handle = {
  0,
  &autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autodrive_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autodrive_msgs, msg, Detection)() {
  autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autodrive_msgs, msg, GeneralDetection)();
  autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autodrive_msgs, msg, DynamicObstacle)();
  autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autodrive_msgs, msg, StaticObstacle)();
  autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autodrive_msgs, msg, RailroadCrossing)();
  autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autodrive_msgs, msg, TrafficLight)();
  autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autodrive_msgs, msg, TrafficSign)();
  autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autodrive_msgs, msg, SpeedLimit)();
  autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autodrive_msgs, msg, Stopline)();
  if (!autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_type_support_handle.typesupport_identifier) {
    autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autodrive_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
