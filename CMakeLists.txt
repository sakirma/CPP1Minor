cmake_minimum_required(VERSION 3.13)
project(CPP1)

set(CMAKE_CXX_STANDARD 20)

add_executable(week1 week1/file1.cpp)

target_sources(week1
        PRIVATE week1/file2.cpp)