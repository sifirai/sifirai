cmake_minimum_required(VERSION 3.25)
project(sifirai LANGUAGES CXX)

list(PREPEND CMAKE_MODULE_PATH "${sifirai_SOURCE_DIR}/cmake")
include(utils)

add_subdirectory(src/tensor)

# Treat warnings as errors in Debug builds
if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    if (MSVC)
        add_compile_options(/W4 /WX)
    else()
        add_compile_options(-Wall -Wextra -Wpedantic -Werror)
    endif()
endif()

# Main binary (for now)
add_executable(sifirai src/main.cpp)
target_link_libraries(sifirai PRIVATE sifirai::tensor)

# Enable faster build flags for Release
target_compile_options(sifirai PRIVATE
    $<$<CONFIG:Release>:-O3 -march=native>
    $<$<CONFIG:RelWithDebInfo>:-O2>
)

sifirai_target_properties(sifirai)

