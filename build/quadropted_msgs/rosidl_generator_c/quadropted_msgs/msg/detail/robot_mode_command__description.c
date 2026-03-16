// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from quadropted_msgs:msg/RobotModeCommand.idl
// generated code does not contain a copyright notice

#include "quadropted_msgs/msg/detail/robot_mode_command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_quadropted_msgs
const rosidl_type_hash_t *
quadropted_msgs__msg__RobotModeCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5d, 0x00, 0x03, 0xcd, 0x8e, 0xf1, 0x5f, 0x27,
      0x1c, 0x0a, 0x23, 0x1a, 0x2a, 0x1a, 0xb2, 0x2b,
      0x31, 0xb4, 0x7a, 0x87, 0xe4, 0xac, 0x5b, 0xae,
      0x4e, 0xeb, 0xc3, 0x7a, 0xb0, 0x26, 0xb8, 0x4e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char quadropted_msgs__msg__RobotModeCommand__TYPE_NAME[] = "quadropted_msgs/msg/RobotModeCommand";

// Define type names, field names, and default values
static char quadropted_msgs__msg__RobotModeCommand__FIELD_NAME__mode[] = "mode";
static char quadropted_msgs__msg__RobotModeCommand__FIELD_NAME__robot_id[] = "robot_id";

static rosidl_runtime_c__type_description__Field quadropted_msgs__msg__RobotModeCommand__FIELDS[] = {
  {
    {quadropted_msgs__msg__RobotModeCommand__FIELD_NAME__mode, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {quadropted_msgs__msg__RobotModeCommand__FIELD_NAME__robot_id, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
quadropted_msgs__msg__RobotModeCommand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {quadropted_msgs__msg__RobotModeCommand__TYPE_NAME, 36, 36},
      {quadropted_msgs__msg__RobotModeCommand__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# RobotModeCommand.msg\n"
  "# \\xd0\\x9e\\xd0\\xbf\\xd0\\xb8\\xd1\\x81\\xd0\\xb0\\xd0\\xbd\\xd0\\xb8\\xd0\\xb5 \\xd1\\x80\\xd0\\xb5\\xd0\\xb6\\xd0\\xb8\\xd0\\xbc\\xd0\\xb0 \\xd1\\x80\\xd0\\xb0\\xd0\\xb1\\xd0\\xbe\\xd1\\x82\\xd1\\x8b \\xd1\\x80\\xd0\\xbe\\xd0\\xb1\\xd0\\xbe\\xd1\\x82\\xd0\\xb0\n"
  "\n"
  "# \\xd0\\x92\\xd0\\xbe\\xd0\\xb7\\xd0\\xbc\\xd0\\xbe\\xd0\\xb6\\xd0\\xbd\\xd1\\x8b\\xd0\\xb5 \\xd1\\x80\\xd0\\xb5\\xd0\\xb6\\xd0\\xb8\\xd0\\xbc\\xd1\\x8b \\xd1\\x80\\xd0\\xb0\\xd0\\xb1\\xd0\\xbe\\xd1\\x82\\xd1\\x8b\n"
  "string mode  # \\xd0\\xa0\\xd0\\xb5\\xd0\\xb6\\xd0\\xb8\\xd0\\xbc \\xd1\\x80\\xd0\\xb0\\xd0\\xb1\\xd0\\xbe\\xd1\\x82\\xd1\\x8b: REST, TROT, CRAWL, STAND, etc.\n"
  "\n"
  "# \\xd0\\x9e\\xd0\\xbf\\xd1\\x86\\xd0\\xb8\\xd0\\xbe\\xd0\\xbd\\xd0\\xb0\\xd0\\xbb\\xd1\\x8c\\xd0\\xbd\\xd0\\xbe: \\xd0\\x94\\xd0\\xbe\\xd0\\xb1\\xd0\\xb0\\xd0\\xb2\\xd0\\xbb\\xd0\\xb5\\xd0\\xbd\\xd0\\xb8\\xd0\\xb5 \\xd0\\xb4\\xd0\\xbe\\xd0\\xbf\\xd0\\xbe\\xd0\\xbb\\xd0\\xbd\\xd0\\xb8\\xd1\\x82\\xd0\\xb5\\xd0\\xbb\\xd1\\x8c\\xd0\\xbd\\xd1\\x8b\\xd1\\x85 \\xd0\\xbf\\xd0\\xb0\\xd1\\x80\\xd0\\xb0\\xd0\\xbc\\xd0\\xb5\\xd1\\x82\\xd1\\x80\\xd0\\xbe\\xd0\\xb2\n"
  "uint16 robot_id  # \\xd0\\x98\\xd0\\xb4\\xd0\\xb5\\xd0\\xbd\\xd1\\x82\\xd0\\xb8\\xd1\\x84\\xd0\\xb8\\xd0\\xba\\xd0\\xb0\\xd1\\x82\\xd0\\xbe\\xd1\\x80 \\xd1\\x80\\xd0\\xbe\\xd0\\xb1\\xd0\\xbe\\xd1\\x82\\xd0\\xb0 (\\xd0\\xb5\\xd1\\x81\\xd0\\xbb\\xd0\\xb8 \\xd0\\xb8\\xd1\\x81\\xd0\\xbf\\xd0\\xbe\\xd0\\xbb\\xd1\\x8c\\xd0\\xb7\\xd1\\x83\\xd0\\xb5\\xd1\\x82\\xd1\\x81\\xd1\\x8f \\xd0\\xbd\\xd0\\xb5\\xd1\\x81\\xd0\\xba\\xd0\\xbe\\xd0\\xbb\\xd1\\x8c\\xd0\\xba\\xd0\\xbe \\xd1\\x80\\xd0\\xbe\\xd0\\xb1\\xd0\\xbe\\xd1\\x82\\xd0\\xbe\\xd0\\xb2)";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
quadropted_msgs__msg__RobotModeCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {quadropted_msgs__msg__RobotModeCommand__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 272, 272},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
quadropted_msgs__msg__RobotModeCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *quadropted_msgs__msg__RobotModeCommand__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
