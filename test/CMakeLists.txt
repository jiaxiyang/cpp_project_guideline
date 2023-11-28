find_package(GTest)

set(gtest-source-pattern "./*.cpp")
file(GLOB gtest-sources ${gtest-source-pattern})

add_executable(gtests)
target_sources(gtests PRIVATE ${gtest-sources})
target_link_libraries(gtests PRIVATE GTest::gtest_main add)
# add_test(gtests gtests)
add_test(NAME gtests COMMAND gtests --gtest_output=xml:report.xml)
