// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autodrive_msgs:msg/TrafficLight.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__TRAFFIC_LIGHT__STRUCT_H_
#define AUTODRIVE_MSGS__MSG__DETAIL__TRAFFIC_LIGHT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'OFF'.
enum
{
  autodrive_msgs__msg__TrafficLight__OFF = 0
};

/// Constant 'RED'.
enum
{
  autodrive_msgs__msg__TrafficLight__RED = 1
};

/// Constant 'YELLOW'.
enum
{
  autodrive_msgs__msg__TrafficLight__YELLOW = 2
};

/// Constant 'GREEN'.
enum
{
  autodrive_msgs__msg__TrafficLight__GREEN = 3
};

/// Constant 'THREE_BULB'.
enum
{
  autodrive_msgs__msg__TrafficLight__THREE_BULB = 0
};

/// Constant 'FOUR_BULB'.
enum
{
  autodrive_msgs__msg__TrafficLight__FOUR_BULB = 1
};

/// Constant 'DOGHOUSE'.
enum
{
  autodrive_msgs__msg__TrafficLight__DOGHOUSE = 2
};

/// Constant 'TRIANGLE'.
enum
{
  autodrive_msgs__msg__TrafficLight__TRIANGLE = 3
};

// Include directives for member types
// Member 'detection'
#include "autodrive_msgs/msg/detail/general_detection__struct.h"
// Member 'corresponding_lane'
// Member 'associated_light'
// Member 'associated_stop_line'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/TrafficLight in the package autodrive_msgs.
typedef struct autodrive_msgs__msg__TrafficLight
{
  autodrive_msgs__msg__GeneralDetection detection;
  rosidl_runtime_c__uint64__Sequence corresponding_lane;
  rosidl_runtime_c__uint64__Sequence associated_light;
  rosidl_runtime_c__uint64__Sequence associated_stop_line;
  int8_t main_bulb;
  float main_bulb_confidence;
  int8_t left_turn;
  float left_bulb_confidence;
  int8_t right_turn;
  float right_bulb_confidence;
  bool flashing;
  int8_t shape_category;
  float shape_confidence;
} autodrive_msgs__msg__TrafficLight;

// Struct for a sequence of autodrive_msgs__msg__TrafficLight.
typedef struct autodrive_msgs__msg__TrafficLight__Sequence
{
  autodrive_msgs__msg__TrafficLight * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autodrive_msgs__msg__TrafficLight__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__TRAFFIC_LIGHT__STRUCT_H_
