cmake_minimum_required (VERSION 3.22)
project(basic_test)

enable_testing()
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIR})

add_executable(runUnitTests
		gtest.cpp
		InsertLinkedList.c
		)
target_link_libraries(runUnitTests ${GTEST_LIBRARY_DEBUG} ${GTEST_MAIN_LIBRARY_DEBUG} GTest::gtest_main)

add_test(
	NAME runUnitTests
	COMMAND runUnitiTests
	)
