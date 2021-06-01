cmake_minimum_required(VERSION 3.12)
project(leetcode)

add_subdirectory(leetcode)

set(HDRS
    ./leetcode
)
include_directories(${HDRS})

add_executable(test main.cpp)
target_link_libraries(test ltd)