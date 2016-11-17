cmake_minimum_required(VERSION 3.6)
project(IDZ1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -fno-operator-names")

set(SOURCE_FILES originalSource/LOGICA16.cpp originalSource/INSTRUCT.cpp originalSource/OTVET16.cpp originalSource/GETBIN.cpp)
add_executable(IDZ1 ${SOURCE_FILES})

set(SOURCE_FILES task2/LOGICA16.cpp)
add_executable(IDZ1.2 ${SOURCE_FILES})