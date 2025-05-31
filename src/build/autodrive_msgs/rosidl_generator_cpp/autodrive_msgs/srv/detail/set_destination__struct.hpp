// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autodrive_msgs:srv/SetDestination.idl
// generated code does not contain a copyright notice

#ifndef AUTODRIVE_MSGS__SRV__DETAIL__SET_DESTINATION__STRUCT_HPP_
#define AUTODRIVE_MSGS__SRV__DETAIL__SET_DESTINATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__autodrive_msgs__srv__SetDestination_Request __attribute__((deprecated))
#else
# define DEPRECATED__autodrive_msgs__srv__SetDestination_Request __declspec(deprecated)
#endif

namespace autodrive_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetDestination_Request_
{
  using Type = SetDestination_Request_<ContainerAllocator>;

  explicit SetDestination_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->latitude = 0.0;
      this->longitude = 0.0;
      this->parking_lot = false;
      this->rand = false;
      this->rand_mindist = 0;
      this->auto_re = false;
      this->skip_confirm = false;
      this->local_coord = false;
    }
  }

  explicit SetDestination_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->latitude = 0.0;
      this->longitude = 0.0;
      this->parking_lot = false;
      this->rand = false;
      this->rand_mindist = 0;
      this->auto_re = false;
      this->skip_confirm = false;
      this->local_coord = false;
    }
  }

  // field types and members
  using _latitude_type =
    double;
  _latitude_type latitude;
  using _longitude_type =
    double;
  _longitude_type longitude;
  using _parking_lot_type =
    bool;
  _parking_lot_type parking_lot;
  using _rand_type =
    bool;
  _rand_type rand;
  using _rand_mindist_type =
    int8_t;
  _rand_mindist_type rand_mindist;
  using _auto_re_type =
    bool;
  _auto_re_type auto_re;
  using _skip_confirm_type =
    bool;
  _skip_confirm_type skip_confirm;
  using _local_coord_type =
    bool;
  _local_coord_type local_coord;

  // setters for named parameter idiom
  Type & set__latitude(
    const double & _arg)
  {
    this->latitude = _arg;
    return *this;
  }
  Type & set__longitude(
    const double & _arg)
  {
    this->longitude = _arg;
    return *this;
  }
  Type & set__parking_lot(
    const bool & _arg)
  {
    this->parking_lot = _arg;
    return *this;
  }
  Type & set__rand(
    const bool & _arg)
  {
    this->rand = _arg;
    return *this;
  }
  Type & set__rand_mindist(
    const int8_t & _arg)
  {
    this->rand_mindist = _arg;
    return *this;
  }
  Type & set__auto_re(
    const bool & _arg)
  {
    this->auto_re = _arg;
    return *this;
  }
  Type & set__skip_confirm(
    const bool & _arg)
  {
    this->skip_confirm = _arg;
    return *this;
  }
  Type & set__local_coord(
    const bool & _arg)
  {
    this->local_coord = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autodrive_msgs::srv::SetDestination_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const autodrive_msgs::srv::SetDestination_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autodrive_msgs::srv::SetDestination_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autodrive_msgs::srv::SetDestination_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autodrive_msgs::srv::SetDestination_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autodrive_msgs::srv::SetDestination_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autodrive_msgs::srv::SetDestination_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autodrive_msgs::srv::SetDestination_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autodrive_msgs::srv::SetDestination_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autodrive_msgs::srv::SetDestination_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autodrive_msgs__srv__SetDestination_Request
    std::shared_ptr<autodrive_msgs::srv::SetDestination_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autodrive_msgs__srv__SetDestination_Request
    std::shared_ptr<autodrive_msgs::srv::SetDestination_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetDestination_Request_ & other) const
  {
    if (this->latitude != other.latitude) {
      return false;
    }
    if (this->longitude != other.longitude) {
      return false;
    }
    if (this->parking_lot != other.parking_lot) {
      return false;
    }
    if (this->rand != other.rand) {
      return false;
    }
    if (this->rand_mindist != other.rand_mindist) {
      return false;
    }
    if (this->auto_re != other.auto_re) {
      return false;
    }
    if (this->skip_confirm != other.skip_confirm) {
      return false;
    }
    if (this->local_coord != other.local_coord) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetDestination_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetDestination_Request_

// alias to use template instance with default allocator
using SetDestination_Request =
  autodrive_msgs::srv::SetDestination_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace autodrive_msgs


#ifndef _WIN32
# define DEPRECATED__autodrive_msgs__srv__SetDestination_Response __attribute__((deprecated))
#else
# define DEPRECATED__autodrive_msgs__srv__SetDestination_Response __declspec(deprecated)
#endif

namespace autodrive_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetDestination_Response_
{
  using Type = SetDestination_Response_<ContainerAllocator>;

  explicit SetDestination_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error = false;
    }
  }

  explicit SetDestination_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error = false;
    }
  }

  // field types and members
  using _error_type =
    bool;
  _error_type error;

  // setters for named parameter idiom
  Type & set__error(
    const bool & _arg)
  {
    this->error = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autodrive_msgs::srv::SetDestination_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const autodrive_msgs::srv::SetDestination_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autodrive_msgs::srv::SetDestination_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autodrive_msgs::srv::SetDestination_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autodrive_msgs::srv::SetDestination_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autodrive_msgs::srv::SetDestination_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autodrive_msgs::srv::SetDestination_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autodrive_msgs::srv::SetDestination_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autodrive_msgs::srv::SetDestination_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autodrive_msgs::srv::SetDestination_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autodrive_msgs__srv__SetDestination_Response
    std::shared_ptr<autodrive_msgs::srv::SetDestination_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autodrive_msgs__srv__SetDestination_Response
    std::shared_ptr<autodrive_msgs::srv::SetDestination_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetDestination_Response_ & other) const
  {
    if (this->error != other.error) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetDestination_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetDestination_Response_

// alias to use template instance with default allocator
using SetDestination_Response =
  autodrive_msgs::srv::SetDestination_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace autodrive_msgs

namespace autodrive_msgs
{

namespace srv
{

struct SetDestination
{
  using Request = autodrive_msgs::srv::SetDestination_Request;
  using Response = autodrive_msgs::srv::SetDestination_Response;
};

}  // namespace srv

}  // namespace autodrive_msgs

#endif  // AUTODRIVE_MSGS__SRV__DETAIL__SET_DESTINATION__STRUCT_HPP_
