cmake_minimum_required(VERSION 3.0)

include(CompileOptions)

set(target_name main)

add_executable(main main.cpp)

set_compile_options(${target_name})

target_include_directories(main PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../../include/lib)
target_include_directories(main PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../../external/cli11)
target_link_libraries(main solver)
target_link_libraries(main CLI11::CLI11)