cmake_minimum_required(VERSION 2.8.12...3.17)
project(
		galImage2Ascii
		VERSION 0.0.1
		LANGUAGES CXX
)

include(cmake/CPM.cmake)
CPMAddPackage("gh:TheLartians/PackageProject.cmake#master")

CPMAddPackage(
		GITHUB_REPOSITORY jarro2783/cxxopts
		GIT_TAG master
		OPTIONS
		"CXXOPTS_BUILD_EXAMPLES OFF"
		"CXXOPTS_BUILD_TESTS OFF"
		"CXXOPTS_ENABLE_INSTALL ON"
)

file(GLOB_RECURSE galImage2AsciiHeader CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/include/*.hpp")
file(GLOB_RECURSE galImage2AsciiSource CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")

add_library(
		${PROJECT_NAME}
		${galImage2AsciiHeader}
		${galImage2AsciiSource}
)

set_target_properties(
		${PROJECT_NAME} PROPERTIES
		LINKER_LANGUAGE CXX
		CXX_STANDARD 17
)

# being a cross-platform target, we enforce standards conformance on MSVC
target_compile_options(${PROJECT_NAME} PUBLIC "$<$<BOOL:${MSVC}>:/permissive->")

target_link_libraries(${PROJECT_NAME} cxxopts)

target_include_directories(
		${PROJECT_NAME}
		PUBLIC
		$<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>
		$<INSTALL_INTERFACE:include/${PROJECT_NAME}-${PROJECT_VERSION}>
)

string(TOLOWER ${PROJECT_NAME}/version.h VERSION_HEADER_LOCATION)

packageProject(
		NAME ${PROJECT_NAME}
		VERSION ${PROJECT_VERSION}
		NAMESPACE ${PROJECT_NAME}
		BINARY_DIR ${PROJECT_BINARY_DIR}
		INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include
		INCLUDE_DESTINATION include/${PROJECT_NAME}-${PROJECT_VERSION}
		VERSION_HEADER "${VERSION_HEADER_LOCATION}"
		DEPENDENCIES "galImage2Ascii"
)
