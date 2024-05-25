cmake_minimum_required(VERSION 3.27)
project(HCMUT_HK232_KTLT_Assignment2)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address -g")
set(CMAKE_LINKER_FLAGS "${CMAKE_LINKER_FLAGS} -fsanitize=address -g")


include_directories(.)

add_executable(HCMUT_HK232_KTLT_Assignment2
        main.cpp
        main.h
        study_in_pink2.cpp
        study_in_pink2.h)
