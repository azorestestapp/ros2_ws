// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autodrive_msgs:msg/StaticObstacle.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__STATIC_OBSTACLE__STRUCT_H_
#define AUTODRIVE_MSGS__MSG__DETAIL__STATIC_OBSTACLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TRAFFIC_CONE'.
enum
{
  autodrive_msgs__msg__StaticObstacle__TRAFFIC_CONE = 0
};

/// Constant 'BARRIER'.
enum
{
  autodrive_msgs__msg__StaticObstacle__BARRIER = 1
};

/// Constant 'BIKE_LANE_PROTECTOR'.
enum
{
  autodrive_msgs__msg__StaticObstacle__BIKE_LANE_PROTECTOR = 2
};

/// Constant 'SPEED_BUMP'.
enum
{
  autodrive_msgs__msg__StaticObstacle__SPEED_BUMP = 3
};

/// Constant 'MISC'.
enum
{
  autodrive_msgs__msg__StaticObstacle__MISC = 4
};

// Include directives for member types
// Member 'detection'
#include "autodrive_msgs/msg/detail/general_detection__struct.h"

/// Struct defined in msg/StaticObstacle in the package autodrive_msgs.
typedef struct autodrive_msgs__msg__StaticObstacle
{
  autodrive_msgs__msg__GeneralDetection detection;
  int8_t obstacle_type;
  float static_obstacle_confidence;
} autodrive_msgs__msg__StaticObstacle;

// Struct for a sequence of autodrive_msgs__msg__StaticObstacle.
typedef struct autodrive_msgs__msg__StaticObstacle__Sequence
{
  autodrive_msgs__msg__StaticObstacle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autodrive_msgs__msg__StaticObstacle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__STATIC_OBSTACLE__STRUCT_H_
