cmake_minimum_required(VERSION 3.7)
project(CPP1)

set(CMAKE_CXX_STANDARD 20)

add_executable(CPP1
        file1.cpp)

add_executable(CPP1_AAP
        Aap.cpp)


target_sources(CPP1
        PRIVATE file2.cpp)