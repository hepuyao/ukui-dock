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
CMAKE_BINARY_DIR = /home/kylin/ukui/ukui-dock/latte-dock-0.9.11/build

# Utility rule file for org.kde.latte.plasmoid-plasmoids-metadata-json.

# Include the progress variables for this target.
include plasmoid/CMakeFiles/org.kde.latte.plasmoid-plasmoids-metadata-json.dir/progress.make

plasmoid/CMakeFiles/org.kde.latte.plasmoid-plasmoids-metadata-json: plasmoid/org.kde.latte.plasmoid-plasmoids-metadata.json


plasmoid/org.kde.latte.plasmoid-plasmoids-metadata.json: ../plasmoid/package/metadata.desktop
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/kylin/ukui/ukui-dock/latte-dock-0.9.11/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating org.kde.latte.plasmoid-plasmoids-metadata.json"
	cd /home/kylin/ukui/ukui-dock/latte-dock-0.9.11/build/plasmoid && /usr/bin/desktoptojson -i /home/kylin/ukui/ukui-dock/latte-dock-0.9.11/plasmoid/package/metadata.desktop -o /home/kylin/ukui/ukui-dock/latte-dock-0.9.11/build/plasmoid/org.kde.latte.plasmoid-plasmoids-metadata.json

org.kde.latte.plasmoid-plasmoids-metadata-json: plasmoid/CMakeFiles/org.kde.latte.plasmoid-plasmoids-metadata-json
org.kde.latte.plasmoid-plasmoids-metadata-json: plasmoid/org.kde.latte.plasmoid-plasmoids-metadata.json
org.kde.latte.plasmoid-plasmoids-metadata-json: plasmoid/CMakeFiles/org.kde.latte.plasmoid-plasmoids-metadata-json.dir/build.make

.PHONY : org.kde.latte.plasmoid-plasmoids-metadata-json

# Rule to build all files generated by this target.
plasmoid/CMakeFiles/org.kde.latte.plasmoid-plasmoids-metadata-json.dir/build: org.kde.latte.plasmoid-plasmoids-metadata-json

.PHONY : plasmoid/CMakeFiles/org.kde.latte.plasmoid-plasmoids-metadata-json.dir/build

plasmoid/CMakeFiles/org.kde.latte.plasmoid-plasmoids-metadata-json.dir/clean:
	cd /home/kylin/ukui/ukui-dock/latte-dock-0.9.11/build/plasmoid && $(CMAKE_COMMAND) -P CMakeFiles/org.kde.latte.plasmoid-plasmoids-metadata-json.dir/cmake_clean.cmake
.PHONY : plasmoid/CMakeFiles/org.kde.latte.plasmoid-plasmoids-metadata-json.dir/clean

plasmoid/CMakeFiles/org.kde.latte.plasmoid-plasmoids-metadata-json.dir/depend:
	cd /home/kylin/ukui/ukui-dock/latte-dock-0.9.11/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kylin/ukui/ukui-dock/latte-dock-0.9.11 /home/kylin/ukui/ukui-dock/latte-dock-0.9.11/plasmoid /home/kylin/ukui/ukui-dock/latte-dock-0.9.11/build /home/kylin/ukui/ukui-dock/latte-dock-0.9.11/build/plasmoid /home/kylin/ukui/ukui-dock/latte-dock-0.9.11/build/plasmoid/CMakeFiles/org.kde.latte.plasmoid-plasmoids-metadata-json.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plasmoid/CMakeFiles/org.kde.latte.plasmoid-plasmoids-metadata-json.dir/depend
