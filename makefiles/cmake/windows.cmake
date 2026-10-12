# Windows (MSVC) settings of the SDK's own code -- CMake twin of
# makefiles/ambuild/windows.ambuild.

list(APPEND S2SDK_OWN_DEFINITIONS
	COMPILER_MSVC COMPILER_MSVC64
	# The game is built without iterator debugging, which changes the layout of STL types,
	# like the strings in protobuf messages that plugins share with the game
	$<$<CONFIG:Debug>:_ITERATOR_DEBUG_LEVEL=0>
	_WINDOWS WINDOWS WIN32 WIN64 _CRT_SECURE_NO_DEPRECATE _CRT_NONSTDC_NO_DEPRECATE
)
