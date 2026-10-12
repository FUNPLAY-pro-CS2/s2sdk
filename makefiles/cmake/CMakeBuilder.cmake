# The SDK's libraries -- CMake twin of makefiles/ambuild/AMBuilder: interfaces,
# mathlib and libprotobuf, with the same sources in the same order.

add_library(${S2SDK_TARGET_PREFIX}_interfaces STATIC
	${S2SDK_DIR}/interfaces/interfaces.cpp
)

add_library(${S2SDK_TARGET_PREFIX}_mathlib STATIC
	${S2SDK_DIR}/mathlib/almostequal.cpp
	${S2SDK_DIR}/mathlib/anorms.cpp
	${S2SDK_DIR}/mathlib/bumpvects.cpp
	${S2SDK_DIR}/mathlib/color_conversion.cpp
	${S2SDK_DIR}/mathlib/halton.cpp
	${S2SDK_DIR}/mathlib/icekey.cpp
	${S2SDK_DIR}/mathlib/imagequant.cpp
	${S2SDK_DIR}/mathlib/lightdesc.cpp
	${S2SDK_DIR}/mathlib/mathlib_base.cpp
	${S2SDK_DIR}/mathlib/polyhedron.cpp
	${S2SDK_DIR}/mathlib/powsse.cpp
	${S2SDK_DIR}/mathlib/quantize.cpp
	${S2SDK_DIR}/mathlib/randsse.cpp
	${S2SDK_DIR}/mathlib/simdvectormatrix.cpp
	${S2SDK_DIR}/mathlib/sparse_convolution_noise.cpp
	${S2SDK_DIR}/mathlib/spherical.cpp
	${S2SDK_DIR}/mathlib/sse.cpp
	${S2SDK_DIR}/mathlib/sseconst.cpp
	${S2SDK_DIR}/mathlib/ssenoise.cpp
	${S2SDK_DIR}/mathlib/vmatrix.cpp
)
target_include_directories(${S2SDK_TARGET_PREFIX}_mathlib PRIVATE "${S2SDK_DIR}/public/mathlib")

# libprotobuf: the sources its own CMake build compiles
set(_protobuf_dir "${S2SDK_DIR}/thirdparty/protobuf-3.21.8")
set(_protobuf_sources)
foreach(_list libprotobuf-lite libprotobuf)
	file(READ "${_protobuf_dir}/cmake/${_list}.cmake" _content)
	string(REPLACE "-" "_" _var "${_list}_files")
	string(REGEX MATCH "set\\(${_var}[^)]*\\)" _files "${_content}")
	string(REGEX MATCHALL "\\$\\{protobuf_SOURCE_DIR\\}/[^ \t\r\n)]+\\.cc" _cc "${_files}")
	string(REPLACE "\${protobuf_SOURCE_DIR}" "${_protobuf_dir}" _cc "${_cc}")
	list(APPEND _protobuf_sources ${_cc})
endforeach()
add_library(${S2SDK_TARGET_PREFIX}_libprotobuf STATIC ${_protobuf_sources})
target_include_directories(${S2SDK_TARGET_PREFIX}_libprotobuf PRIVATE "${_protobuf_dir}/src")
# Third-party code, so its warnings are left to upstream
if(MSVC)
	target_compile_options(${S2SDK_TARGET_PREFIX}_libprotobuf PRIVATE /w /EHsc /utf-8 /bigobj)
else()
	target_compile_options(${S2SDK_TARGET_PREFIX}_libprotobuf PRIVATE -w)
	# The engine's and the prebuilt library's std::string ABI
	target_compile_definitions(${S2SDK_TARGET_PREFIX}_libprotobuf PRIVATE _GLIBCXX_USE_CXX11_ABI=0)
endif()

# The same settings as the AMBuild side (AMBuildScript's ConfigureLibrary)
foreach(lib interfaces mathlib libprotobuf)
	set(lib ${S2SDK_TARGET_PREFIX}_${lib})
	target_compile_features(${lib} PRIVATE cxx_std_20)
	target_include_directories(${lib} PRIVATE
		"${S2SDK_DIR}/public"
		"${S2SDK_DIR}/public/tier0"
		"${S2SDK_DIR}/public/tier1"
	)
	target_compile_definitions(${lib} PRIVATE ${S2SDK_OWN_DEFINITIONS})
	target_compile_options(${lib} PRIVATE ${S2SDK_OWN_OPTIONS})
	set_target_properties(${lib} PROPERTIES
		POSITION_INDEPENDENT_CODE ON
		MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>"
	)
endforeach()
