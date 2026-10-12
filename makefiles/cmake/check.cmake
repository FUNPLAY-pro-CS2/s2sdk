# The checks -- CMake twin of makefiles/ambuild/check.ambuild: the tests'
# template instantiations and the sources plugins compile themselves, in a
# library linked like a plugin, and the test programs in tests/run/. Built
# with -DS2SDK_BUILD_TESTS=ON, against the libraries built here, with the
# settings plugins get from s2sdk-manifests.

if(NOT COMMAND s2sdk_manifest)
	if(S2SDK_MANIFESTS_DIR AND EXISTS "${S2SDK_MANIFESTS_DIR}/s2sdk-manifests.cmake")
		set(_manifests "${S2SDK_MANIFESTS_DIR}")
	else()
		include(FetchContent)
		FetchContent_Declare(s2sdk_manifests
			GIT_REPOSITORY https://github.com/FUNPLAY-pro-CS2/s2sdk-manifests.git
			GIT_TAG master
			GIT_SHALLOW TRUE
		)
		FetchContent_MakeAvailable(s2sdk_manifests)
		set(_manifests "${s2sdk_manifests_SOURCE_DIR}")
	endif()
	include("${_manifests}/s2sdk-manifests.cmake")
endif()

# The SDK as plugins see it, under its own prefix next to the libraries'
set(_check ${S2SDK_TARGET_PREFIX}_plugin)
s2sdk_manifest(cs2 "${S2SDK_DIR}" PREFIX ${_check} REPLACE
	interfaces ${S2SDK_TARGET_PREFIX}_interfaces
	mathlib ${S2SDK_TARGET_PREFIX}_mathlib
	protobuf ${S2SDK_TARGET_PREFIX}_libprotobuf
)

file(GLOB _test_sources CONFIGURE_DEPENDS "${S2SDK_DIR}/tests/*.cpp")
file(GLOB _plugin_sources CONFIGURE_DEPENDS "${S2SDK_DIR}/entity2/*.cpp" "${S2SDK_DIR}/tier0_perproject/*.cpp")

add_library(s2sdk_check SHARED
	${_test_sources}
	${_plugin_sources}
	"${S2SDK_DIR}/public/tier0/memoverride.cpp"
)
target_link_libraries(s2sdk_check PRIVATE ${_check}::s2sdk)
# AMBuildScript's flags, as CheckScript compiles with them: -march=nocona brings the
# 16-byte compare-exchange CTSQueue needs, -Werror fails on warnings
target_compile_definitions(s2sdk_check PRIVATE ${S2SDK_OWN_DEFINITIONS})
target_compile_options(s2sdk_check PRIVATE ${S2SDK_OWN_OPTIONS})
s2sdk_protobufs(s2sdk_check SDK ${_check}
	common/network_connection.proto
	common/networkbasetypes.proto
	common/netmessages.proto
	common/valveextensions.proto
	# Messages for the tests, from a proto without imports
	common/source2_steam_stats.proto
)
# Fail on symbols the libraries don't have, which shared libraries allow by default
if(CMAKE_SYSTEM_NAME STREQUAL "Linux")
	target_link_options(s2sdk_check PRIVATE -Wl,-z,defs)
endif()

# Runs KeyValues3 against tier0, so it needs the game's tier0 to start
add_executable(keyvalues3_test
	"${S2SDK_DIR}/tests/run/keyvalues3.cpp"
	"${S2SDK_DIR}/tier0_perproject/keyvalues3.cpp"
	"${S2SDK_DIR}/public/tier0/memoverride.cpp"
)
target_link_libraries(keyvalues3_test PRIVATE ${_check}::s2sdk)
target_compile_definitions(keyvalues3_test PRIVATE ${S2SDK_OWN_DEFINITIONS})
target_compile_options(keyvalues3_test PRIVATE ${S2SDK_OWN_OPTIONS})

# Iterates the utl containers, which allocate through tier0
add_executable(utliterators_test
	"${S2SDK_DIR}/tests/run/utliterators.cpp"
	"${S2SDK_DIR}/public/tier0/memoverride.cpp"
)
target_link_libraries(utliterators_test PRIVATE ${_check}::s2sdk)
target_compile_definitions(utliterators_test PRIVATE ${S2SDK_OWN_DEFINITIONS})
target_compile_options(utliterators_test PRIVATE ${S2SDK_OWN_OPTIONS})

# Adds and finds symbols through CUtlSymbolTableLarge's alternate keys
add_executable(utlsymbollarge_test
	"${S2SDK_DIR}/tests/run/utlsymbollarge.cpp"
	"${S2SDK_DIR}/public/tier0/memoverride.cpp"
)
target_link_libraries(utlsymbollarge_test PRIVATE ${_check}::s2sdk)
target_compile_definitions(utlsymbollarge_test PRIVATE ${S2SDK_OWN_DEFINITIONS})
target_compile_options(utlsymbollarge_test PRIVATE ${S2SDK_OWN_OPTIONS})

# Purges CUtlLeanVectors, including over external buffers
add_executable(utlleanvector_test
	"${S2SDK_DIR}/tests/run/utlleanvector.cpp"
	"${S2SDK_DIR}/public/tier0/memoverride.cpp"
)
target_link_libraries(utlleanvector_test PRIVATE ${_check}::s2sdk)
target_compile_definitions(utlleanvector_test PRIVATE ${S2SDK_OWN_DEFINITIONS})
target_compile_options(utlleanvector_test PRIVATE ${S2SDK_OWN_OPTIONS})

# Inserts dupes and non copyable elements into a CUtlRBTree and a CUtlOrderedMap
add_executable(utlrbtree_test
	"${S2SDK_DIR}/tests/run/utlrbtree.cpp"
	"${S2SDK_DIR}/public/tier0/memoverride.cpp"
)
target_link_libraries(utlrbtree_test PRIVATE ${_check}::s2sdk)
target_compile_definitions(utlrbtree_test PRIVATE ${S2SDK_OWN_DEFINITIONS})
target_compile_options(utlrbtree_test PRIVATE ${S2SDK_OWN_OPTIONS})

# Copies and moves CBufferStrings through tier0
add_executable(bufferstring_test
	"${S2SDK_DIR}/tests/run/bufferstring.cpp"
	"${S2SDK_DIR}/public/tier0/memoverride.cpp"
)
target_link_libraries(bufferstring_test PRIVATE ${_check}::s2sdk)
target_compile_definitions(bufferstring_test PRIVATE ${S2SDK_OWN_DEFINITIONS})
target_compile_options(bufferstring_test PRIVATE ${S2SDK_OWN_OPTIONS})

# Serializes KeyValues into CmdKeyValues messages and parses them back through tier0
add_executable(cmdkeyvalues_test
	"${S2SDK_DIR}/tests/run/cmdkeyvalues.cpp"
	"${S2SDK_DIR}/public/tier0/memoverride.cpp"
)
target_link_libraries(cmdkeyvalues_test PRIVATE ${_check}::s2sdk)
target_compile_definitions(cmdkeyvalues_test PRIVATE ${S2SDK_OWN_DEFINITIONS})
target_compile_options(cmdkeyvalues_test PRIVATE ${S2SDK_OWN_OPTIONS})
s2sdk_protobufs(cmdkeyvalues_test SDK ${_check}
	common/network_connection.proto
	common/networkbasetypes.proto
	common/netmessages.proto
	common/valveextensions.proto
	common/source2_steam_stats.proto
)
