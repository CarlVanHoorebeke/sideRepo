cmake_minimum_required(VERSION "3.22.1")
project("libzork")




set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fpermissive")




add_subdirectory(include)
add_subdirectory(src)

add_executable(main main.cc)

target_link_libraries(main PRIVATE
    #runner
    #store
    story
    #variables
)

#add_subdirectory(zorkxplorer)

# option(BUILD_EXAMPLES "Whether or not to build examples" ON)

# if (BUILD_EXAMPLES)
#     message(STATUS "Building examples...")
#     add_subdirectory(example)
#endif()