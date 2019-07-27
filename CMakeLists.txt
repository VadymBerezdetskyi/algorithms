cmake_minimum_required(VERSION 3.14)
project(algorithms)

set(CMAKE_CXX_STANDARD 17)

add_executable(algorithms main.cpp src/utils/array.h src/utils/getGraph.h src/Search/linear.h src/utils/runner.h)