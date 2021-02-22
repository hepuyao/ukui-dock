#=============================================================================
# SPDX-FileCopyrightText: 2015 Aleix Pol Gonzalez <aleixpol@blue-systems.com>
#
# SPDX-License-Identifier: BSD-3-Clause
#=============================================================================

include(FindPackageHandleStandardArgs)
include("${ECM_MODULE_DIR}/ECMQueryQmake.cmake")

query_qmake(qt_binaries_dir QT_INSTALL_BINS)

find_program(QMLPLUGINDUMP_PROGRAM NAMES qmlplugindump HINTS ${qt_binaries_dir})
if(NOT QMLPLUGINDUMP_PROGRAM)
    message(WARNING "Could not find qmlplugindump. It is necessary to look up qml module dependencies.")
endif()

execute_process(COMMAND "${QMLPLUGINDUMP_PROGRAM}" "org.kde.kquickcontrolsaddons" "2.0" ERROR_VARIABLE ERRORS_OUTPUT OUTPUT_VARIABLE DISREGARD_VARIABLE RESULT_VARIABLE ExitCode TIMEOUT 30)

if(ExitCode EQUAL 0)
    set(org.kde.kquickcontrolsaddons-QMLModule_FOUND TRUE)
    set(org.kde.kquickcontrolsaddons-QMLModule_VERSION "${PACKAGE_FIND_VERSION}")
else()
    message(STATUS "qmlplugindump failed for org.kde.kquickcontrolsaddons.")
    set(org.kde.kquickcontrolsaddons-QMLModule_FOUND FALSE)
endif()

find_package_handle_standard_args(org.kde.kquickcontrolsaddons-QMLModule
    FOUND_VAR
        org.kde.kquickcontrolsaddons-QMLModule_FOUND
    REQUIRED_VARS
        org.kde.kquickcontrolsaddons-QMLModule_FOUND
    VERSION_VAR
        org.kde.kquickcontrolsaddons-QMLModule_VERSION
    HANDLE_COMPONENTS
)


