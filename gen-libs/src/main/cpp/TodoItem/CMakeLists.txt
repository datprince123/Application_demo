cmake_minimum_required(VERSION 3.4.1)
set(CMAKE_C_COMPILER "C:/MinGW/bin")

set(CMAKE_VERBOSE_MAKEFILE on)

add_library(TodoItem SHARED src/TodoItem.cpp)

set(distribution_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../../../../../distribution)
set_target_properties(TodoItem
        PROPERTIES
        ARCHIVE_OUTPUT_DIRECTORY
        "${distribution_DIR}/TodoItem/lib/${ANDROID_ABI}")

add_custom_command(TARGET TodoItem POST_BUILD
        COMMAND "${CMAKE_COMMAND})" -E
        copy "${CMAKE_CURRENT_SOURCE_DIR}/src/TodoItem.h"
        "${distribution_DIR}/TodoItem/include/TodoItem.h"
        COMMENT "Copying TodoItem to output directory")
