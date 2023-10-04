# FindFLAC.cmake
# Locate the FLAC library
# This module defines
# FLAC_FOUND - System has FLAC
# FLAC_INCLUDE_DIRS - The FLAC include directories
# FLAC_LIBRARIES - The libraries needed to use FLAC
# FLAC_DEFINITIONS - Compiler switches required for using FLAC

find_path(FLAC_INCLUDE_DIR FLAC/all.h)
find_library(FLAC_LIBRARY NAMES FLAC)

include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(FLAC REQUIRED_VARS FLAC_INCLUDE_DIR FLAC_LIBRARY)

mark_as_advanced(FLAC_INCLUDE_DIR FLAC_LIBRARY)
