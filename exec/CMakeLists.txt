cmake_minimum_required(VERSION 2.8.12...3.17)

project(
		galImage2AsciiExec
		LANGUAGES CXX
)

include(../cmake/CPM.cmake)

CPMAddPackage(
		NAME galImage2Ascii
		SOURCE_DIR ${CMAKE_CURRENT_LIST_DIR}/..
)

add_executable(
		${PROJECT_NAME}
		main.cpp
)

set_target_properties(
		${PROJECT_NAME}
		PROPERTIES CXX_STANDARD 17
		OUTPUT_NAME "galImage2AsciiExec"
)

target_link_libraries(
		${PROJECT_NAME}
		PRIVATE
		galImage2Ascii::galImage2Ascii
)
