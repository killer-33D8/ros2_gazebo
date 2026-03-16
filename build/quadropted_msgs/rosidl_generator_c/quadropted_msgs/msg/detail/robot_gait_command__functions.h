// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from quadropted_msgs:msg/RobotGaitCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "quadropted_msgs/msg/robot_gait_command.h"


#ifndef QUADROPTED_MSGS__MSG__DETAIL__ROBOT_GAIT_COMMAND__FUNCTIONS_H_
#define QUADROPTED_MSGS__MSG__DETAIL__ROBOT_GAIT_COMMAND__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "quadropted_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "quadropted_msgs/msg/detail/robot_gait_command__struct.h"

/// Initialize msg/RobotGaitCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * quadropted_msgs__msg__RobotGaitCommand
 * )) before or use
 * quadropted_msgs__msg__RobotGaitCommand__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_quadropted_msgs
bool
quadropted_msgs__msg__RobotGaitCommand__init(quadropted_msgs__msg__RobotGaitCommand * msg);

/// Finalize msg/RobotGaitCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_quadropted_msgs
void
quadropted_msgs__msg__RobotGaitCommand__fini(quadropted_msgs__msg__RobotGaitCommand * msg);

/// Create msg/RobotGaitCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * quadropted_msgs__msg__RobotGaitCommand__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_quadropted_msgs
quadropted_msgs__msg__RobotGaitCommand *
quadropted_msgs__msg__RobotGaitCommand__create(void);

/// Destroy msg/RobotGaitCommand message.
/**
 * It calls
 * quadropted_msgs__msg__RobotGaitCommand__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_quadropted_msgs
void
quadropted_msgs__msg__RobotGaitCommand__destroy(quadropted_msgs__msg__RobotGaitCommand * msg);

/// Check for msg/RobotGaitCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_quadropted_msgs
bool
quadropted_msgs__msg__RobotGaitCommand__are_equal(const quadropted_msgs__msg__RobotGaitCommand * lhs, const quadropted_msgs__msg__RobotGaitCommand * rhs);

/// Copy a msg/RobotGaitCommand message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_quadropted_msgs
bool
quadropted_msgs__msg__RobotGaitCommand__copy(
  const quadropted_msgs__msg__RobotGaitCommand * input,
  quadropted_msgs__msg__RobotGaitCommand * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_quadropted_msgs
const rosidl_type_hash_t *
quadropted_msgs__msg__RobotGaitCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_quadropted_msgs
const rosidl_runtime_c__type_description__TypeDescription *
quadropted_msgs__msg__RobotGaitCommand__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_quadropted_msgs
const rosidl_runtime_c__type_description__TypeSource *
quadropted_msgs__msg__RobotGaitCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_quadropted_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
quadropted_msgs__msg__RobotGaitCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/RobotGaitCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * quadropted_msgs__msg__RobotGaitCommand__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_quadropted_msgs
bool
quadropted_msgs__msg__RobotGaitCommand__Sequence__init(quadropted_msgs__msg__RobotGaitCommand__Sequence * array, size_t size);

/// Finalize array of msg/RobotGaitCommand messages.
/**
 * It calls
 * quadropted_msgs__msg__RobotGaitCommand__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_quadropted_msgs
void
quadropted_msgs__msg__RobotGaitCommand__Sequence__fini(quadropted_msgs__msg__RobotGaitCommand__Sequence * array);

/// Create array of msg/RobotGaitCommand messages.
/**
 * It allocates the memory for the array and calls
 * quadropted_msgs__msg__RobotGaitCommand__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_quadropted_msgs
quadropted_msgs__msg__RobotGaitCommand__Sequence *
quadropted_msgs__msg__RobotGaitCommand__Sequence__create(size_t size);

/// Destroy array of msg/RobotGaitCommand messages.
/**
 * It calls
 * quadropted_msgs__msg__RobotGaitCommand__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_quadropted_msgs
void
quadropted_msgs__msg__RobotGaitCommand__Sequence__destroy(quadropted_msgs__msg__RobotGaitCommand__Sequence * array);

/// Check for msg/RobotGaitCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_quadropted_msgs
bool
quadropted_msgs__msg__RobotGaitCommand__Sequence__are_equal(const quadropted_msgs__msg__RobotGaitCommand__Sequence * lhs, const quadropted_msgs__msg__RobotGaitCommand__Sequence * rhs);

/// Copy an array of msg/RobotGaitCommand messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_quadropted_msgs
bool
quadropted_msgs__msg__RobotGaitCommand__Sequence__copy(
  const quadropted_msgs__msg__RobotGaitCommand__Sequence * input,
  quadropted_msgs__msg__RobotGaitCommand__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // QUADROPTED_MSGS__MSG__DETAIL__ROBOT_GAIT_COMMAND__FUNCTIONS_H_
