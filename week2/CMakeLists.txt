cmake_minimum_required(VERSION 3.7)
project(CPP1)

set(CMAKE_CXX_STANDARD 20)

add_executable(CPP1 Main.cpp Day.h)
add_executable(CPP1_CALL Call.cpp)
add_executable(CPP1_Favourite Favourite.cpp Favourite.h)


add_executable(CPP1_NEWDAY NewDay.cpp Day.h Week.h)
add_executable(CPP1_NEWDAYStack DayWeekStack.cpp Day.h Week.h)

add_executable(CPP1_DONTLEAK DontLeak.cpp)
add_executable(CPP1_MyName MyName.cpp)
add_executable(CPP1_CString CString.cpp)