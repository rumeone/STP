cmake_minimum_required(VERSION 3.0)

set(target_name main)

add_executable(main main.cpp)

include(CompileOptions)
set_compile_options(${target_name})

include_directories("include/lib/SumFloat.hpp")
include_directories("_deps/cli11-src/include/CLI/CLI.hpp")
target_link_libraries(main solver)
target_link_libraries(main CLI11::CLI11)
