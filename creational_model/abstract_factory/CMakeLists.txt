cmake_minimum_required(VERSION 3.15)

set(target_name abstract_factory)

project(${target_name})

file(GLOB SRC ${CMAKE_CURRENT_SOURCE_DIR}/*.cc)

set(CMAKE_CXX_STANDARD_REQUIRED 17)

# set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/build)

# include_directories(${CMAKE_CURRENT_SOURCE_DIR}/)

add_executable(${target_name} ${SRC})