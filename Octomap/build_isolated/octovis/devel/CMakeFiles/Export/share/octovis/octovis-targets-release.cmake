#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "octovis" for configuration "Release"
set_property(TARGET octovis APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(octovis PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/octovis"
  )

list(APPEND _IMPORT_CHECK_TARGETS octovis )
list(APPEND _IMPORT_CHECK_FILES_FOR_octovis "${_IMPORT_PREFIX}/bin/octovis" )

# Import target "octovis-static" for configuration "Release"
set_property(TARGET octovis-static APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(octovis-static PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/liboctovis.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS octovis-static )
list(APPEND _IMPORT_CHECK_FILES_FOR_octovis-static "${_IMPORT_PREFIX}/lib/liboctovis.a" )

# Import target "octovis-shared" for configuration "Release"
set_property(TARGET octovis-shared APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(octovis-shared PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/liboctovis.so.1.9.8"
  IMPORTED_SONAME_RELEASE "liboctovis.so.1.9"
  )

list(APPEND _IMPORT_CHECK_TARGETS octovis-shared )
list(APPEND _IMPORT_CHECK_FILES_FOR_octovis-shared "${_IMPORT_PREFIX}/lib/liboctovis.so.1.9.8" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
