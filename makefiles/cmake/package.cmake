# Where the built libraries go -- CMake twin of makefiles/ambuild/package.ambuild:
# lib/ in this copy's build folder (several copies of the SDK in one build each
# get their own), under the names and in the folders of the repository's lib/.

if(WIN32)
	set(_package_folder "${CMAKE_CURRENT_BINARY_DIR}/lib/public/win64")
else()
	set(_package_folder "${CMAKE_CURRENT_BINARY_DIR}/lib/linux64")
endif()

foreach(lib interfaces mathlib libprotobuf)
	set_target_properties(${S2SDK_TARGET_PREFIX}_${lib} PROPERTIES
		OUTPUT_NAME ${lib}
		PREFIX ""
		# A generator expression, so multi-config generators add no per-config folder
		ARCHIVE_OUTPUT_DIRECTORY "$<1:${_package_folder}>"
	)
endforeach()
