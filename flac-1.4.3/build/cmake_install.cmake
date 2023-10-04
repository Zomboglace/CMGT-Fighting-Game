# Install script for directory: /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/FLAC/targets.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/FLAC/targets.cmake"
         "/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/CMakeFiles/Export/lib/cmake/FLAC/targets.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/FLAC/targets-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/FLAC/targets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/FLAC" TYPE FILE FILES "/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/CMakeFiles/Export/lib/cmake/FLAC/targets.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/FLAC" TYPE FILE FILES "/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/CMakeFiles/Export/lib/cmake/FLAC/targets-release.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/FLAC" TYPE FILE FILES
    "/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/flac-config.cmake"
    "/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/flac-config-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/FLAC" TYPE FILE FILES
    "/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/flac-config.cmake"
    "/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/flac-config-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/FLAC" TYPE FILE FILES
    "/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/include/FLAC/all.h"
    "/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/include/FLAC/assert.h"
    "/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/include/FLAC/callback.h"
    "/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/include/FLAC/export.h"
    "/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/include/FLAC/format.h"
    "/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/include/FLAC/metadata.h"
    "/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/include/FLAC/ordinals.h"
    "/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/include/FLAC/stream_decoder.h"
    "/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/include/FLAC/stream_encoder.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/FLAC++" TYPE FILE FILES
    "/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/include/FLAC++/all.h"
    "/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/include/FLAC++/decoder.h"
    "/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/include/FLAC++/encoder.h"
    "/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/include/FLAC++/export.h"
    "/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/include/FLAC++/metadata.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/man1" TYPE FILE FILES
    "/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/man/flac.1"
    "/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/man/metaflac.1"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/cmake_install.cmake")
  include("/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/microbench/cmake_install.cmake")
  include("/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/doc/cmake_install.cmake")
  include("/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/examples/cmake_install.cmake")
  include("/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/test/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
