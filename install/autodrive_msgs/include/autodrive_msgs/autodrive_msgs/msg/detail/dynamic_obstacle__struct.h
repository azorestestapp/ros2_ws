// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autodrive_msgs:msg/DynamicObstacle.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__DYNAMIC_OBSTACLE__STRUCT_H_
#define AUTODRIVE_MSGS__MSG__DETAIL__DYNAMIC_OBSTACLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'VEHICLE'.
enum
{
  autodrive_msgs__msg__DynamicObstacle__VEHICLE = 0
};

/// Constant 'BIKER'.
/**
  * not a hells angel
 */
enum
{
  autodrive_msgs__msg__DynamicObstacle__BIKER = 1
};

/// Constant 'PEDESTRIAN'.
enum
{
  autodrive_msgs__msg__DynamicObstacle__PEDESTRIAN = 2
};

/// Constant 'DEER'.
enum
{
  autodrive_msgs__msg__DynamicObstacle__DEER = 3
};

/// Constant 'MISC'.
/**
  * soccer ball, garabage bag, stuff on road that shouldn't be there
 */
enum
{
  autodrive_msgs__msg__DynamicObstacle__MISC = 4
};

// Include directives for member types
// Member 'detection'
#include "autodrive_msgs/msg/detail/general_detection__struct.h"

/// Struct defined in msg/DynamicObstacle in the package autodrive_msgs.
typedef struct autodrive_msgs__msg__DynamicObstacle
{
  autodrive_msgs__msg__GeneralDetection detection;
  int8_t obstacle_type;
  float dynamic_confidence;
} autodrive_msgs__msg__DynamicObstacle;

// Struct for a sequence of autodrive_msgs__msg__DynamicObstacle.
typedef struct autodrive_msgs__msg__DynamicObstacle__Sequence
{
  autodrive_msgs__msg__DynamicObstacle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autodrive_msgs__msg__DynamicObstacle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__DYNAMIC_OBSTACLE__STRUCT_H_
