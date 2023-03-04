add_executable(cmake cmake.c)
set_target_properties(cmake PROPERTIES
    C_STANDARD 99
    C_EXTENSIONS OFF
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}
)

find_library("gitlab-ci.yml")

target_link_libraries(cmake PRIVATEs)

add_subdirectory("src")