# Install script for directory: /home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/src

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

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/libFLAC/cmake_install.cmake")
  include("/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/libFLAC++/cmake_install.cmake")
  include("/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/share/replaygain_analysis/cmake_install.cmake")
  include("/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/share/replaygain_synthesis/cmake_install.cmake")
  include("/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/share/getopt/cmake_install.cmake")
  include("/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/share/utf8/cmake_install.cmake")
  include("/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/share/grabbag/cmake_install.cmake")
  include("/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/flac/cmake_install.cmake")
  include("/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/metaflac/cmake_install.cmake")
  include("/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/test_libs_common/cmake_install.cmake")
  include("/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/test_libFLAC/cmake_install.cmake")
  include("/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/test_libFLAC++/cmake_install.cmake")
  include("/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/test_grabbag/cmake_install.cmake")
  include("/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/test_seeking/cmake_install.cmake")
  include("/home/zombo/Desktop/tozip/delivery/tek4/C++/fighting_game/flac-1.4.3/build/src/test_streams/cmake_install.cmake")

endif()

