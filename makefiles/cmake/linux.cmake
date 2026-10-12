# Linux (GCC / Clang) settings of the SDK's own code -- CMake twin of
# makefiles/ambuild/linux.ambuild.

list(APPEND S2SDK_OWN_OPTIONS
	-Wall -Werror -Wno-overloaded-virtual -Wno-non-virtual-dtor -Wno-delete-non-virtual-dtor
	-Wno-invalid-offsetof -Wno-unknown-pragmas -Wno-unused -Wno-narrowing -Wno-register
	-march=nocona -mmmx -msse -msse2
)

list(APPEND S2SDK_OWN_DEFINITIONS
	COMPILER_GCC
	_LINUX LINUX POSIX GNUC
	# Set of defines required by the HL2SDK
	_finite=finite
	stricmp=strcasecmp _stricmp=strcasecmp
	strnicmp=strncasecmp _strnicmp=strncasecmp
	strcmpi=strcasecmp
	_vsnprintf=vsnprintf
	_alloca=alloca
)
