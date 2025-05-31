// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autodrive_msgs:msg/GeneralDetection.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__GENERAL_DETECTION__STRUCT_H_
#define AUTODRIVE_MSGS__MSG__DETAIL__GENERAL_DETECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'bounding_box'
#include "vision_msgs/msg/detail/bounding_box3_d__struct.h"
// Member 'velocity'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/GeneralDetection in the package autodrive_msgs.
typedef struct autodrive_msgs__msg__GeneralDetection
{
  vision_msgs__msg__BoundingBox3D bounding_box;
  /// For 2D bounding boxes, use BoundingBox3D data sign_type
  /// Assign 2D x to y, y to z, and 0 to x
  /// Set center position as bottom left of bounding box
  geometry_msgs__msg__Vector3 velocity;
  uint64_t id;
} autodrive_msgs__msg__GeneralDetection;

// Struct for a sequence of autodrive_msgs__msg__GeneralDetection.
typedef struct autodrive_msgs__msg__GeneralDetection__Sequence
{
  autodrive_msgs__msg__GeneralDetection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autodrive_msgs__msg__GeneralDetection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__GENERAL_DETECTION__STRUCT_H_
