cmake_minimum_required(VERSION 3.0)

add_executable(test SumFloat.test.cpp)
target_link_libraries(test lib)
include_directories("../include/lib/sumFloat.hpp")
include_directories("../_deps/googletest-src/googletest/include/gtest/gtest.h")