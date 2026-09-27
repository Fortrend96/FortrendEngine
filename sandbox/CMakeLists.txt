add_executable(
	fortrend_sandbox
	src/main.cpp
)

target_compile_features(
	fortrend_sandbox
	PRIVATE
		cxx_std_23
)

target_link_libraries(
	fortrend_sandbox
	PRIVATE
		Fortrend::Engine
)

fortrend_enable_compiler_warnings(fortrend_sandbox)
