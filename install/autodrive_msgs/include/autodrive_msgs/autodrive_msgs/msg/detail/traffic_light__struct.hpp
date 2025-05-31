// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autodrive_msgs:msg/TrafficLight.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__TRAFFIC_LIGHT__STRUCT_HPP_
#define AUTODRIVE_MSGS__MSG__DETAIL__TRAFFIC_LIGHT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'detection'
#include "autodrive_msgs/msg/detail/general_detection__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autodrive_msgs__msg__TrafficLight __attribute__((deprecated))
#else
# define DEPRECATED__autodrive_msgs__msg__TrafficLight __declspec(deprecated)
#endif

namespace autodrive_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrafficLight_
{
  using Type = TrafficLight_<ContainerAllocator>;

  explicit TrafficLight_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : detection(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->main_bulb = 0;
      this->main_bulb_confidence = 0.0f;
      this->left_turn = 0;
      this->left_bulb_confidence = 0.0f;
      this->right_turn = 0;
      this->right_bulb_confidence = 0.0f;
      this->flashing = false;
      this->shape_category = 0;
      this->shape_confidence = 0.0f;
    }
  }

  explicit TrafficLight_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : detection(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->main_bulb = 0;
      this->main_bulb_confidence = 0.0f;
      this->left_turn = 0;
      this->left_bulb_confidence = 0.0f;
      this->right_turn = 0;
      this->right_bulb_confidence = 0.0f;
      this->flashing = false;
      this->shape_category = 0;
      this->shape_confidence = 0.0f;
    }
  }

  // field types and members
  using _detection_type =
    autodrive_msgs::msg::GeneralDetection_<ContainerAllocator>;
  _detection_type detection;
  using _corresponding_lane_type =
    std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>>;
  _corresponding_lane_type corresponding_lane;
  using _associated_light_type =
    std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>>;
  _associated_light_type associated_light;
  using _associated_stop_line_type =
    std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>>;
  _associated_stop_line_type associated_stop_line;
  using _main_bulb_type =
    int8_t;
  _main_bulb_type main_bulb;
  using _main_bulb_confidence_type =
    float;
  _main_bulb_confidence_type main_bulb_confidence;
  using _left_turn_type =
    int8_t;
  _left_turn_type left_turn;
  using _left_bulb_confidence_type =
    float;
  _left_bulb_confidence_type left_bulb_confidence;
  using _right_turn_type =
    int8_t;
  _right_turn_type right_turn;
  using _right_bulb_confidence_type =
    float;
  _right_bulb_confidence_type right_bulb_confidence;
  using _flashing_type =
    bool;
  _flashing_type flashing;
  using _shape_category_type =
    int8_t;
  _shape_category_type shape_category;
  using _shape_confidence_type =
    float;
  _shape_confidence_type shape_confidence;

  // setters for named parameter idiom
  Type & set__detection(
    const autodrive_msgs::msg::GeneralDetection_<ContainerAllocator> & _arg)
  {
    this->detection = _arg;
    return *this;
  }
  Type & set__corresponding_lane(
    const std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>> & _arg)
  {
    this->corresponding_lane = _arg;
    return *this;
  }
  Type & set__associated_light(
    const std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>> & _arg)
  {
    this->associated_light = _arg;
    return *this;
  }
  Type & set__associated_stop_line(
    const std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>> & _arg)
  {
    this->associated_stop_line = _arg;
    return *this;
  }
  Type & set__main_bulb(
    const int8_t & _arg)
  {
    this->main_bulb = _arg;
    return *this;
  }
  Type & set__main_bulb_confidence(
    const float & _arg)
  {
    this->main_bulb_confidence = _arg;
    return *this;
  }
  Type & set__left_turn(
    const int8_t & _arg)
  {
    this->left_turn = _arg;
    return *this;
  }
  Type & set__left_bulb_confidence(
    const float & _arg)
  {
    this->left_bulb_confidence = _arg;
    return *this;
  }
  Type & set__right_turn(
    const int8_t & _arg)
  {
    this->right_turn = _arg;
    return *this;
  }
  Type & set__right_bulb_confidence(
    const float & _arg)
  {
    this->right_bulb_confidence = _arg;
    return *this;
  }
  Type & set__flashing(
    const bool & _arg)
  {
    this->flashing = _arg;
    return *this;
  }
  Type & set__shape_category(
    const int8_t & _arg)
  {
    this->shape_category = _arg;
    return *this;
  }
  Type & set__shape_confidence(
    const float & _arg)
  {
    this->shape_confidence = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t OFF =
    0;
  static constexpr int8_t RED =
    1;
  static constexpr int8_t YELLOW =
    2;
  static constexpr int8_t GREEN =
    3;
  static constexpr int8_t THREE_BULB =
    0;
  static constexpr int8_t FOUR_BULB =
    1;
  static constexpr int8_t DOGHOUSE =
    2;
  static constexpr int8_t TRIANGLE =
    3;

  // pointer types
  using RawPtr =
    autodrive_msgs::msg::TrafficLight_<ContainerAllocator> *;
  using ConstRawPtr =
    const autodrive_msgs::msg::TrafficLight_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autodrive_msgs::msg::TrafficLight_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autodrive_msgs::msg::TrafficLight_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autodrive_msgs::msg::TrafficLight_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autodrive_msgs::msg::TrafficLight_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autodrive_msgs::msg::TrafficLight_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autodrive_msgs::msg::TrafficLight_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autodrive_msgs::msg::TrafficLight_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autodrive_msgs::msg::TrafficLight_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autodrive_msgs__msg__TrafficLight
    std::shared_ptr<autodrive_msgs::msg::TrafficLight_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autodrive_msgs__msg__TrafficLight
    std::shared_ptr<autodrive_msgs::msg::TrafficLight_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrafficLight_ & other) const
  {
    if (this->detection != other.detection) {
      return false;
    }
    if (this->corresponding_lane != other.corresponding_lane) {
      return false;
    }
    if (this->associated_light != other.associated_light) {
      return false;
    }
    if (this->associated_stop_line != other.associated_stop_line) {
      return false;
    }
    if (this->main_bulb != other.main_bulb) {
      return false;
    }
    if (this->main_bulb_confidence != other.main_bulb_confidence) {
      return false;
    }
    if (this->left_turn != other.left_turn) {
      return false;
    }
    if (this->left_bulb_confidence != other.left_bulb_confidence) {
      return false;
    }
    if (this->right_turn != other.right_turn) {
      return false;
    }
    if (this->right_bulb_confidence != other.right_bulb_confidence) {
      return false;
    }
    if (this->flashing != other.flashing) {
      return false;
    }
    if (this->shape_category != other.shape_category) {
      return false;
    }
    if (this->shape_confidence != other.shape_confidence) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrafficLight_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrafficLight_

// alias to use template instance with default allocator
using TrafficLight =
  autodrive_msgs::msg::TrafficLight_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t TrafficLight_<ContainerAllocator>::OFF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t TrafficLight_<ContainerAllocator>::RED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t TrafficLight_<ContainerAllocator>::YELLOW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t TrafficLight_<ContainerAllocator>::GREEN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t TrafficLight_<ContainerAllocator>::THREE_BULB;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t TrafficLight_<ContainerAllocator>::FOUR_BULB;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t TrafficLight_<ContainerAllocator>::DOGHOUSE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t TrafficLight_<ContainerAllocator>::TRIANGLE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace autodrive_msgs

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__TRAFFIC_LIGHT__STRUCT_HPP_
