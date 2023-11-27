cmake_minimum_required(VERSION 3.8)

project(cpp_project_guideline)

message(STATUS "Build type: ${CMAKE_BUILD_TYPE}")
if(${CMAKE_BUILD_TYPE} MATCHES Debug)
  message(WARNING "Build type: ${CMAKE_BUILD_TYPE}")
endif()

if("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
  add_compile_options(-fdiagnostics-color=always)
elseif("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
  add_compile_options(-fcolor-diagnostics)
endif()

add_library(add SHARED)
target_include_directories(add PUBLIC include/)
target_sources(add PRIVATE src/add.cpp)

add_subdirectory(samples)
