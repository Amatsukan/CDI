cmake_minimum_required(VERSION 2.6)
project(cdi)

add_executable(cdi main.cpp)

install(TARGETS cdi RUNTIME DESTINATION bin)
