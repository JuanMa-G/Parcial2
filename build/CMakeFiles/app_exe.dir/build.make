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
CMAKE_SOURCE_DIR = /home/juanma/repositorios/parcial2/Parcial2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/juanma/repositorios/parcial2/Parcial2/build

# Include any dependencies generated for this target.
include CMakeFiles/app_exe.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/app_exe.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/app_exe.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/app_exe.dir/flags.make

CMakeFiles/app_exe.dir/src/app.cpp.o: CMakeFiles/app_exe.dir/flags.make
CMakeFiles/app_exe.dir/src/app.cpp.o: /home/juanma/repositorios/parcial2/Parcial2/src/app.cpp
CMakeFiles/app_exe.dir/src/app.cpp.o: CMakeFiles/app_exe.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/juanma/repositorios/parcial2/Parcial2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/app_exe.dir/src/app.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/app_exe.dir/src/app.cpp.o -MF CMakeFiles/app_exe.dir/src/app.cpp.o.d -o CMakeFiles/app_exe.dir/src/app.cpp.o -c /home/juanma/repositorios/parcial2/Parcial2/src/app.cpp

CMakeFiles/app_exe.dir/src/app.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/app_exe.dir/src/app.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/juanma/repositorios/parcial2/Parcial2/src/app.cpp > CMakeFiles/app_exe.dir/src/app.cpp.i

CMakeFiles/app_exe.dir/src/app.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/app_exe.dir/src/app.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/juanma/repositorios/parcial2/Parcial2/src/app.cpp -o CMakeFiles/app_exe.dir/src/app.cpp.s

# Object files for target app_exe
app_exe_OBJECTS = \
"CMakeFiles/app_exe.dir/src/app.cpp.o"

# External object files for target app_exe
app_exe_EXTERNAL_OBJECTS =

app_exe: CMakeFiles/app_exe.dir/src/app.cpp.o
app_exe: CMakeFiles/app_exe.dir/build.make
app_exe: CMakeFiles/app_exe.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/juanma/repositorios/parcial2/Parcial2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable app_exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/app_exe.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/app_exe.dir/build: app_exe
.PHONY : CMakeFiles/app_exe.dir/build

CMakeFiles/app_exe.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/app_exe.dir/cmake_clean.cmake
.PHONY : CMakeFiles/app_exe.dir/clean

CMakeFiles/app_exe.dir/depend:
	cd /home/juanma/repositorios/parcial2/Parcial2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/juanma/repositorios/parcial2/Parcial2 /home/juanma/repositorios/parcial2/Parcial2 /home/juanma/repositorios/parcial2/Parcial2/build /home/juanma/repositorios/parcial2/Parcial2/build /home/juanma/repositorios/parcial2/Parcial2/build/CMakeFiles/app_exe.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/app_exe.dir/depend

