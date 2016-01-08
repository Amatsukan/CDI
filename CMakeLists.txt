cmake_minimum_required(VERSION 2.6)
project(cdi)

set (Tutorial_VERSION_MAJOR 0)
set (Tutorial_VERSION_MINOR 0)

FILE(GLOB SRCFILES ../*.cpp)

add_executable(cdi main.cpp)

install(TARGETS cdi RUNTIME DESTINATION bin)
