project("libzork")

add_library(story
    node.cc
    choice.cc
    story.cc
    )

target_include_directories(story
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/../../../include)