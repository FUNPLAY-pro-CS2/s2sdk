cmake_minimum_required(VERSION 3.16)
project(s2sdk LANGUAGES C CXX)

# Builds the SDK's libraries from source, the way the AMBuild side does:
# interfaces, mathlib and libprotobuf, into lib/ of the build folder laid out
# like the repository's lib/.
#
#   cmake -S . -B build
#   cmake --build build
#
# It describes nothing for projects that build against the SDK: AMBuild projects
# get that from hl2sdk-manifests, CMake projects from s2sdk-manifests
# (https://github.com/Source2Mod/s2sdk-manifests).
#
# S2SDK_TARGET_PREFIX names the targets (s2sdk by default), so a project can
# build the libraries of several games, each under its own prefix.
#
# S2SDK_BUILD_TESTS builds the checks of makefiles/cmake/check.cmake, which
# compile against the SDK the way plugins do, through s2sdk-manifests
# (S2SDK_MANIFESTS_DIR, fetched when empty).
#
# With MSVC the libraries use the static runtime (/MT), like the prebuilt ones.

option(S2SDK_BUILD_TESTS "Build the checks of makefiles/cmake/check.cmake (for s2sdk itself)" OFF)
set(S2SDK_MANIFESTS_DIR "" CACHE PATH "s2sdk-manifests checkout for the checks (fetched when empty)")

if(NOT DEFINED S2SDK_TARGET_PREFIX)
	set(S2SDK_TARGET_PREFIX s2sdk)
endif()

if(NOT CMAKE_SIZEOF_VOID_P EQUAL 8)
	message(FATAL_ERROR "s2sdk only supports 64-bit targets")
endif()

set(S2SDK_DIR "${CMAKE_CURRENT_SOURCE_DIR}")

# The settings of the SDK's own code, split the same way as the AMBuild side
# (makefiles/ambuild/): shared.cmake <-> shared.ambuild, linux.cmake <->
# linux.ambuild, windows.cmake <-> windows.ambuild, CMakeBuilder.cmake <->
# AMBuilder, package.cmake <-> package.ambuild, check.cmake <-> check.ambuild.
include(${CMAKE_CURRENT_SOURCE_DIR}/makefiles/cmake/shared.cmake)
if(WIN32)
	include(${CMAKE_CURRENT_SOURCE_DIR}/makefiles/cmake/windows.cmake)
else()
	include(${CMAKE_CURRENT_SOURCE_DIR}/makefiles/cmake/linux.cmake)
endif()

include(${CMAKE_CURRENT_SOURCE_DIR}/makefiles/cmake/CMakeBuilder.cmake)
include(${CMAKE_CURRENT_SOURCE_DIR}/makefiles/cmake/package.cmake)

if(S2SDK_BUILD_TESTS)
	include(${CMAKE_CURRENT_SOURCE_DIR}/makefiles/cmake/check.cmake)
endif()
