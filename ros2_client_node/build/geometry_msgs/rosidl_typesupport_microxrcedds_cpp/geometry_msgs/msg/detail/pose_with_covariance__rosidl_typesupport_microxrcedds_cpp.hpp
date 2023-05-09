// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__rosidl_typesupport_microxrcedds_cpp.hpp.em
// with input from geometry_msgs:msg/PoseWithCovariance.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__POSE_WITH_COVARIANCE__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_
#define GEOMETRY_MSGS__MSG__POSE_WITH_COVARIANCE__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "geometry_msgs/msg/rosidl_typesupport_microxrcedds_cpp__visibility_control.h"
#include "geometry_msgs/msg/detail/pose_with_covariance__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "ucdr/microcdr.h"

namespace geometry_msgs
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_geometry_msgs
cdr_serialize(
  const geometry_msgs::msg::PoseWithCovariance & ros_message,
  ucdrBuffer * cdr);

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_geometry_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  geometry_msgs::msg::PoseWithCovariance & ros_message);

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_geometry_msgs
get_serialized_size(
  const geometry_msgs::msg::PoseWithCovariance & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_geometry_msgs
max_serialized_size_PoseWithCovariance(
  bool * full_bounded,
  size_t current_alignment);

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace geometry_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_geometry_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, geometry_msgs, msg, PoseWithCovariance)();

#ifdef __cplusplus
}
#endif

#endif  // GEOMETRY_MSGS__MSG__POSE_WITH_COVARIANCE__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_