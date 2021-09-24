cmake_minimum_required(VERSION 3.0)

add_executable(main main.cpp)

include_directories("../../include/lib/sumFloat.hpp")
target_link_libraries(main lib)
