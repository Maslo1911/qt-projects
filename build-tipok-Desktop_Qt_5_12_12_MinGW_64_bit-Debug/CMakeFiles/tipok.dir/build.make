# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.31

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
CMAKE_SOURCE_DIR = "D:\qt projects\tipok"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\qt projects\build-tipok-Desktop_Qt_5_12_12_MinGW_64_bit-Debug"

# Include any dependencies generated for this target.
include CMakeFiles/tipok.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/tipok.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/tipok.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tipok.dir/flags.make

CMakeFiles/tipok.dir/codegen:
.PHONY : CMakeFiles/tipok.dir/codegen

CMakeFiles/tipok.dir/tipok_autogen/mocs_compilation.cpp.obj: CMakeFiles/tipok.dir/flags.make
CMakeFiles/tipok.dir/tipok_autogen/mocs_compilation.cpp.obj: CMakeFiles/tipok.dir/includes_CXX.rsp
CMakeFiles/tipok.dir/tipok_autogen/mocs_compilation.cpp.obj: tipok_autogen/mocs_compilation.cpp
CMakeFiles/tipok.dir/tipok_autogen/mocs_compilation.cpp.obj: CMakeFiles/tipok.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="D:\qt projects\build-tipok-Desktop_Qt_5_12_12_MinGW_64_bit-Debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tipok.dir/tipok_autogen/mocs_compilation.cpp.obj"
	C:\Qt\Qt5.12.12\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tipok.dir/tipok_autogen/mocs_compilation.cpp.obj -MF CMakeFiles\tipok.dir\tipok_autogen\mocs_compilation.cpp.obj.d -o CMakeFiles\tipok.dir\tipok_autogen\mocs_compilation.cpp.obj -c "D:\qt projects\build-tipok-Desktop_Qt_5_12_12_MinGW_64_bit-Debug\tipok_autogen\mocs_compilation.cpp"

CMakeFiles/tipok.dir/tipok_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tipok.dir/tipok_autogen/mocs_compilation.cpp.i"
	C:\Qt\Qt5.12.12\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\qt projects\build-tipok-Desktop_Qt_5_12_12_MinGW_64_bit-Debug\tipok_autogen\mocs_compilation.cpp" > CMakeFiles\tipok.dir\tipok_autogen\mocs_compilation.cpp.i

CMakeFiles/tipok.dir/tipok_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tipok.dir/tipok_autogen/mocs_compilation.cpp.s"
	C:\Qt\Qt5.12.12\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\qt projects\build-tipok-Desktop_Qt_5_12_12_MinGW_64_bit-Debug\tipok_autogen\mocs_compilation.cpp" -o CMakeFiles\tipok.dir\tipok_autogen\mocs_compilation.cpp.s

CMakeFiles/tipok.dir/main.cpp.obj: CMakeFiles/tipok.dir/flags.make
CMakeFiles/tipok.dir/main.cpp.obj: CMakeFiles/tipok.dir/includes_CXX.rsp
CMakeFiles/tipok.dir/main.cpp.obj: D:/qt\ projects/tipok/main.cpp
CMakeFiles/tipok.dir/main.cpp.obj: CMakeFiles/tipok.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="D:\qt projects\build-tipok-Desktop_Qt_5_12_12_MinGW_64_bit-Debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/tipok.dir/main.cpp.obj"
	C:\Qt\Qt5.12.12\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tipok.dir/main.cpp.obj -MF CMakeFiles\tipok.dir\main.cpp.obj.d -o CMakeFiles\tipok.dir\main.cpp.obj -c "D:\qt projects\tipok\main.cpp"

CMakeFiles/tipok.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tipok.dir/main.cpp.i"
	C:\Qt\Qt5.12.12\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\qt projects\tipok\main.cpp" > CMakeFiles\tipok.dir\main.cpp.i

CMakeFiles/tipok.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tipok.dir/main.cpp.s"
	C:\Qt\Qt5.12.12\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\qt projects\tipok\main.cpp" -o CMakeFiles\tipok.dir\main.cpp.s

CMakeFiles/tipok.dir/mainwindow.cpp.obj: CMakeFiles/tipok.dir/flags.make
CMakeFiles/tipok.dir/mainwindow.cpp.obj: CMakeFiles/tipok.dir/includes_CXX.rsp
CMakeFiles/tipok.dir/mainwindow.cpp.obj: D:/qt\ projects/tipok/mainwindow.cpp
CMakeFiles/tipok.dir/mainwindow.cpp.obj: CMakeFiles/tipok.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="D:\qt projects\build-tipok-Desktop_Qt_5_12_12_MinGW_64_bit-Debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/tipok.dir/mainwindow.cpp.obj"
	C:\Qt\Qt5.12.12\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tipok.dir/mainwindow.cpp.obj -MF CMakeFiles\tipok.dir\mainwindow.cpp.obj.d -o CMakeFiles\tipok.dir\mainwindow.cpp.obj -c "D:\qt projects\tipok\mainwindow.cpp"

CMakeFiles/tipok.dir/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tipok.dir/mainwindow.cpp.i"
	C:\Qt\Qt5.12.12\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\qt projects\tipok\mainwindow.cpp" > CMakeFiles\tipok.dir\mainwindow.cpp.i

CMakeFiles/tipok.dir/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tipok.dir/mainwindow.cpp.s"
	C:\Qt\Qt5.12.12\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\qt projects\tipok\mainwindow.cpp" -o CMakeFiles\tipok.dir\mainwindow.cpp.s

# Object files for target tipok
tipok_OBJECTS = \
"CMakeFiles/tipok.dir/tipok_autogen/mocs_compilation.cpp.obj" \
"CMakeFiles/tipok.dir/main.cpp.obj" \
"CMakeFiles/tipok.dir/mainwindow.cpp.obj"

# External object files for target tipok
tipok_EXTERNAL_OBJECTS =

tipok.exe: CMakeFiles/tipok.dir/tipok_autogen/mocs_compilation.cpp.obj
tipok.exe: CMakeFiles/tipok.dir/main.cpp.obj
tipok.exe: CMakeFiles/tipok.dir/mainwindow.cpp.obj
tipok.exe: CMakeFiles/tipok.dir/build.make
tipok.exe: C:/Qt/Qt5.12.12/5.12.12/mingw73_64/lib/libQt5Widgetsd.a
tipok.exe: C:/Qt/Qt5.12.12/5.12.12/mingw73_64/lib/libQt5Guid.a
tipok.exe: C:/Qt/Qt5.12.12/5.12.12/mingw73_64/lib/libQt5Cored.a
tipok.exe: CMakeFiles/tipok.dir/linkLibs.rsp
tipok.exe: CMakeFiles/tipok.dir/objects1.rsp
tipok.exe: CMakeFiles/tipok.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="D:\qt projects\build-tipok-Desktop_Qt_5_12_12_MinGW_64_bit-Debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable tipok.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\tipok.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tipok.dir/build: tipok.exe
.PHONY : CMakeFiles/tipok.dir/build

CMakeFiles/tipok.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\tipok.dir\cmake_clean.cmake
.PHONY : CMakeFiles/tipok.dir/clean

CMakeFiles/tipok.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\qt projects\tipok" "D:\qt projects\tipok" "D:\qt projects\build-tipok-Desktop_Qt_5_12_12_MinGW_64_bit-Debug" "D:\qt projects\build-tipok-Desktop_Qt_5_12_12_MinGW_64_bit-Debug" "D:\qt projects\build-tipok-Desktop_Qt_5_12_12_MinGW_64_bit-Debug\CMakeFiles\tipok.dir\DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/tipok.dir/depend

