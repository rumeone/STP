cmake_minimum_required(VERSION 3.0)

include(CompileOptions)

set(target_name main)

add_executable(main main.cpp)

set_compile_options(${target_name})

include_directories("include/lib/SumFloat.hpp")
include_directories("CLI/CLI.hpp")
target_link_libraries(main solver)
target_link_libraries(main CLI11::CLI11)
