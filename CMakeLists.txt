cmake_minimum_required(VERSION 3.13)
project(DotArray)

set(CMAKE_CXX_STANDARD 11)

link_directories(lib)

add_executable(DotArray
#        main.cpp
        Lyrics.cpp
        Lyrics.h
        a.cpp a.h)

target_link_libraries(${PROJECT_NAME} winmm)