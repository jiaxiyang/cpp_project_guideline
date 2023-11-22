cmake_minimum_required(VERSION 3.8)

project(base)

message(STATUS "Build type: ${CMAKE_BUILD_TYPE}")
if(${CMAKE_BUILD_TYPE} MATCHES Debug)
  message(WARNING "Build type: ${CMAKE_BUILD_TYPE}")
endif()

if("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
  add_compile_options(-fdiagnostics-color=always)
elseif("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
  add_compile_options(-fcolor-diagnostics)
endif()

add_executable(base)

# source
target_sources(base PRIVATE samples/base.cpp)

# compile
target_compile_options(base PRIVATE -O3 -std=c++17)

# link
find_package(glog REQUIRED)
target_link_libraries(base glog::glog)
