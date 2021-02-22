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

execute_process(COMMAND "${QMLPLUGINDUMP_PROGRAM}" "QtGraphicalEffects" "1.0" ERROR_VARIABLE ERRORS_OUTPUT OUTPUT_VARIABLE DISREGARD_VARIABLE RESULT_VARIABLE ExitCode TIMEOUT 30)

if(ExitCode EQUAL 0)
    set(QtGraphicalEffects-QMLModule_FOUND TRUE)
    set(QtGraphicalEffects-QMLModule_VERSION "${PACKAGE_FIND_VERSION}")
else()
    message(STATUS "qmlplugindump failed for QtGraphicalEffects.")
    set(QtGraphicalEffects-QMLModule_FOUND FALSE)
endif()

find_package_handle_standard_args(QtGraphicalEffects-QMLModule
    FOUND_VAR
        QtGraphicalEffects-QMLModule_FOUND
    REQUIRED_VARS
        QtGraphicalEffects-QMLModule_FOUND
    VERSION_VAR
        QtGraphicalEffects-QMLModule_VERSION
    HANDLE_COMPONENTS
)


