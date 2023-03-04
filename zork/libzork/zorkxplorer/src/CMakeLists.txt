project("libzork")

add_executable(main main.cc)

target_link_libraries(main PRIVATE
    #runner
    #store
    story
    #variables
)
