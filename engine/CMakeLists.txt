add_library(
	fortrend_engine
	STATIC
		src/core/engine_info.cpp
)

add_library(
	Fortrend::Engine
	ALIAS
	fortrend_engine
)

target_compile_features(
	fortrend_engine
	PUBLIC
		cxx_std_23
)

target_include_directories(
	fortrend_engine
	PUBLIC
		"${CMAKE_CURRENT_SOURCE_DIR}/include"
)

fortrend_enable_compiler_warnings(fortrend_engine)

