cmake_minimum_required(VERSION 3.12)
project(leetcode)

add_subdirectory(leetcode)

set(HDRS
    ./leetcode
)
include_directories(${HDRS})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(CMAKE_BUILD_TYPE "Debug")
set(CMAKE_C_FLAGS_DEBUG "-O0 -Wall -g -ggdb")
set(CMAKE_CXX_FLAGS_DEBUG "-O0 -Wall -g -ggdb")

add_executable(test main.cpp)
target_link_libraries(test ltd)