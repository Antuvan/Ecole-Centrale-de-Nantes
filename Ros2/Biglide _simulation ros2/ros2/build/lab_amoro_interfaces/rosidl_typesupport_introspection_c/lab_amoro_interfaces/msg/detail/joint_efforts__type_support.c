// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from lab_amoro_interfaces:msg/JointEfforts.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "lab_amoro_interfaces/msg/detail/joint_efforts__rosidl_typesupport_introspection_c.h"
#include "lab_amoro_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "lab_amoro_interfaces/msg/detail/joint_efforts__functions.h"
#include "lab_amoro_interfaces/msg/detail/joint_efforts__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void lab_amoro_interfaces__msg__JointEfforts__rosidl_typesupport_introspection_c__JointEfforts_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  lab_amoro_interfaces__msg__JointEfforts__init(message_memory);
}

void lab_amoro_interfaces__msg__JointEfforts__rosidl_typesupport_introspection_c__JointEfforts_fini_function(void * message_memory)
{
  lab_amoro_interfaces__msg__JointEfforts__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember lab_amoro_interfaces__msg__JointEfforts__rosidl_typesupport_introspection_c__JointEfforts_message_member_array[2] = {
  {
    "left_joint",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lab_amoro_interfaces__msg__JointEfforts, left_joint),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_joint",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lab_amoro_interfaces__msg__JointEfforts, right_joint),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers lab_amoro_interfaces__msg__JointEfforts__rosidl_typesupport_introspection_c__JointEfforts_message_members = {
  "lab_amoro_interfaces__msg",  // message namespace
  "JointEfforts",  // message name
  2,  // number of fields
  sizeof(lab_amoro_interfaces__msg__JointEfforts),
  lab_amoro_interfaces__msg__JointEfforts__rosidl_typesupport_introspection_c__JointEfforts_message_member_array,  // message members
  lab_amoro_interfaces__msg__JointEfforts__rosidl_typesupport_introspection_c__JointEfforts_init_function,  // function to initialize message memory (memory has to be allocated)
  lab_amoro_interfaces__msg__JointEfforts__rosidl_typesupport_introspection_c__JointEfforts_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t lab_amoro_interfaces__msg__JointEfforts__rosidl_typesupport_introspection_c__JointEfforts_message_type_support_handle = {
  0,
  &lab_amoro_interfaces__msg__JointEfforts__rosidl_typesupport_introspection_c__JointEfforts_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lab_amoro_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lab_amoro_interfaces, msg, JointEfforts)() {
  if (!lab_amoro_interfaces__msg__JointEfforts__rosidl_typesupport_introspection_c__JointEfforts_message_type_support_handle.typesupport_identifier) {
    lab_amoro_interfaces__msg__JointEfforts__rosidl_typesupport_introspection_c__JointEfforts_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &lab_amoro_interfaces__msg__JointEfforts__rosidl_typesupport_introspection_c__JointEfforts_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
