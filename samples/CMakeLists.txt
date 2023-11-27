add_executable(base)

target_sources(base PRIVATE base.cpp)
find_package(glog REQUIRED)
target_link_libraries(base PRIVATE add glog::glog)
