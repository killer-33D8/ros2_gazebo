// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from quadropted_msgs:srv/RobotBehaviorCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "quadropted_msgs/srv/detail/robot_behavior_command__rosidl_typesupport_introspection_c.h"
#include "quadropted_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "quadropted_msgs/srv/detail/robot_behavior_command__functions.h"
#include "quadropted_msgs/srv/detail/robot_behavior_command__struct.h"


// Include directives for member types
// Member `command`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void quadropted_msgs__srv__RobotBehaviorCommand_Request__rosidl_typesupport_introspection_c__RobotBehaviorCommand_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  quadropted_msgs__srv__RobotBehaviorCommand_Request__init(message_memory);
}

void quadropted_msgs__srv__RobotBehaviorCommand_Request__rosidl_typesupport_introspection_c__RobotBehaviorCommand_Request_fini_function(void * message_memory)
{
  quadropted_msgs__srv__RobotBehaviorCommand_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember quadropted_msgs__srv__RobotBehaviorCommand_Request__rosidl_typesupport_introspection_c__RobotBehaviorCommand_Request_message_member_array[1] = {
  {
    "command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadropted_msgs__srv__RobotBehaviorCommand_Request, command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers quadropted_msgs__srv__RobotBehaviorCommand_Request__rosidl_typesupport_introspection_c__RobotBehaviorCommand_Request_message_members = {
  "quadropted_msgs__srv",  // message namespace
  "RobotBehaviorCommand_Request",  // message name
  1,  // number of fields
  sizeof(quadropted_msgs__srv__RobotBehaviorCommand_Request),
  false,  // has_any_key_member_
  quadropted_msgs__srv__RobotBehaviorCommand_Request__rosidl_typesupport_introspection_c__RobotBehaviorCommand_Request_message_member_array,  // message members
  quadropted_msgs__srv__RobotBehaviorCommand_Request__rosidl_typesupport_introspection_c__RobotBehaviorCommand_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  quadropted_msgs__srv__RobotBehaviorCommand_Request__rosidl_typesupport_introspection_c__RobotBehaviorCommand_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t quadropted_msgs__srv__RobotBehaviorCommand_Request__rosidl_typesupport_introspection_c__RobotBehaviorCommand_Request_message_type_support_handle = {
  0,
  &quadropted_msgs__srv__RobotBehaviorCommand_Request__rosidl_typesupport_introspection_c__RobotBehaviorCommand_Request_message_members,
  get_message_typesupport_handle_function,
  &quadropted_msgs__srv__RobotBehaviorCommand_Request__get_type_hash,
  &quadropted_msgs__srv__RobotBehaviorCommand_Request__get_type_description,
  &quadropted_msgs__srv__RobotBehaviorCommand_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_quadropted_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, quadropted_msgs, srv, RobotBehaviorCommand_Request)() {
  if (!quadropted_msgs__srv__RobotBehaviorCommand_Request__rosidl_typesupport_introspection_c__RobotBehaviorCommand_Request_message_type_support_handle.typesupport_identifier) {
    quadropted_msgs__srv__RobotBehaviorCommand_Request__rosidl_typesupport_introspection_c__RobotBehaviorCommand_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &quadropted_msgs__srv__RobotBehaviorCommand_Request__rosidl_typesupport_introspection_c__RobotBehaviorCommand_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "quadropted_msgs/srv/detail/robot_behavior_command__rosidl_typesupport_introspection_c.h"
// already included above
// #include "quadropted_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "quadropted_msgs/srv/detail/robot_behavior_command__functions.h"
// already included above
// #include "quadropted_msgs/srv/detail/robot_behavior_command__struct.h"


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void quadropted_msgs__srv__RobotBehaviorCommand_Response__rosidl_typesupport_introspection_c__RobotBehaviorCommand_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  quadropted_msgs__srv__RobotBehaviorCommand_Response__init(message_memory);
}

void quadropted_msgs__srv__RobotBehaviorCommand_Response__rosidl_typesupport_introspection_c__RobotBehaviorCommand_Response_fini_function(void * message_memory)
{
  quadropted_msgs__srv__RobotBehaviorCommand_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember quadropted_msgs__srv__RobotBehaviorCommand_Response__rosidl_typesupport_introspection_c__RobotBehaviorCommand_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadropted_msgs__srv__RobotBehaviorCommand_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadropted_msgs__srv__RobotBehaviorCommand_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers quadropted_msgs__srv__RobotBehaviorCommand_Response__rosidl_typesupport_introspection_c__RobotBehaviorCommand_Response_message_members = {
  "quadropted_msgs__srv",  // message namespace
  "RobotBehaviorCommand_Response",  // message name
  2,  // number of fields
  sizeof(quadropted_msgs__srv__RobotBehaviorCommand_Response),
  false,  // has_any_key_member_
  quadropted_msgs__srv__RobotBehaviorCommand_Response__rosidl_typesupport_introspection_c__RobotBehaviorCommand_Response_message_member_array,  // message members
  quadropted_msgs__srv__RobotBehaviorCommand_Response__rosidl_typesupport_introspection_c__RobotBehaviorCommand_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  quadropted_msgs__srv__RobotBehaviorCommand_Response__rosidl_typesupport_introspection_c__RobotBehaviorCommand_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t quadropted_msgs__srv__RobotBehaviorCommand_Response__rosidl_typesupport_introspection_c__RobotBehaviorCommand_Response_message_type_support_handle = {
  0,
  &quadropted_msgs__srv__RobotBehaviorCommand_Response__rosidl_typesupport_introspection_c__RobotBehaviorCommand_Response_message_members,
  get_message_typesupport_handle_function,
  &quadropted_msgs__srv__RobotBehaviorCommand_Response__get_type_hash,
  &quadropted_msgs__srv__RobotBehaviorCommand_Response__get_type_description,
  &quadropted_msgs__srv__RobotBehaviorCommand_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_quadropted_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, quadropted_msgs, srv, RobotBehaviorCommand_Response)() {
  if (!quadropted_msgs__srv__RobotBehaviorCommand_Response__rosidl_typesupport_introspection_c__RobotBehaviorCommand_Response_message_type_support_handle.typesupport_identifier) {
    quadropted_msgs__srv__RobotBehaviorCommand_Response__rosidl_typesupport_introspection_c__RobotBehaviorCommand_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &quadropted_msgs__srv__RobotBehaviorCommand_Response__rosidl_typesupport_introspection_c__RobotBehaviorCommand_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "quadropted_msgs/srv/detail/robot_behavior_command__rosidl_typesupport_introspection_c.h"
// already included above
// #include "quadropted_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "quadropted_msgs/srv/detail/robot_behavior_command__functions.h"
// already included above
// #include "quadropted_msgs/srv/detail/robot_behavior_command__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "quadropted_msgs/srv/robot_behavior_command.h"
// Member `request`
// Member `response`
// already included above
// #include "quadropted_msgs/srv/detail/robot_behavior_command__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void quadropted_msgs__srv__RobotBehaviorCommand_Event__rosidl_typesupport_introspection_c__RobotBehaviorCommand_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  quadropted_msgs__srv__RobotBehaviorCommand_Event__init(message_memory);
}

void quadropted_msgs__srv__RobotBehaviorCommand_Event__rosidl_typesupport_introspection_c__RobotBehaviorCommand_Event_fini_function(void * message_memory)
{
  quadropted_msgs__srv__RobotBehaviorCommand_Event__fini(message_memory);
}

size_t quadropted_msgs__srv__RobotBehaviorCommand_Event__rosidl_typesupport_introspection_c__size_function__RobotBehaviorCommand_Event__request(
  const void * untyped_member)
{
  const quadropted_msgs__srv__RobotBehaviorCommand_Request__Sequence * member =
    (const quadropted_msgs__srv__RobotBehaviorCommand_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * quadropted_msgs__srv__RobotBehaviorCommand_Event__rosidl_typesupport_introspection_c__get_const_function__RobotBehaviorCommand_Event__request(
  const void * untyped_member, size_t index)
{
  const quadropted_msgs__srv__RobotBehaviorCommand_Request__Sequence * member =
    (const quadropted_msgs__srv__RobotBehaviorCommand_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * quadropted_msgs__srv__RobotBehaviorCommand_Event__rosidl_typesupport_introspection_c__get_function__RobotBehaviorCommand_Event__request(
  void * untyped_member, size_t index)
{
  quadropted_msgs__srv__RobotBehaviorCommand_Request__Sequence * member =
    (quadropted_msgs__srv__RobotBehaviorCommand_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void quadropted_msgs__srv__RobotBehaviorCommand_Event__rosidl_typesupport_introspection_c__fetch_function__RobotBehaviorCommand_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const quadropted_msgs__srv__RobotBehaviorCommand_Request * item =
    ((const quadropted_msgs__srv__RobotBehaviorCommand_Request *)
    quadropted_msgs__srv__RobotBehaviorCommand_Event__rosidl_typesupport_introspection_c__get_const_function__RobotBehaviorCommand_Event__request(untyped_member, index));
  quadropted_msgs__srv__RobotBehaviorCommand_Request * value =
    (quadropted_msgs__srv__RobotBehaviorCommand_Request *)(untyped_value);
  *value = *item;
}

void quadropted_msgs__srv__RobotBehaviorCommand_Event__rosidl_typesupport_introspection_c__assign_function__RobotBehaviorCommand_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  quadropted_msgs__srv__RobotBehaviorCommand_Request * item =
    ((quadropted_msgs__srv__RobotBehaviorCommand_Request *)
    quadropted_msgs__srv__RobotBehaviorCommand_Event__rosidl_typesupport_introspection_c__get_function__RobotBehaviorCommand_Event__request(untyped_member, index));
  const quadropted_msgs__srv__RobotBehaviorCommand_Request * value =
    (const quadropted_msgs__srv__RobotBehaviorCommand_Request *)(untyped_value);
  *item = *value;
}

bool quadropted_msgs__srv__RobotBehaviorCommand_Event__rosidl_typesupport_introspection_c__resize_function__RobotBehaviorCommand_Event__request(
  void * untyped_member, size_t size)
{
  quadropted_msgs__srv__RobotBehaviorCommand_Request__Sequence * member =
    (quadropted_msgs__srv__RobotBehaviorCommand_Request__Sequence *)(untyped_member);
  quadropted_msgs__srv__RobotBehaviorCommand_Request__Sequence__fini(member);
  return quadropted_msgs__srv__RobotBehaviorCommand_Request__Sequence__init(member, size);
}

size_t quadropted_msgs__srv__RobotBehaviorCommand_Event__rosidl_typesupport_introspection_c__size_function__RobotBehaviorCommand_Event__response(
  const void * untyped_member)
{
  const quadropted_msgs__srv__RobotBehaviorCommand_Response__Sequence * member =
    (const quadropted_msgs__srv__RobotBehaviorCommand_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * quadropted_msgs__srv__RobotBehaviorCommand_Event__rosidl_typesupport_introspection_c__get_const_function__RobotBehaviorCommand_Event__response(
  const void * untyped_member, size_t index)
{
  const quadropted_msgs__srv__RobotBehaviorCommand_Response__Sequence * member =
    (const quadropted_msgs__srv__RobotBehaviorCommand_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * quadropted_msgs__srv__RobotBehaviorCommand_Event__rosidl_typesupport_introspection_c__get_function__RobotBehaviorCommand_Event__response(
  void * untyped_member, size_t index)
{
  quadropted_msgs__srv__RobotBehaviorCommand_Response__Sequence * member =
    (quadropted_msgs__srv__RobotBehaviorCommand_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void quadropted_msgs__srv__RobotBehaviorCommand_Event__rosidl_typesupport_introspection_c__fetch_function__RobotBehaviorCommand_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const quadropted_msgs__srv__RobotBehaviorCommand_Response * item =
    ((const quadropted_msgs__srv__RobotBehaviorCommand_Response *)
    quadropted_msgs__srv__RobotBehaviorCommand_Event__rosidl_typesupport_introspection_c__get_const_function__RobotBehaviorCommand_Event__response(untyped_member, index));
  quadropted_msgs__srv__RobotBehaviorCommand_Response * value =
    (quadropted_msgs__srv__RobotBehaviorCommand_Response *)(untyped_value);
  *value = *item;
}

void quadropted_msgs__srv__RobotBehaviorCommand_Event__rosidl_typesupport_introspection_c__assign_function__RobotBehaviorCommand_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  quadropted_msgs__srv__RobotBehaviorCommand_Response * item =
    ((quadropted_msgs__srv__RobotBehaviorCommand_Response *)
    quadropted_msgs__srv__RobotBehaviorCommand_Event__rosidl_typesupport_introspection_c__get_function__RobotBehaviorCommand_Event__response(untyped_member, index));
  const quadropted_msgs__srv__RobotBehaviorCommand_Response * value =
    (const quadropted_msgs__srv__RobotBehaviorCommand_Response *)(untyped_value);
  *item = *value;
}

bool quadropted_msgs__srv__RobotBehaviorCommand_Event__rosidl_typesupport_introspection_c__resize_function__RobotBehaviorCommand_Event__response(
  void * untyped_member, size_t size)
{
  quadropted_msgs__srv__RobotBehaviorCommand_Response__Sequence * member =
    (quadropted_msgs__srv__RobotBehaviorCommand_Response__Sequence *)(untyped_member);
  quadropted_msgs__srv__RobotBehaviorCommand_Response__Sequence__fini(member);
  return quadropted_msgs__srv__RobotBehaviorCommand_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember quadropted_msgs__srv__RobotBehaviorCommand_Event__rosidl_typesupport_introspection_c__RobotBehaviorCommand_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(quadropted_msgs__srv__RobotBehaviorCommand_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(quadropted_msgs__srv__RobotBehaviorCommand_Event, request),  // bytes offset in struct
    NULL,  // default value
    quadropted_msgs__srv__RobotBehaviorCommand_Event__rosidl_typesupport_introspection_c__size_function__RobotBehaviorCommand_Event__request,  // size() function pointer
    quadropted_msgs__srv__RobotBehaviorCommand_Event__rosidl_typesupport_introspection_c__get_const_function__RobotBehaviorCommand_Event__request,  // get_const(index) function pointer
    quadropted_msgs__srv__RobotBehaviorCommand_Event__rosidl_typesupport_introspection_c__get_function__RobotBehaviorCommand_Event__request,  // get(index) function pointer
    quadropted_msgs__srv__RobotBehaviorCommand_Event__rosidl_typesupport_introspection_c__fetch_function__RobotBehaviorCommand_Event__request,  // fetch(index, &value) function pointer
    quadropted_msgs__srv__RobotBehaviorCommand_Event__rosidl_typesupport_introspection_c__assign_function__RobotBehaviorCommand_Event__request,  // assign(index, value) function pointer
    quadropted_msgs__srv__RobotBehaviorCommand_Event__rosidl_typesupport_introspection_c__resize_function__RobotBehaviorCommand_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(quadropted_msgs__srv__RobotBehaviorCommand_Event, response),  // bytes offset in struct
    NULL,  // default value
    quadropted_msgs__srv__RobotBehaviorCommand_Event__rosidl_typesupport_introspection_c__size_function__RobotBehaviorCommand_Event__response,  // size() function pointer
    quadropted_msgs__srv__RobotBehaviorCommand_Event__rosidl_typesupport_introspection_c__get_const_function__RobotBehaviorCommand_Event__response,  // get_const(index) function pointer
    quadropted_msgs__srv__RobotBehaviorCommand_Event__rosidl_typesupport_introspection_c__get_function__RobotBehaviorCommand_Event__response,  // get(index) function pointer
    quadropted_msgs__srv__RobotBehaviorCommand_Event__rosidl_typesupport_introspection_c__fetch_function__RobotBehaviorCommand_Event__response,  // fetch(index, &value) function pointer
    quadropted_msgs__srv__RobotBehaviorCommand_Event__rosidl_typesupport_introspection_c__assign_function__RobotBehaviorCommand_Event__response,  // assign(index, value) function pointer
    quadropted_msgs__srv__RobotBehaviorCommand_Event__rosidl_typesupport_introspection_c__resize_function__RobotBehaviorCommand_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers quadropted_msgs__srv__RobotBehaviorCommand_Event__rosidl_typesupport_introspection_c__RobotBehaviorCommand_Event_message_members = {
  "quadropted_msgs__srv",  // message namespace
  "RobotBehaviorCommand_Event",  // message name
  3,  // number of fields
  sizeof(quadropted_msgs__srv__RobotBehaviorCommand_Event),
  false,  // has_any_key_member_
  quadropted_msgs__srv__RobotBehaviorCommand_Event__rosidl_typesupport_introspection_c__RobotBehaviorCommand_Event_message_member_array,  // message members
  quadropted_msgs__srv__RobotBehaviorCommand_Event__rosidl_typesupport_introspection_c__RobotBehaviorCommand_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  quadropted_msgs__srv__RobotBehaviorCommand_Event__rosidl_typesupport_introspection_c__RobotBehaviorCommand_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t quadropted_msgs__srv__RobotBehaviorCommand_Event__rosidl_typesupport_introspection_c__RobotBehaviorCommand_Event_message_type_support_handle = {
  0,
  &quadropted_msgs__srv__RobotBehaviorCommand_Event__rosidl_typesupport_introspection_c__RobotBehaviorCommand_Event_message_members,
  get_message_typesupport_handle_function,
  &quadropted_msgs__srv__RobotBehaviorCommand_Event__get_type_hash,
  &quadropted_msgs__srv__RobotBehaviorCommand_Event__get_type_description,
  &quadropted_msgs__srv__RobotBehaviorCommand_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_quadropted_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, quadropted_msgs, srv, RobotBehaviorCommand_Event)() {
  quadropted_msgs__srv__RobotBehaviorCommand_Event__rosidl_typesupport_introspection_c__RobotBehaviorCommand_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  quadropted_msgs__srv__RobotBehaviorCommand_Event__rosidl_typesupport_introspection_c__RobotBehaviorCommand_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, quadropted_msgs, srv, RobotBehaviorCommand_Request)();
  quadropted_msgs__srv__RobotBehaviorCommand_Event__rosidl_typesupport_introspection_c__RobotBehaviorCommand_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, quadropted_msgs, srv, RobotBehaviorCommand_Response)();
  if (!quadropted_msgs__srv__RobotBehaviorCommand_Event__rosidl_typesupport_introspection_c__RobotBehaviorCommand_Event_message_type_support_handle.typesupport_identifier) {
    quadropted_msgs__srv__RobotBehaviorCommand_Event__rosidl_typesupport_introspection_c__RobotBehaviorCommand_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &quadropted_msgs__srv__RobotBehaviorCommand_Event__rosidl_typesupport_introspection_c__RobotBehaviorCommand_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "quadropted_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "quadropted_msgs/srv/detail/robot_behavior_command__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers quadropted_msgs__srv__detail__robot_behavior_command__rosidl_typesupport_introspection_c__RobotBehaviorCommand_service_members = {
  "quadropted_msgs__srv",  // service namespace
  "RobotBehaviorCommand",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // quadropted_msgs__srv__detail__robot_behavior_command__rosidl_typesupport_introspection_c__RobotBehaviorCommand_Request_message_type_support_handle,
  NULL,  // response message
  // quadropted_msgs__srv__detail__robot_behavior_command__rosidl_typesupport_introspection_c__RobotBehaviorCommand_Response_message_type_support_handle
  NULL  // event_message
  // quadropted_msgs__srv__detail__robot_behavior_command__rosidl_typesupport_introspection_c__RobotBehaviorCommand_Response_message_type_support_handle
};


static rosidl_service_type_support_t quadropted_msgs__srv__detail__robot_behavior_command__rosidl_typesupport_introspection_c__RobotBehaviorCommand_service_type_support_handle = {
  0,
  &quadropted_msgs__srv__detail__robot_behavior_command__rosidl_typesupport_introspection_c__RobotBehaviorCommand_service_members,
  get_service_typesupport_handle_function,
  &quadropted_msgs__srv__RobotBehaviorCommand_Request__rosidl_typesupport_introspection_c__RobotBehaviorCommand_Request_message_type_support_handle,
  &quadropted_msgs__srv__RobotBehaviorCommand_Response__rosidl_typesupport_introspection_c__RobotBehaviorCommand_Response_message_type_support_handle,
  &quadropted_msgs__srv__RobotBehaviorCommand_Event__rosidl_typesupport_introspection_c__RobotBehaviorCommand_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    quadropted_msgs,
    srv,
    RobotBehaviorCommand
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    quadropted_msgs,
    srv,
    RobotBehaviorCommand
  ),
  &quadropted_msgs__srv__RobotBehaviorCommand__get_type_hash,
  &quadropted_msgs__srv__RobotBehaviorCommand__get_type_description,
  &quadropted_msgs__srv__RobotBehaviorCommand__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, quadropted_msgs, srv, RobotBehaviorCommand_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, quadropted_msgs, srv, RobotBehaviorCommand_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, quadropted_msgs, srv, RobotBehaviorCommand_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_quadropted_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, quadropted_msgs, srv, RobotBehaviorCommand)(void) {
  if (!quadropted_msgs__srv__detail__robot_behavior_command__rosidl_typesupport_introspection_c__RobotBehaviorCommand_service_type_support_handle.typesupport_identifier) {
    quadropted_msgs__srv__detail__robot_behavior_command__rosidl_typesupport_introspection_c__RobotBehaviorCommand_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)quadropted_msgs__srv__detail__robot_behavior_command__rosidl_typesupport_introspection_c__RobotBehaviorCommand_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, quadropted_msgs, srv, RobotBehaviorCommand_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, quadropted_msgs, srv, RobotBehaviorCommand_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, quadropted_msgs, srv, RobotBehaviorCommand_Event)()->data;
  }

  return &quadropted_msgs__srv__detail__robot_behavior_command__rosidl_typesupport_introspection_c__RobotBehaviorCommand_service_type_support_handle;
}
