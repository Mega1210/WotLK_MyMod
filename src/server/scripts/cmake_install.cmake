# Install script for directory: D:/SingleCore_TC_WotLK_Orig/Source/src/server/scripts

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

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  
    foreach(SCRIPT_TO_UNINSTALL K:/Program Files/TrinityCore/scripts/scripts_commands.dll;K:/Program Files/TrinityCore/scripts/scripts_custom.dll;K:/Program Files/TrinityCore/scripts/scripts_easternkingdoms.dll;K:/Program Files/TrinityCore/scripts/scripts_events.dll;K:/Program Files/TrinityCore/scripts/scripts_kalimdor.dll;K:/Program Files/TrinityCore/scripts/scripts_northrend.dll;K:/Program Files/TrinityCore/scripts/scripts_outdoorpvp.dll;K:/Program Files/TrinityCore/scripts/scripts_outland.dll;K:/Program Files/TrinityCore/scripts/scripts_pet.dll;K:/Program Files/TrinityCore/scripts/scripts_spells.dll;K:/Program Files/TrinityCore/scripts/scripts_world.dll)
      if (EXISTS "${SCRIPT_TO_UNINSTALL}")
        message(STATUS "Uninstalling: ${SCRIPT_TO_UNINSTALL}")
        file(REMOVE "${SCRIPT_TO_UNINSTALL}")
      endif()
    endforeach()
  
endif()

