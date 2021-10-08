cmake_minimum_required(VERSION 3.0)

include(CompileOptions)

set(target_name test)

add_executable(test SumFloat.test.cpp)

set_compile_options(${target_name})


target_link_libraries(${target_name} solver)
target_link_libraries(
    test
    gtest_main
)
