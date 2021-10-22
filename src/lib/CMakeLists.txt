cmake_minimum_required (VERSION 3.0)

project(MyStaticLibrary)

include(CompileOptions)

set(target_name solver)

add_library(solver STATIC SumFloat.cpp)

set_compile_options(solver)

