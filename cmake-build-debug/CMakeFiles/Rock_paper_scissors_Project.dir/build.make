# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.30

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
CMAKE_COMMAND = /snap/clion/322/bin/cmake/linux/x64/bin/cmake

# The command to remove a file.
RM = /snap/clion/322/bin/cmake/linux/x64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/abod/My_Folders/Prog Map/Projects/Rock paper scissors Project"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/abod/My_Folders/Prog Map/Projects/Rock paper scissors Project/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Rock_paper_scissors_Project.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Rock_paper_scissors_Project.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Rock_paper_scissors_Project.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Rock_paper_scissors_Project.dir/flags.make

CMakeFiles/Rock_paper_scissors_Project.dir/main.cpp.o: CMakeFiles/Rock_paper_scissors_Project.dir/flags.make
CMakeFiles/Rock_paper_scissors_Project.dir/main.cpp.o: /home/abod/My_Folders/Prog\ Map/Projects/Rock\ paper\ scissors\ Project/main.cpp
CMakeFiles/Rock_paper_scissors_Project.dir/main.cpp.o: CMakeFiles/Rock_paper_scissors_Project.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/home/abod/My_Folders/Prog Map/Projects/Rock paper scissors Project/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Rock_paper_scissors_Project.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Rock_paper_scissors_Project.dir/main.cpp.o -MF CMakeFiles/Rock_paper_scissors_Project.dir/main.cpp.o.d -o CMakeFiles/Rock_paper_scissors_Project.dir/main.cpp.o -c "/home/abod/My_Folders/Prog Map/Projects/Rock paper scissors Project/main.cpp"

CMakeFiles/Rock_paper_scissors_Project.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Rock_paper_scissors_Project.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/abod/My_Folders/Prog Map/Projects/Rock paper scissors Project/main.cpp" > CMakeFiles/Rock_paper_scissors_Project.dir/main.cpp.i

CMakeFiles/Rock_paper_scissors_Project.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Rock_paper_scissors_Project.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/abod/My_Folders/Prog Map/Projects/Rock paper scissors Project/main.cpp" -o CMakeFiles/Rock_paper_scissors_Project.dir/main.cpp.s

# Object files for target Rock_paper_scissors_Project
Rock_paper_scissors_Project_OBJECTS = \
"CMakeFiles/Rock_paper_scissors_Project.dir/main.cpp.o"

# External object files for target Rock_paper_scissors_Project
Rock_paper_scissors_Project_EXTERNAL_OBJECTS =

Rock_paper_scissors_Project: CMakeFiles/Rock_paper_scissors_Project.dir/main.cpp.o
Rock_paper_scissors_Project: CMakeFiles/Rock_paper_scissors_Project.dir/build.make
Rock_paper_scissors_Project: CMakeFiles/Rock_paper_scissors_Project.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="/home/abod/My_Folders/Prog Map/Projects/Rock paper scissors Project/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Rock_paper_scissors_Project"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Rock_paper_scissors_Project.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Rock_paper_scissors_Project.dir/build: Rock_paper_scissors_Project
.PHONY : CMakeFiles/Rock_paper_scissors_Project.dir/build

CMakeFiles/Rock_paper_scissors_Project.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Rock_paper_scissors_Project.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Rock_paper_scissors_Project.dir/clean

CMakeFiles/Rock_paper_scissors_Project.dir/depend:
	cd "/home/abod/My_Folders/Prog Map/Projects/Rock paper scissors Project/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/abod/My_Folders/Prog Map/Projects/Rock paper scissors Project" "/home/abod/My_Folders/Prog Map/Projects/Rock paper scissors Project" "/home/abod/My_Folders/Prog Map/Projects/Rock paper scissors Project/cmake-build-debug" "/home/abod/My_Folders/Prog Map/Projects/Rock paper scissors Project/cmake-build-debug" "/home/abod/My_Folders/Prog Map/Projects/Rock paper scissors Project/cmake-build-debug/CMakeFiles/Rock_paper_scissors_Project.dir/DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/Rock_paper_scissors_Project.dir/depend

