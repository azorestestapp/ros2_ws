// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autodrive_msgs:msg/GeneralDetection.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__MSG__DETAIL__GENERAL_DETECTION__STRUCT_HPP_
#define AUTODRIVE_MSGS__MSG__DETAIL__GENERAL_DETECTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'bounding_box'
#include "vision_msgs/msg/detail/bounding_box3_d__struct.hpp"
// Member 'velocity'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autodrive_msgs__msg__GeneralDetection __attribute__((deprecated))
#else
# define DEPRECATED__autodrive_msgs__msg__GeneralDetection __declspec(deprecated)
#endif

namespace autodrive_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GeneralDetection_
{
  using Type = GeneralDetection_<ContainerAllocator>;

  explicit GeneralDetection_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : bounding_box(_init),
    velocity(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ull;
    }
  }

  explicit GeneralDetection_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : bounding_box(_alloc, _init),
    velocity(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ull;
    }
  }

  // field types and members
  using _bounding_box_type =
    vision_msgs::msg::BoundingBox3D_<ContainerAllocator>;
  _bounding_box_type bounding_box;
  using _velocity_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _velocity_type velocity;
  using _id_type =
    uint64_t;
  _id_type id;

  // setters for named parameter idiom
  Type & set__bounding_box(
    const vision_msgs::msg::BoundingBox3D_<ContainerAllocator> & _arg)
  {
    this->bounding_box = _arg;
    return *this;
  }
  Type & set__velocity(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__id(
    const uint64_t & _arg)
  {
    this->id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autodrive_msgs::msg::GeneralDetection_<ContainerAllocator> *;
  using ConstRawPtr =
    const autodrive_msgs::msg::GeneralDetection_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autodrive_msgs::msg::GeneralDetection_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autodrive_msgs::msg::GeneralDetection_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autodrive_msgs::msg::GeneralDetection_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autodrive_msgs::msg::GeneralDetection_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autodrive_msgs::msg::GeneralDetection_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autodrive_msgs::msg::GeneralDetection_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autodrive_msgs::msg::GeneralDetection_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autodrive_msgs::msg::GeneralDetection_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autodrive_msgs__msg__GeneralDetection
    std::shared_ptr<autodrive_msgs::msg::GeneralDetection_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autodrive_msgs__msg__GeneralDetection
    std::shared_ptr<autodrive_msgs::msg::GeneralDetection_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GeneralDetection_ & other) const
  {
    if (this->bounding_box != other.bounding_box) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    return true;
  }
  bool operator!=(const GeneralDetection_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GeneralDetection_

// alias to use template instance with default allocator
using GeneralDetection =
  autodrive_msgs::msg::GeneralDetection_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autodrive_msgs

#endif  // AUTODRIVE_MSGS__MSG__DETAIL__GENERAL_DETECTION__STRUCT_HPP_
