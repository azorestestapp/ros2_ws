// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autodrive_msgs:msg/Detection.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__DETECTION__STRUCT_H_
#define AUTODRIVE_MSGS__MSG__DETAIL__DETECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'detection'
#include "autodrive_msgs/msg/detail/general_detection__struct.h"
// Member 'dynamic_obstacles'
#include "autodrive_msgs/msg/detail/dynamic_obstacle__struct.h"
// Member 'static_obstacles'
#include "autodrive_msgs/msg/detail/static_obstacle__struct.h"
// Member 'railroad_crossings'
#include "autodrive_msgs/msg/detail/railroad_crossing__struct.h"
// Member 'traffic_lights'
#include "autodrive_msgs/msg/detail/traffic_light__struct.h"
// Member 'traffic_signs'
#include "autodrive_msgs/msg/detail/traffic_sign__struct.h"
// Member 'speed_limits'
#include "autodrive_msgs/msg/detail/speed_limit__struct.h"
// Member 'stop_lines'
#include "autodrive_msgs/msg/detail/stopline__struct.h"

/// Struct defined in msg/Detection in the package autodrive_msgs.
typedef struct autodrive_msgs__msg__Detection
{
  std_msgs__msg__Header header;
  autodrive_msgs__msg__GeneralDetection__Sequence detection;
  autodrive_msgs__msg__DynamicObstacle__Sequence dynamic_obstacles;
  autodrive_msgs__msg__StaticObstacle__Sequence static_obstacles;
  autodrive_msgs__msg__RailroadCrossing__Sequence railroad_crossings;
  autodrive_msgs__msg__TrafficLight__Sequence traffic_lights;
  autodrive_msgs__msg__TrafficSign__Sequence traffic_signs;
  autodrive_msgs__msg__SpeedLimit__Sequence speed_limits;
  autodrive_msgs__msg__Stopline__Sequence stop_lines;
} autodrive_msgs__msg__Detection;

// Struct for a sequence of autodrive_msgs__msg__Detection.
typedef struct autodrive_msgs__msg__Detection__Sequence
{
  autodrive_msgs__msg__Detection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autodrive_msgs__msg__Detection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__DETECTION__STRUCT_H_
