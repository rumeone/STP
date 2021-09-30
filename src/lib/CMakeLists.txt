cmake_minimum_required (VERSION 3.0)

project(MyStaticLibrary)

set(SOURCE_FILES "SumFloat.cpp")
set(HEADERS_FILES "../../include/lib/SumFloat.hpp")

add_library(lib STATIC ${SOURCE_FILES} ${HEADERS_FILES})
set_target_properties(lib PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)

