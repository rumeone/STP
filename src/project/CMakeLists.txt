cmake_minimum_required(VERSION 3.0)

add_executable(main main.cpp)

include_directories("../../include/lib/SumFloat.hpp")
include_directories("../../_deps/cli11-src/include/CLI/CLI.hpp")
target_link_libraries(main lib)
target_link_libraries(main CLI11::CLI11)
