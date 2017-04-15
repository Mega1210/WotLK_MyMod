# Install script for directory: D:/SingleCore_TC_WotLK_Orig/Source/dep

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
  include("D:/SingleCore_TC_WotLK_Orig/Build/dep/threads/cmake_install.cmake")
  include("D:/SingleCore_TC_WotLK_Orig/Build/dep/boost/cmake_install.cmake")
  include("D:/SingleCore_TC_WotLK_Orig/Build/dep/process/cmake_install.cmake")
  include("D:/SingleCore_TC_WotLK_Orig/Build/dep/zlib/cmake_install.cmake")
  include("D:/SingleCore_TC_WotLK_Orig/Build/dep/g3dlite/cmake_install.cmake")
  include("D:/SingleCore_TC_WotLK_Orig/Build/dep/recastnavigation/cmake_install.cmake")
  include("D:/SingleCore_TC_WotLK_Orig/Build/dep/cppformat/cmake_install.cmake")
  include("D:/SingleCore_TC_WotLK_Orig/Build/dep/SFMT/cmake_install.cmake")
  include("D:/SingleCore_TC_WotLK_Orig/Build/dep/utf8cpp/cmake_install.cmake")
  include("D:/SingleCore_TC_WotLK_Orig/Build/dep/valgrind/cmake_install.cmake")
  include("D:/SingleCore_TC_WotLK_Orig/Build/dep/openssl/cmake_install.cmake")
  include("D:/SingleCore_TC_WotLK_Orig/Build/dep/jemalloc/cmake_install.cmake")
  include("D:/SingleCore_TC_WotLK_Orig/Build/dep/mysql/cmake_install.cmake")
  include("D:/SingleCore_TC_WotLK_Orig/Build/dep/readline/cmake_install.cmake")
  include("D:/SingleCore_TC_WotLK_Orig/Build/dep/gsoap/cmake_install.cmake")
  include("D:/SingleCore_TC_WotLK_Orig/Build/dep/efsw/cmake_install.cmake")
  include("D:/SingleCore_TC_WotLK_Orig/Build/dep/bzip2/cmake_install.cmake")
  include("D:/SingleCore_TC_WotLK_Orig/Build/dep/libmpq/cmake_install.cmake")
  include("D:/SingleCore_TC_WotLK_Orig/Build/dep/lualib/cmake_install.cmake")

endif()

