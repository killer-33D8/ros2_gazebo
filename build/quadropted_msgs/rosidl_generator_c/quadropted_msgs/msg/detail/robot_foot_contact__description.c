// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from quadropted_msgs:msg/RobotFootContact.idl
// generated code does not contain a copyright notice

#include "quadropted_msgs/msg/detail/robot_foot_contact__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_quadropted_msgs
const rosidl_type_hash_t *
quadropted_msgs__msg__RobotFootContact__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcd, 0x9c, 0x8a, 0x8e, 0x64, 0xc9, 0x5e, 0xe8,
      0xb6, 0x0a, 0x2c, 0x40, 0x6a, 0x12, 0x44, 0x94,
      0xf2, 0x4a, 0xea, 0xf0, 0x6b, 0x09, 0x51, 0x39,
      0xfd, 0x16, 0x84, 0x5e, 0x71, 0x9f, 0x0b, 0xe1,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char quadropted_msgs__msg__RobotFootContact__TYPE_NAME[] = "quadropted_msgs/msg/RobotFootContact";

// Define type names, field names, and default values
static char quadropted_msgs__msg__RobotFootContact__FIELD_NAME__contacts[] = "contacts";

static rosidl_runtime_c__type_description__Field quadropted_msgs__msg__RobotFootContact__FIELDS[] = {
  {
    {quadropted_msgs__msg__RobotFootContact__FIELD_NAME__contacts, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
quadropted_msgs__msg__RobotFootContact__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {quadropted_msgs__msg__RobotFootContact__TYPE_NAME, 36, 36},
      {quadropted_msgs__msg__RobotFootContact__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# RobotFootContact.msg\n"
  "bool[4] contacts  # [FR, FL, RR, RL]";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
quadropted_msgs__msg__RobotFootContact__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {quadropted_msgs__msg__RobotFootContact__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 59, 59},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
quadropted_msgs__msg__RobotFootContact__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *quadropted_msgs__msg__RobotFootContact__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
