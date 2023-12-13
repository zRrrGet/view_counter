include(FetchContent)
FetchContent_Declare(
  googletest
  # Specify the commit you depend on and update it regularly.
  URL https://github.com/google/googletest/archive/5376968f6948923e2411081fd9372e71a59d8e77.zip
)

FetchContent_MakeAvailable(googletest)

# Now simply link against gtest or gtest_main as needed. Eg
add_executable(main_test test.cpp)
target_link_libraries(main_test gtest_main view_counter)

add_custom_command(TARGET main_test
                   POST_BUILD
                   COMMAND main_test)