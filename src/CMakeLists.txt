include(FetchContent)
FetchContent_Declare(httplib
    GIT_REPOSITORY https://github.com/yhirose/cpp-httplib)
FetchContent_MakeAvailable(httplib)

get_target_property(HTTPLIB_SOURCE_DIR httplib SOURCE_DIR)
include_directories(${HTTPLIB_SOURCE_DIR})

add_subdirectory(shared)

set(SOURCE_FILES main.cpp)
link_libraries(view_counter)
add_executable(main ${SOURCE_FILES})