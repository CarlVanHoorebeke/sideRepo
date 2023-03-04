project("libzork")

add_library(store
    store.cc
    )

target_include_directories(store
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/../../../include)