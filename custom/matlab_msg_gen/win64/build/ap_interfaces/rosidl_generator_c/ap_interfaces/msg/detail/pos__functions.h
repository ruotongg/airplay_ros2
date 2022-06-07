// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ap_interfaces:msg\Pos.idl
// generated code does not contain a copyright notice

#ifndef AP_INTERFACES__MSG__DETAIL__POS__FUNCTIONS_H_
#define AP_INTERFACES__MSG__DETAIL__POS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ap_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "ap_interfaces/msg/detail/pos__struct.h"

/// Initialize msg/Pos message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ap_interfaces__msg__Pos
 * )) before or use
 * ap_interfaces__msg__Pos__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ap_interfaces
bool
ap_interfaces__msg__Pos__init(ap_interfaces__msg__Pos * msg);

/// Finalize msg/Pos message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ap_interfaces
void
ap_interfaces__msg__Pos__fini(ap_interfaces__msg__Pos * msg);

/// Create msg/Pos message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ap_interfaces__msg__Pos__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ap_interfaces
ap_interfaces__msg__Pos *
ap_interfaces__msg__Pos__create();

/// Destroy msg/Pos message.
/**
 * It calls
 * ap_interfaces__msg__Pos__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ap_interfaces
void
ap_interfaces__msg__Pos__destroy(ap_interfaces__msg__Pos * msg);


/// Initialize array of msg/Pos messages.
/**
 * It allocates the memory for the number of elements and calls
 * ap_interfaces__msg__Pos__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ap_interfaces
bool
ap_interfaces__msg__Pos__Sequence__init(ap_interfaces__msg__Pos__Sequence * array, size_t size);

/// Finalize array of msg/Pos messages.
/**
 * It calls
 * ap_interfaces__msg__Pos__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ap_interfaces
void
ap_interfaces__msg__Pos__Sequence__fini(ap_interfaces__msg__Pos__Sequence * array);

/// Create array of msg/Pos messages.
/**
 * It allocates the memory for the array and calls
 * ap_interfaces__msg__Pos__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ap_interfaces
ap_interfaces__msg__Pos__Sequence *
ap_interfaces__msg__Pos__Sequence__create(size_t size);

/// Destroy array of msg/Pos messages.
/**
 * It calls
 * ap_interfaces__msg__Pos__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ap_interfaces
void
ap_interfaces__msg__Pos__Sequence__destroy(ap_interfaces__msg__Pos__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // AP_INTERFACES__MSG__DETAIL__POS__FUNCTIONS_H_
