# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_draft_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED draft_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(draft_FOUND FALSE)
  elseif(NOT draft_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(draft_FOUND FALSE)
  endif()
  return()
endif()
set(_draft_CONFIG_INCLUDED TRUE)

# output package information
if(NOT draft_FIND_QUIETLY)
  message(STATUS "Found draft: 1.0.0 (${draft_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'draft' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${draft_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(draft_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_include_directories-extras.cmake")
foreach(_extra ${_extras})
  include("${draft_DIR}/${_extra}")
endforeach()
