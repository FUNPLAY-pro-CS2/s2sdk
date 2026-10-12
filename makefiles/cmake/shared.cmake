# What the SDK's own code (its libraries, the checks) is built with on every
# platform -- CMake twin of makefiles/ambuild/shared.ambuild. The per-platform
# part is in linux.cmake / windows.cmake.

set(S2SDK_OWN_DEFINITIONS
	# AMBuild's --enable-optimize / --enable-debug
	$<$<NOT:$<CONFIG:Debug>>:NDEBUG>
	$<$<CONFIG:Debug>:DEBUG>
	$<$<CONFIG:Debug>:_DEBUG>
	X64BITS
	PLATFORM_64BITS
	_LIB
)
set(S2SDK_OWN_OPTIONS)
