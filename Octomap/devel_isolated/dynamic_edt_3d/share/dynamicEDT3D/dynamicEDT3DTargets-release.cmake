#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "dynamicedt3d" for configuration "Release"
set_property(TARGET dynamicedt3d APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(dynamicedt3d PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libdynamicedt3d.so.1.9.8"
  IMPORTED_SONAME_RELEASE "libdynamicedt3d.so.1.9"
  )

list(APPEND _IMPORT_CHECK_TARGETS dynamicedt3d )
list(APPEND _IMPORT_CHECK_FILES_FOR_dynamicedt3d "${_IMPORT_PREFIX}/lib/libdynamicedt3d.so.1.9.8" )

# Import target "dynamicedt3d-static" for configuration "Release"
set_property(TARGET dynamicedt3d-static APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(dynamicedt3d-static PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libdynamicedt3d.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS dynamicedt3d-static )
list(APPEND _IMPORT_CHECK_FILES_FOR_dynamicedt3d-static "${_IMPORT_PREFIX}/lib/libdynamicedt3d.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
