cmake_minimum_required(VERSION 3.10)

project(Test)


#build googletest
add_subdirectory(
	"gTest"
	"googletest"
)


#Test target
add_executable(
	Test
	test.cpp
)

# Add src to the include directories for the test target
#target_include_directories(
#    Test PRIVATE
#    "$.."
#)

target_link_libraries(
	Test PRIVATE
)

# Link test target against gtest libraries
target_link_libraries(
    Test PRIVATE
    gtest gtest_main
)

