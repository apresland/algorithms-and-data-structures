# Add Catch2 testing library
FetchContent_Declare(
  catch
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG v2.9.1)
FetchContent_MakeAvailable(catch)

# Test executable added first
add_executable(testlib algorithms_test.cpp)

# Use C++17 in the test
target_compile_features(testlib PRIVATE cxx_std_17)

# Register the test so ctest will run it
add_test(NAME testlibtest COMMAND testlib)

# Link to the algorithm library and the Catch2 testing library
target_link_libraries(testlib algorithms_library Catch2::Catch2)

