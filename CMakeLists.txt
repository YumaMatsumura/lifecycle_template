cmake_minimum_required(VERSION 3.5)
project(lifecycle_template)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_lifecycle REQUIRED)

include_directories(
  include
)

add_executable(lifecycle_template
  src/main.cpp
  src/lifecycle_template.cpp
)

ament_target_dependencies(lifecycle_template
  rclcpp
  rclcpp_lifecycle
)

install(TARGETS lifecycle_template
  DESTINATION lib/${PROJECT_NAME}
)


ament_package()
