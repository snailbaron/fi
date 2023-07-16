cmake_minimum_required(VERSION 3.12)

project(fi)

set(CMAKE_COLOR_DIAGNOSTICS ON)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

if(MSVC)
    add_compile_options(/W4)
else()
    add_compile_options(-Wall -Wextra -pedantic)
endif()

configure_file(build-info.hpp.in include/fi/build-info.hpp @ONLY)

add_library(fi
    fs.cpp
    memory_mapped_file.cpp
)
target_include_directories(fi PUBLIC
    include
    ${CMAKE_CURRENT_BINARY_DIR}/include
)
