cmake_minimum_required (VERSION 3.0)

project(MyStaticLibrary)

set(target_name solver)

add_library(solver STATIC)

include(CompileOptions)
set_compile_options(${target_name})

set(SOURCE_FILES "SumFloat.cpp")
set(HEADERS_FILES "../../include/lib/SumFloat.hpp")

target_sources(
  ${target_name}
  PRIVATE
    ${SOURCE_FILES}
    ${HEADERS_FILES}
)


