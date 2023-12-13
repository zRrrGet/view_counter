project(view_counter_project)

add_library(view_counter
    ViewCounter.hpp
    ViewCounter.cpp
)
target_include_directories(view_counter PUBLIC ${PROJECT_SOURCE_DIR})
