# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.22

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Jetsa\OneDrive\Documents\EEEE2046\2021_20311170\Worksheet5\hello_qt_cm

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Jetsa\OneDrive\Documents\EEEE2046\2021_20311170\Worksheet5\hello_qt_cm\build

# Include any dependencies generated for this target.
include CMakeFiles/hello_qt.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/hello_qt.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/hello_qt.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hello_qt.dir/flags.make

CMakeFiles/hello_qt.dir/hello_qt_autogen/mocs_compilation.cpp.obj: CMakeFiles/hello_qt.dir/flags.make
CMakeFiles/hello_qt.dir/hello_qt_autogen/mocs_compilation.cpp.obj: CMakeFiles/hello_qt.dir/includes_CXX.rsp
CMakeFiles/hello_qt.dir/hello_qt_autogen/mocs_compilation.cpp.obj: hello_qt_autogen/mocs_compilation.cpp
CMakeFiles/hello_qt.dir/hello_qt_autogen/mocs_compilation.cpp.obj: CMakeFiles/hello_qt.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Jetsa\OneDrive\Documents\EEEE2046\2021_20311170\Worksheet5\hello_qt_cm\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/hello_qt.dir/hello_qt_autogen/mocs_compilation.cpp.obj"
	C:\Qt\Tools\mingw810_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/hello_qt.dir/hello_qt_autogen/mocs_compilation.cpp.obj -MF CMakeFiles\hello_qt.dir\hello_qt_autogen\mocs_compilation.cpp.obj.d -o CMakeFiles\hello_qt.dir\hello_qt_autogen\mocs_compilation.cpp.obj -c C:\Users\Jetsa\OneDrive\Documents\EEEE2046\2021_20311170\Worksheet5\hello_qt_cm\build\hello_qt_autogen\mocs_compilation.cpp

CMakeFiles/hello_qt.dir/hello_qt_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hello_qt.dir/hello_qt_autogen/mocs_compilation.cpp.i"
	C:\Qt\Tools\mingw810_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Jetsa\OneDrive\Documents\EEEE2046\2021_20311170\Worksheet5\hello_qt_cm\build\hello_qt_autogen\mocs_compilation.cpp > CMakeFiles\hello_qt.dir\hello_qt_autogen\mocs_compilation.cpp.i

CMakeFiles/hello_qt.dir/hello_qt_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hello_qt.dir/hello_qt_autogen/mocs_compilation.cpp.s"
	C:\Qt\Tools\mingw810_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Jetsa\OneDrive\Documents\EEEE2046\2021_20311170\Worksheet5\hello_qt_cm\build\hello_qt_autogen\mocs_compilation.cpp -o CMakeFiles\hello_qt.dir\hello_qt_autogen\mocs_compilation.cpp.s

CMakeFiles/hello_qt.dir/hello_qt.cpp.obj: CMakeFiles/hello_qt.dir/flags.make
CMakeFiles/hello_qt.dir/hello_qt.cpp.obj: CMakeFiles/hello_qt.dir/includes_CXX.rsp
CMakeFiles/hello_qt.dir/hello_qt.cpp.obj: ../hello_qt.cpp
CMakeFiles/hello_qt.dir/hello_qt.cpp.obj: CMakeFiles/hello_qt.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Jetsa\OneDrive\Documents\EEEE2046\2021_20311170\Worksheet5\hello_qt_cm\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/hello_qt.dir/hello_qt.cpp.obj"
	C:\Qt\Tools\mingw810_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/hello_qt.dir/hello_qt.cpp.obj -MF CMakeFiles\hello_qt.dir\hello_qt.cpp.obj.d -o CMakeFiles\hello_qt.dir\hello_qt.cpp.obj -c C:\Users\Jetsa\OneDrive\Documents\EEEE2046\2021_20311170\Worksheet5\hello_qt_cm\hello_qt.cpp

CMakeFiles/hello_qt.dir/hello_qt.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hello_qt.dir/hello_qt.cpp.i"
	C:\Qt\Tools\mingw810_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Jetsa\OneDrive\Documents\EEEE2046\2021_20311170\Worksheet5\hello_qt_cm\hello_qt.cpp > CMakeFiles\hello_qt.dir\hello_qt.cpp.i

CMakeFiles/hello_qt.dir/hello_qt.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hello_qt.dir/hello_qt.cpp.s"
	C:\Qt\Tools\mingw810_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Jetsa\OneDrive\Documents\EEEE2046\2021_20311170\Worksheet5\hello_qt_cm\hello_qt.cpp -o CMakeFiles\hello_qt.dir\hello_qt.cpp.s

# Object files for target hello_qt
hello_qt_OBJECTS = \
"CMakeFiles/hello_qt.dir/hello_qt_autogen/mocs_compilation.cpp.obj" \
"CMakeFiles/hello_qt.dir/hello_qt.cpp.obj"

# External object files for target hello_qt
hello_qt_EXTERNAL_OBJECTS =

hello_qt.exe: CMakeFiles/hello_qt.dir/hello_qt_autogen/mocs_compilation.cpp.obj
hello_qt.exe: CMakeFiles/hello_qt.dir/hello_qt.cpp.obj
hello_qt.exe: CMakeFiles/hello_qt.dir/build.make
hello_qt.exe: C:/Qt/6.2.1/mingw81_64/lib/libQt6Widgets.a
hello_qt.exe: C:/Qt/6.2.1/mingw81_64/lib/libQt6Gui.a
hello_qt.exe: C:/Qt/6.2.1/mingw81_64/lib/libQt6Core.a
hello_qt.exe: CMakeFiles/hello_qt.dir/linklibs.rsp
hello_qt.exe: CMakeFiles/hello_qt.dir/objects1.rsp
hello_qt.exe: CMakeFiles/hello_qt.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Jetsa\OneDrive\Documents\EEEE2046\2021_20311170\Worksheet5\hello_qt_cm\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable hello_qt.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\hello_qt.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hello_qt.dir/build: hello_qt.exe
.PHONY : CMakeFiles/hello_qt.dir/build

CMakeFiles/hello_qt.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\hello_qt.dir\cmake_clean.cmake
.PHONY : CMakeFiles/hello_qt.dir/clean

CMakeFiles/hello_qt.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Jetsa\OneDrive\Documents\EEEE2046\2021_20311170\Worksheet5\hello_qt_cm C:\Users\Jetsa\OneDrive\Documents\EEEE2046\2021_20311170\Worksheet5\hello_qt_cm C:\Users\Jetsa\OneDrive\Documents\EEEE2046\2021_20311170\Worksheet5\hello_qt_cm\build C:\Users\Jetsa\OneDrive\Documents\EEEE2046\2021_20311170\Worksheet5\hello_qt_cm\build C:\Users\Jetsa\OneDrive\Documents\EEEE2046\2021_20311170\Worksheet5\hello_qt_cm\build\CMakeFiles\hello_qt.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/hello_qt.dir/depend

