cmake_minimum_required(VERSION 3.17)
project(week2)

set(CMAKE_CXX_STANDARD 20)


add_executable(week2 main.cpp
        Observable.cpp
        Observable.h)

add_custom_command(TARGET week2 POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
        "${CMAKE_CURRENT_SOURCE_DIR}/input.txt"
        $<TARGET_FILE_DIR:week2>)
