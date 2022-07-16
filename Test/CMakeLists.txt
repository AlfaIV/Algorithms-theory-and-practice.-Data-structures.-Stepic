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

# Link test target against gtest libraries
target_link_libraries(
    Test PRIVATE
    gtest gtest_main
)


add_subdirectory(
	"stack"
	"../stack"
)

# Add src to the include directories for the test target
target_include_directories(
    Test PRIVATE
    "../stack/"
)

target_link_libraries(
	Test PRIVATE
  "../stack/"
)



#set(SOURCE_LIB test.cpp)		# Установка переменной со списком исходников

#add_library(test_lb STATIC ${SOURCE_LIB})# Создание статической библиотеки