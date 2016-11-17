cmake_minimum_required(VERSION 3.6)
project(IDZ1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -fno-operator-names")

set(SOURCE_FILES originalSource/LOGICA16.cpp originalSource/INSTRUCT.cpp originalSource/OTVET16.cpp originalSource/GETBIN16.cpp)
add_executable(IDZ1 ${SOURCE_FILES})

set(SOURCE_FILES task2/LOGICA32.cpp task2/INSTRUCT.cpp task2/OTVET32.cpp task2/GETBIN32.cpp)
add_executable(IDZ1.2 ${SOURCE_FILES})

set(SOURCE_FILES task3/LOGICA32.cpp)
add_executable(IDZ1.3 ${SOURCE_FILES})

set(SOURCE_FILES task4/item1/LOGICA32.cpp task4/item1/INSTRUCT.cpp task4/item1/OTVET32.cpp task4/item1/GETBIN32.cpp)
add_executable(IDZ1.4.1 ${SOURCE_FILES})