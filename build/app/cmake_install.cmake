# Install script for directory: /home/kylin/ukui/ukui-dock/latte-dock-0.9.11/app

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xlattedockx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/latte-dock" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/latte-dock")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/latte-dock"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/kylin/ukui/ukui-dock/latte-dock-0.9.11/build/app/latte-dock")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/latte-dock" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/latte-dock")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/latte-dock")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xlattedockx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/applications" TYPE FILE FILES "/home/kylin/ukui/ukui-dock/latte-dock-0.9.11/build/app/org.kde.latte-dock.desktop")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xlattedockx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/metainfo" TYPE FILE FILES "/home/kylin/ukui/ukui-dock/latte-dock-0.9.11/build/app/org.kde.latte-dock.appdata.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xlattedockx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dbus-1/interfaces" TYPE FILE FILES "/home/kylin/ukui/ukui-dock/latte-dock-0.9.11/app/dbus/org.kde.LatteDock.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xlattedockx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/knotifications5" TYPE FILE FILES "/home/kylin/ukui/ukui-dock/latte-dock-0.9.11/app/lattedock.notifyrc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xlattedockx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/etc/xdg/latte-layouts.knsrc")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/etc/xdg" TYPE FILE FILES "/home/kylin/ukui/ukui-dock/latte-dock-0.9.11/app/latte-layouts.knsrc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xlattedockx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/etc/xdg/latte-indicators.knsrc")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/etc/xdg" TYPE FILE FILES "/home/kylin/ukui/ukui-dock/latte-dock-0.9.11/app/latte-indicators.knsrc")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/kylin/ukui/ukui-dock/latte-dock-0.9.11/build/app/indicator/cmake_install.cmake")
  include("/home/kylin/ukui/ukui-dock/latte-dock-0.9.11/build/app/layout/cmake_install.cmake")
  include("/home/kylin/ukui/ukui-dock/latte-dock-0.9.11/build/app/layouts/cmake_install.cmake")
  include("/home/kylin/ukui/ukui-dock/latte-dock-0.9.11/build/app/package/cmake_install.cmake")
  include("/home/kylin/ukui/ukui-dock/latte-dock-0.9.11/build/app/plasma/extended/cmake_install.cmake")
  include("/home/kylin/ukui/ukui-dock/latte-dock-0.9.11/build/app/settings/cmake_install.cmake")
  include("/home/kylin/ukui/ukui-dock/latte-dock-0.9.11/build/app/settings/delegates/cmake_install.cmake")
  include("/home/kylin/ukui/ukui-dock/latte-dock-0.9.11/build/app/settings/tools/cmake_install.cmake")
  include("/home/kylin/ukui/ukui-dock/latte-dock-0.9.11/build/app/shortcuts/cmake_install.cmake")
  include("/home/kylin/ukui/ukui-dock/latte-dock-0.9.11/build/app/view/cmake_install.cmake")
  include("/home/kylin/ukui/ukui-dock/latte-dock-0.9.11/build/app/view/indicator/cmake_install.cmake")
  include("/home/kylin/ukui/ukui-dock/latte-dock-0.9.11/build/app/view/settings/cmake_install.cmake")
  include("/home/kylin/ukui/ukui-dock/latte-dock-0.9.11/build/app/view/windowstracker/cmake_install.cmake")
  include("/home/kylin/ukui/ukui-dock/latte-dock-0.9.11/build/app/wm/cmake_install.cmake")
  include("/home/kylin/ukui/ukui-dock/latte-dock-0.9.11/build/app/wm/tracker/cmake_install.cmake")
  include("/home/kylin/ukui/ukui-dock/latte-dock-0.9.11/build/app/packageplugins/cmake_install.cmake")

endif()

