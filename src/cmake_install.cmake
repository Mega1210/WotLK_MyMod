# Install script for directory: D:/SingleCore_TC_WotLK_Orig/Source/src

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "K:/Program Files/TrinityCore")
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

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("D:/SingleCore_TC_WotLK_Orig/Build/src/genrev/cmake_install.cmake")
  include("D:/SingleCore_TC_WotLK_Orig/Build/src/common/cmake_install.cmake")
  include("D:/SingleCore_TC_WotLK_Orig/Build/src/server/cmake_install.cmake")
  include("D:/SingleCore_TC_WotLK_Orig/Build/src/plugins/cmake_install.cmake")
  include("D:/SingleCore_TC_WotLK_Orig/Build/src/tools/cmake_install.cmake")

endif()

