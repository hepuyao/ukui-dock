# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Produce verbose output by default.
VERBOSE = 1

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/kylin/ukui/ukui-dock/latte-dock-0.9.11

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kylin/ukui/ukui-dock/latte-dock-0.9.11/obj-x86_64-linux-gnu

# Utility rule file for org.kde.latte.containment-plasmoids-metadata-json.

# Include the progress variables for this target.
include containment/CMakeFiles/org.kde.latte.containment-plasmoids-metadata-json.dir/progress.make

containment/CMakeFiles/org.kde.latte.containment-plasmoids-metadata-json: containment/org.kde.latte.containment-plasmoids-metadata.json


containment/org.kde.latte.containment-plasmoids-metadata.json: ../containment/package/metadata.desktop
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/kylin/ukui/ukui-dock/latte-dock-0.9.11/obj-x86_64-linux-gnu/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating org.kde.latte.containment-plasmoids-metadata.json"
	cd /home/kylin/ukui/ukui-dock/latte-dock-0.9.11/obj-x86_64-linux-gnu/containment && /usr/bin/desktoptojson -i /home/kylin/ukui/ukui-dock/latte-dock-0.9.11/containment/package/metadata.desktop -o /home/kylin/ukui/ukui-dock/latte-dock-0.9.11/obj-x86_64-linux-gnu/containment/org.kde.latte.containment-plasmoids-metadata.json

org.kde.latte.containment-plasmoids-metadata-json: containment/CMakeFiles/org.kde.latte.containment-plasmoids-metadata-json
org.kde.latte.containment-plasmoids-metadata-json: containment/org.kde.latte.containment-plasmoids-metadata.json
org.kde.latte.containment-plasmoids-metadata-json: containment/CMakeFiles/org.kde.latte.containment-plasmoids-metadata-json.dir/build.make

.PHONY : org.kde.latte.containment-plasmoids-metadata-json

# Rule to build all files generated by this target.
containment/CMakeFiles/org.kde.latte.containment-plasmoids-metadata-json.dir/build: org.kde.latte.containment-plasmoids-metadata-json

.PHONY : containment/CMakeFiles/org.kde.latte.containment-plasmoids-metadata-json.dir/build

containment/CMakeFiles/org.kde.latte.containment-plasmoids-metadata-json.dir/clean:
	cd /home/kylin/ukui/ukui-dock/latte-dock-0.9.11/obj-x86_64-linux-gnu/containment && $(CMAKE_COMMAND) -P CMakeFiles/org.kde.latte.containment-plasmoids-metadata-json.dir/cmake_clean.cmake
.PHONY : containment/CMakeFiles/org.kde.latte.containment-plasmoids-metadata-json.dir/clean

containment/CMakeFiles/org.kde.latte.containment-plasmoids-metadata-json.dir/depend:
	cd /home/kylin/ukui/ukui-dock/latte-dock-0.9.11/obj-x86_64-linux-gnu && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kylin/ukui/ukui-dock/latte-dock-0.9.11 /home/kylin/ukui/ukui-dock/latte-dock-0.9.11/containment /home/kylin/ukui/ukui-dock/latte-dock-0.9.11/obj-x86_64-linux-gnu /home/kylin/ukui/ukui-dock/latte-dock-0.9.11/obj-x86_64-linux-gnu/containment /home/kylin/ukui/ukui-dock/latte-dock-0.9.11/obj-x86_64-linux-gnu/containment/CMakeFiles/org.kde.latte.containment-plasmoids-metadata-json.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : containment/CMakeFiles/org.kde.latte.containment-plasmoids-metadata-json.dir/depend

