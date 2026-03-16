// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from quadropted_msgs:msg/RobotGaitCommand.idl
// generated code does not contain a copyright notice

#include "quadropted_msgs/msg/detail/robot_gait_command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_quadropted_msgs
const rosidl_type_hash_t *
quadropted_msgs__msg__RobotGaitCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x67, 0x3a, 0x50, 0x2d, 0x46, 0xed, 0x10, 0x32,
      0x65, 0x39, 0x4b, 0x0f, 0x92, 0x95, 0x4c, 0x73,
      0x19, 0xd6, 0x15, 0x0c, 0xcd, 0x4c, 0x30, 0x49,
      0x5d, 0x8c, 0xad, 0x2d, 0x54, 0x53, 0x1b, 0x0d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char quadropted_msgs__msg__RobotGaitCommand__TYPE_NAME[] = "quadropted_msgs/msg/RobotGaitCommand";

// Define type names, field names, and default values
static char quadropted_msgs__msg__RobotGaitCommand__FIELD_NAME__robot_id[] = "robot_id";
static char quadropted_msgs__msg__RobotGaitCommand__FIELD_NAME__gait_type[] = "gait_type";
static char quadropted_msgs__msg__RobotGaitCommand__FIELD_NAME__body_height[] = "body_height";
static char quadropted_msgs__msg__RobotGaitCommand__FIELD_NAME__leg_height[] = "leg_height";

static rosidl_runtime_c__type_description__Field quadropted_msgs__msg__RobotGaitCommand__FIELDS[] = {
  {
    {quadropted_msgs__msg__RobotGaitCommand__FIELD_NAME__robot_id, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {quadropted_msgs__msg__RobotGaitCommand__FIELD_NAME__gait_type, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {quadropted_msgs__msg__RobotGaitCommand__FIELD_NAME__body_height, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {quadropted_msgs__msg__RobotGaitCommand__FIELD_NAME__leg_height, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
quadropted_msgs__msg__RobotGaitCommand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {quadropted_msgs__msg__RobotGaitCommand__TYPE_NAME, 36, 36},
      {quadropted_msgs__msg__RobotGaitCommand__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# RobotGaitCommand.msg\n"
  "# ID \\xd1\\x80\\xd0\\xbe\\xd0\\xb1\\xd0\\xbe\\xd1\\x82\\xd0\\xb0\n"
  "uint16 robot_id\n"
  "# \\xd0\\xa2\\xd0\\xb8\\xd0\\xbf \\xd0\\xbf\\xd0\\xbe\\xd1\\x85\\xd0\\xbe\\xd0\\xb4\\xd0\\xba\\xd0\\xb8\n"
  "uint16 gait_type\n"
  "# \\xd0\\x92\\xd1\\x8b\\xd1\\x81\\xd0\\xbe\\xd1\\x82\\xd0\\xb0 \\xd0\\xba\\xd0\\xbe\\xd1\\x80\\xd0\\xbf\\xd1\\x83\\xd1\\x81\\xd0\\xb0\n"
  "float32 body_height\n"
  "# \\xd0\\x92\\xd1\\x8b\\xd1\\x81\\xd0\\xbe\\xd1\\x82\\xd0\\xb0 \\xd1\\x88\\xd0\\xb0\\xd0\\xb3\\xd0\\xb0\n"
  "float32 leg_height\n"
  "\n"
  "\n"
  "# RobotGaitConstants.msg\n"
  "uint16 GAIT_TYPE_IDLE = 0\n"
  "uint16 GAIT_TYPE_TROT = 1\n"
  "uint16 GAIT_TYPE_TROT_RUN = 2\n"
  "uint16 GAIT_TYPE_CLIMB_STAIR = 3\n"
  "uint16 GAIT_TYPE_TROT_OBST = 4";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
quadropted_msgs__msg__RobotGaitCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {quadropted_msgs__msg__RobotGaitCommand__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 324, 324},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
quadropted_msgs__msg__RobotGaitCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *quadropted_msgs__msg__RobotGaitCommand__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
