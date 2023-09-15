cmake_minimum_required(VERSION 3.24)

set(CMAKE_CXX_STANDARD 11)

project(conan-cmake-v2-example)

find_package(fmt REQUIRED)

add_library(${PROJECT_NAME} SHARED src/main.cc)

target_link_libraries(${PROJECT_NAME} PRIVATE fmt::fmt)
