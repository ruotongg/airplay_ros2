#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "ap_interfaces::ap_interfaces__rosidl_typesupport_c" for configuration "Debug"
set_property(TARGET ap_interfaces::ap_interfaces__rosidl_typesupport_c APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(ap_interfaces::ap_interfaces__rosidl_typesupport_c PROPERTIES
  IMPORTED_IMPLIB_DEBUG "${_IMPORT_PREFIX}/lib/ap_interfaces__rosidl_typesupport_c.lib"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/bin/ap_interfaces__rosidl_typesupport_c.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS ap_interfaces::ap_interfaces__rosidl_typesupport_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_ap_interfaces::ap_interfaces__rosidl_typesupport_c "${_IMPORT_PREFIX}/lib/ap_interfaces__rosidl_typesupport_c.lib" "${_IMPORT_PREFIX}/bin/ap_interfaces__rosidl_typesupport_c.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
