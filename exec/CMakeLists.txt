cmake_minimum_required(VERSION 2.8.12...3.17)

project(
		galImage2AsciiExec
		LANGUAGES CXX
)

file(GLOB_RECURSE galImage2AsciiExecHeader CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/include/*.hpp")
file(GLOB_RECURSE galImage2AsciiExecSource CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")

add_executable(
		${PROJECT_NAME}
		${galImage2AsciiExecHeader}
		${galImage2AsciiExecSource}
		main.cpp
)

set_target_properties(
		${PROJECT_NAME}
		PROPERTIES CXX_STANDARD 17
		OUTPUT_NAME "galImage2AsciiExec"
)

target_include_directories(
		${PROJECT_NAME}
		PUBLIC
		$<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>
)

include(../cmake/CPM.cmake)

CPMAddPackage(
		GITHUB_REPOSITORY jarro2783/cxxopts
		GIT_TAG master
		OPTIONS
		"CXXOPTS_BUILD_EXAMPLES OFF"
		"CXXOPTS_BUILD_TESTS OFF"
		"CXXOPTS_ENABLE_INSTALL ON"
)

CPMAddPackage(
		NAME galImage2Ascii
		SOURCE_DIR ${CMAKE_CURRENT_LIST_DIR}/..
)

target_link_libraries(
		${PROJECT_NAME}
		PRIVATE
		galImage2Ascii::galImage2Ascii
		cxxopts
)
