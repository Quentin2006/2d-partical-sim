# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/qscheetz/projects/2d-partical-sim

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/qscheetz/projects/2d-partical-sim

# Include any dependencies generated for this target.
include CMakeFiles/sfml-app.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/sfml-app.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/sfml-app.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sfml-app.dir/flags.make

CMakeFiles/sfml-app.dir/main.cpp.o: CMakeFiles/sfml-app.dir/flags.make
CMakeFiles/sfml-app.dir/main.cpp.o: main.cpp
CMakeFiles/sfml-app.dir/main.cpp.o: CMakeFiles/sfml-app.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/qscheetz/projects/2d-partical-sim/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sfml-app.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sfml-app.dir/main.cpp.o -MF CMakeFiles/sfml-app.dir/main.cpp.o.d -o CMakeFiles/sfml-app.dir/main.cpp.o -c /home/qscheetz/projects/2d-partical-sim/main.cpp

CMakeFiles/sfml-app.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/sfml-app.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/qscheetz/projects/2d-partical-sim/main.cpp > CMakeFiles/sfml-app.dir/main.cpp.i

CMakeFiles/sfml-app.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/sfml-app.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/qscheetz/projects/2d-partical-sim/main.cpp -o CMakeFiles/sfml-app.dir/main.cpp.s

CMakeFiles/sfml-app.dir/sphere/sphere.cpp.o: CMakeFiles/sfml-app.dir/flags.make
CMakeFiles/sfml-app.dir/sphere/sphere.cpp.o: sphere/sphere.cpp
CMakeFiles/sfml-app.dir/sphere/sphere.cpp.o: CMakeFiles/sfml-app.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/qscheetz/projects/2d-partical-sim/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/sfml-app.dir/sphere/sphere.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sfml-app.dir/sphere/sphere.cpp.o -MF CMakeFiles/sfml-app.dir/sphere/sphere.cpp.o.d -o CMakeFiles/sfml-app.dir/sphere/sphere.cpp.o -c /home/qscheetz/projects/2d-partical-sim/sphere/sphere.cpp

CMakeFiles/sfml-app.dir/sphere/sphere.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/sfml-app.dir/sphere/sphere.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/qscheetz/projects/2d-partical-sim/sphere/sphere.cpp > CMakeFiles/sfml-app.dir/sphere/sphere.cpp.i

CMakeFiles/sfml-app.dir/sphere/sphere.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/sfml-app.dir/sphere/sphere.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/qscheetz/projects/2d-partical-sim/sphere/sphere.cpp -o CMakeFiles/sfml-app.dir/sphere/sphere.cpp.s

CMakeFiles/sfml-app.dir/world/world.cpp.o: CMakeFiles/sfml-app.dir/flags.make
CMakeFiles/sfml-app.dir/world/world.cpp.o: world/world.cpp
CMakeFiles/sfml-app.dir/world/world.cpp.o: CMakeFiles/sfml-app.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/qscheetz/projects/2d-partical-sim/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/sfml-app.dir/world/world.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sfml-app.dir/world/world.cpp.o -MF CMakeFiles/sfml-app.dir/world/world.cpp.o.d -o CMakeFiles/sfml-app.dir/world/world.cpp.o -c /home/qscheetz/projects/2d-partical-sim/world/world.cpp

CMakeFiles/sfml-app.dir/world/world.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/sfml-app.dir/world/world.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/qscheetz/projects/2d-partical-sim/world/world.cpp > CMakeFiles/sfml-app.dir/world/world.cpp.i

CMakeFiles/sfml-app.dir/world/world.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/sfml-app.dir/world/world.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/qscheetz/projects/2d-partical-sim/world/world.cpp -o CMakeFiles/sfml-app.dir/world/world.cpp.s

# Object files for target sfml-app
sfml__app_OBJECTS = \
"CMakeFiles/sfml-app.dir/main.cpp.o" \
"CMakeFiles/sfml-app.dir/sphere/sphere.cpp.o" \
"CMakeFiles/sfml-app.dir/world/world.cpp.o"

# External object files for target sfml-app
sfml__app_EXTERNAL_OBJECTS =

sfml-app: CMakeFiles/sfml-app.dir/main.cpp.o
sfml-app: CMakeFiles/sfml-app.dir/sphere/sphere.cpp.o
sfml-app: CMakeFiles/sfml-app.dir/world/world.cpp.o
sfml-app: CMakeFiles/sfml-app.dir/build.make
sfml-app: /usr/lib/x86_64-linux-gnu/libsfml-graphics.so.2.6.1
sfml-app: /usr/lib/x86_64-linux-gnu/libsfml-window.so.2.6.1
sfml-app: /usr/lib/x86_64-linux-gnu/libsfml-system.so.2.6.1
sfml-app: CMakeFiles/sfml-app.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/qscheetz/projects/2d-partical-sim/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable sfml-app"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sfml-app.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sfml-app.dir/build: sfml-app
.PHONY : CMakeFiles/sfml-app.dir/build

CMakeFiles/sfml-app.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sfml-app.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sfml-app.dir/clean

CMakeFiles/sfml-app.dir/depend:
	cd /home/qscheetz/projects/2d-partical-sim && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/qscheetz/projects/2d-partical-sim /home/qscheetz/projects/2d-partical-sim /home/qscheetz/projects/2d-partical-sim /home/qscheetz/projects/2d-partical-sim /home/qscheetz/projects/2d-partical-sim/CMakeFiles/sfml-app.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/sfml-app.dir/depend

