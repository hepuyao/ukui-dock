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

execute_process(COMMAND "${QMLPLUGINDUMP_PROGRAM}" "QtQuick.Layouts" "1.3" ERROR_VARIABLE ERRORS_OUTPUT OUTPUT_VARIABLE DISREGARD_VARIABLE RESULT_VARIABLE ExitCode TIMEOUT 30)

if(ExitCode EQUAL 0)
    set(QtQuick.Layouts-QMLModule_FOUND TRUE)
    set(QtQuick.Layouts-QMLModule_VERSION "${PACKAGE_FIND_VERSION}")
else()
    message(STATUS "qmlplugindump failed for QtQuick.Layouts.")
    set(QtQuick.Layouts-QMLModule_FOUND FALSE)
endif()

find_package_handle_standard_args(QtQuick.Layouts-QMLModule
    FOUND_VAR
        QtQuick.Layouts-QMLModule_FOUND
    REQUIRED_VARS
        QtQuick.Layouts-QMLModule_FOUND
    VERSION_VAR
        QtQuick.Layouts-QMLModule_VERSION
    HANDLE_COMPONENTS
)


