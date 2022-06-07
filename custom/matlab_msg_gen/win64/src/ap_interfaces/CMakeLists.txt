cmake_minimum_required(VERSION 3.5)
project(ap_interfaces)
set(CMAKE_VERBOSE_MAKEFILE ON)
# Set CMAKE_BUILD_TYPE
set(CMAKE_BUILD_TYPE Release)
# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()
# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()
# find dependencies
find_package(ament_cmake REQUIRED)
find_package(ament_cmake_ros REQUIRED)
find_package(rosidl_typesupport_c REQUIRED)
find_package(rosidl_typesupport_cpp REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package( class_loader REQUIRED)
find_package( console_bridge REQUIRED)
find_package( rclcpp REQUIRED)
find_package( rcutils REQUIRED)
include_directories("C:/Program Files/MATLAB/R2022a/extern/include")
include_directories("C:/Program Files/MATLAB/R2022a/extern/include/MatlabDataArray")
include_directories("C:/Program Files/MATLAB/R2022a/toolbox/ros/include/ros2")
include_directories("include/ap_interfaces")
set (CMAKE_SKIP_BUILD_RPATH false)
set (CMAKE_BUILD_WITH_INSTALL_RPATH true)
set (CMAKE_INSTALL_RPATH "${CMAKE_INSTALL_PREFIX}/lib")
set (CMAKE_INSTALL_RPATH_USE_LINK_PATH TRUE)
set(msg_files
  "msg/Pos.msg"
)
set(srv_files
)
rosidl_generate_interfaces(${PROJECT_NAME}
  ${msg_files}
  ${srv_files}
)
link_directories("C:/Program Files/MATLAB/R2022a/extern/lib/win64/microsoft")
# Library
add_library(
    ap_interfaces_matlab 
    SHARED
    src/ap_interfaces_Pos_message.cpp
)
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
target_compile_options(ap_interfaces_matlab PUBLIC 
  $<$<OR:$<COMPILE_LANGUAGE:CXX>,$<COMPILE_LANGUAGE:C>>:
  -Wall -Wextra -Wpedantic
  >)
endif()
target_include_directories(ap_interfaces_matlab PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
target_link_libraries( ap_interfaces_matlab
	libMatlabDataArray
	${CMAKE_DL_LIBS}
	)
ament_target_dependencies(
  ap_interfaces_matlab
  "class_loader"
  "console_bridge"
  "rclcpp"
  "rcutils"
)
rosidl_target_interfaces(
	  ap_interfaces_matlab
      ${PROJECT_NAME} "rosidl_typesupport_cpp")
# Causes the visibility macros to use dllexport rather than dllimport,
# which is appropriate when building the dll but not consuming it.
target_compile_definitions(ap_interfaces_matlab PRIVATE "AP_INTERFACES_BUILDING_LIBRARY")
install(
  DIRECTORY include/
  DESTINATION include
)
install(
  TARGETS ap_interfaces_matlab
  EXPORT export_${PROJECT_NAME}
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin
)
install (DIRECTORY m/ DESTINATION m/ FILES_MATCHING PATTERN "*.m")
ament_export_include_directories(
  include
)
ament_export_libraries(
  ap_interfaces_matlab
)
foreach(file_i ${CUDA_BINS})
add_custom_command(
                   TARGET 
                   POST_BUILD
                   COMMAND ${CMAKE_COMMAND}
                   ARGS -E copy ${PROJECT_SOURCE_DIR}/src/${file_i} ${CMAKE_INSTALL_PREFIX}/_ert_rtw/${file_i}
				   )
endforeach(file_i)
ament_package()
# Generated on Mon Jun 06 18:24:48 2022
