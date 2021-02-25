cmake_minimum_required(
    VERSION 3.11)

project(
    Algorithms
    VERSION 1.0
    DESCRIPTION "Example C++ implementations of standard algorithms."
    LANGUAGES CXX)

# Required for Catch2 in testing
include(FetchContent)
if(${CMAKE_VERSION} VERSION_LESS 3.14)
  include(cmake/add_FetchContent_MakeAvailable.cmake)
endif()

if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)

    # Ensure -std=c++xx instead of -std=g++xx
    set(CMAKE_CXX_EXTENSIONS OFF)
    # Ensure C++ 17 support
    set(CMAKE_CXX_STANDARD 17)      
    set(CMAKE_CXX_STANDARD_REQUIRED True)
    # Use CMakes testing
    include(CTest)
  
endif()

# add library code
include_directories(src)
add_subdirectory(src)

enable_testing()

# Testing only available in the main app
if((CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
   AND BUILD_TESTING)
  add_subdirectory(tests)
endif()
