find_package(GTest CONFIG REQUIRED)

add_executable(
	fortrend_tests
	core/engine_info_tests.cpp
)

target_compile_features(
	fortrend_tests
	PRIVATE
		cxx_std_23
)

target_link_libraries(
	fortrend_tests
	PRIVATE
		Fortrend::Engine
		GTest::gtest_main
)

fortrend_enable_compiler_warnings(fortrend_tests)

include(GoogleTest)

gtest_discover_tests(fortrend_tests)