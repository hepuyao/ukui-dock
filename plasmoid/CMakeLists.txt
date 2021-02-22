#configure_file(metadata.desktop.cmake ${CMAKE_CURRENT_SOURCE_DIR}/package/metadata.desktop)
message(STATUS "****************** CMAKE_CURRENT_SOURCE_DIR  is ${CMAKE_CURRENT_SOURCE_DIR}")

plasma_install_package(package org.kde.latte.plasmoid)
