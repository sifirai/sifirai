cmake_minimum_required(VERSION 3.25)
project(sifirai LANGUAGES CXX)

# Enable strict warnings
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Treat warnings as errors in Debug builds
if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    if (MSVC)
        add_compile_options(/W4 /WX)
    else()
        add_compile_options(-Wall -Wextra -Wpedantic -Werror)
    endif()
endif()

# Build executable
add_executable(tensor_expand src/main.cpp)

# Enable faster build flags for Release
target_compile_options(tensor_expand PRIVATE
    $<$<CONFIG:Release>:-O3 -march=native>
    $<$<CONFIG:RelWithDebInfo>:-O2>
)
