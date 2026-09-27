cmake_minimum_required(VERSION 3.28)

project(
	FortrendEngine
	VERSION 0.1.0
	DESCRIPTION "Open-source Vulkan game graphics engine"
	LANGUAGES CXX
)

option(FORTREND_BUILD_TESTS "Build Fortrend Engine tests" ON)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

include(CompilerWarnings)

add_subdirectory(engine)
add_subdirectory(sandbox)

if(FORTREND_BUILD_TESTS)
	enable_testing()
	add_subdirectory(tests)
endif()