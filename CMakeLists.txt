cmake_minimum_required(VERSION 3.28)
project(sifirai CXX)

set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# add deps
include_directories(${CMAKE_SOURCE_DIR}/sai-deps/argparse/include)

# Add submodules
add_subdirectory(sai-libs)

add_executable(hello main.cxx)
target_link_libraries(hello 
    PRIVATE
    sai::core
)
