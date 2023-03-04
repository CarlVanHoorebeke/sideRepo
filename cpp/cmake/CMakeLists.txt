cmake_minimum_required(VERSION 3.22)

project(cmake)

add_library(common_options INTERFACE)
target_compile_options(common_options INTERFACE
    "-Wall"
    "-Wextra"
    "-pedantic"
    "-std=c++20"
    "-Wold-style-cast"

    # Release CFLAGS
    $<$<CONFIG:Release>:-Werror>
    $<$<CONFIG:Release>:-O3>

    # Debug CFLAGS
    $<$<CONFIG:Debug>:-g>
)
