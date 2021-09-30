cmake_minimum_required(VERSION 3.0)

add_executable(test SumFloat.test.cpp)
target_link_libraries(test lib)
target_link_libraries(
    test
    gtest_main
)
