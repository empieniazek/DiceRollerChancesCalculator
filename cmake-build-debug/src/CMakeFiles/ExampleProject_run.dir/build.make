# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.21

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
CMAKE_COMMAND = "W:\CLion 2021.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "W:\CLion 2021.3.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = W:\Projects

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = W:\Projects\cmake-build-debug

# Include any dependencies generated for this target.
include src/CMakeFiles/ExampleProject_run.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/ExampleProject_run.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/ExampleProject_run.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/ExampleProject_run.dir/flags.make

src/CMakeFiles/ExampleProject_run.dir/Calculator.cpp.obj: src/CMakeFiles/ExampleProject_run.dir/flags.make
src/CMakeFiles/ExampleProject_run.dir/Calculator.cpp.obj: src/CMakeFiles/ExampleProject_run.dir/includes_CXX.rsp
src/CMakeFiles/ExampleProject_run.dir/Calculator.cpp.obj: ../src/Calculator.cpp
src/CMakeFiles/ExampleProject_run.dir/Calculator.cpp.obj: src/CMakeFiles/ExampleProject_run.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=W:\Projects\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/ExampleProject_run.dir/Calculator.cpp.obj"
	cd /d W:\Projects\cmake-build-debug\src && "W:\CLion 2021.3.2\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/ExampleProject_run.dir/Calculator.cpp.obj -MF CMakeFiles\ExampleProject_run.dir\Calculator.cpp.obj.d -o CMakeFiles\ExampleProject_run.dir\Calculator.cpp.obj -c W:\Projects\src\Calculator.cpp

src/CMakeFiles/ExampleProject_run.dir/Calculator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ExampleProject_run.dir/Calculator.cpp.i"
	cd /d W:\Projects\cmake-build-debug\src && "W:\CLion 2021.3.2\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E W:\Projects\src\Calculator.cpp > CMakeFiles\ExampleProject_run.dir\Calculator.cpp.i

src/CMakeFiles/ExampleProject_run.dir/Calculator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ExampleProject_run.dir/Calculator.cpp.s"
	cd /d W:\Projects\cmake-build-debug\src && "W:\CLion 2021.3.2\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S W:\Projects\src\Calculator.cpp -o CMakeFiles\ExampleProject_run.dir\Calculator.cpp.s

src/CMakeFiles/ExampleProject_run.dir/CsvBuilder.cpp.obj: src/CMakeFiles/ExampleProject_run.dir/flags.make
src/CMakeFiles/ExampleProject_run.dir/CsvBuilder.cpp.obj: src/CMakeFiles/ExampleProject_run.dir/includes_CXX.rsp
src/CMakeFiles/ExampleProject_run.dir/CsvBuilder.cpp.obj: ../src/CsvBuilder.cpp
src/CMakeFiles/ExampleProject_run.dir/CsvBuilder.cpp.obj: src/CMakeFiles/ExampleProject_run.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=W:\Projects\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/ExampleProject_run.dir/CsvBuilder.cpp.obj"
	cd /d W:\Projects\cmake-build-debug\src && "W:\CLion 2021.3.2\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/ExampleProject_run.dir/CsvBuilder.cpp.obj -MF CMakeFiles\ExampleProject_run.dir\CsvBuilder.cpp.obj.d -o CMakeFiles\ExampleProject_run.dir\CsvBuilder.cpp.obj -c W:\Projects\src\CsvBuilder.cpp

src/CMakeFiles/ExampleProject_run.dir/CsvBuilder.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ExampleProject_run.dir/CsvBuilder.cpp.i"
	cd /d W:\Projects\cmake-build-debug\src && "W:\CLion 2021.3.2\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E W:\Projects\src\CsvBuilder.cpp > CMakeFiles\ExampleProject_run.dir\CsvBuilder.cpp.i

src/CMakeFiles/ExampleProject_run.dir/CsvBuilder.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ExampleProject_run.dir/CsvBuilder.cpp.s"
	cd /d W:\Projects\cmake-build-debug\src && "W:\CLion 2021.3.2\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S W:\Projects\src\CsvBuilder.cpp -o CMakeFiles\ExampleProject_run.dir\CsvBuilder.cpp.s

src/CMakeFiles/ExampleProject_run.dir/Dice.cpp.obj: src/CMakeFiles/ExampleProject_run.dir/flags.make
src/CMakeFiles/ExampleProject_run.dir/Dice.cpp.obj: src/CMakeFiles/ExampleProject_run.dir/includes_CXX.rsp
src/CMakeFiles/ExampleProject_run.dir/Dice.cpp.obj: ../src/Dice.cpp
src/CMakeFiles/ExampleProject_run.dir/Dice.cpp.obj: src/CMakeFiles/ExampleProject_run.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=W:\Projects\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/ExampleProject_run.dir/Dice.cpp.obj"
	cd /d W:\Projects\cmake-build-debug\src && "W:\CLion 2021.3.2\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/ExampleProject_run.dir/Dice.cpp.obj -MF CMakeFiles\ExampleProject_run.dir\Dice.cpp.obj.d -o CMakeFiles\ExampleProject_run.dir\Dice.cpp.obj -c W:\Projects\src\Dice.cpp

src/CMakeFiles/ExampleProject_run.dir/Dice.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ExampleProject_run.dir/Dice.cpp.i"
	cd /d W:\Projects\cmake-build-debug\src && "W:\CLion 2021.3.2\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E W:\Projects\src\Dice.cpp > CMakeFiles\ExampleProject_run.dir\Dice.cpp.i

src/CMakeFiles/ExampleProject_run.dir/Dice.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ExampleProject_run.dir/Dice.cpp.s"
	cd /d W:\Projects\cmake-build-debug\src && "W:\CLion 2021.3.2\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S W:\Projects\src\Dice.cpp -o CMakeFiles\ExampleProject_run.dir\Dice.cpp.s

src/CMakeFiles/ExampleProject_run.dir/Throw.cpp.obj: src/CMakeFiles/ExampleProject_run.dir/flags.make
src/CMakeFiles/ExampleProject_run.dir/Throw.cpp.obj: src/CMakeFiles/ExampleProject_run.dir/includes_CXX.rsp
src/CMakeFiles/ExampleProject_run.dir/Throw.cpp.obj: ../src/Throw.cpp
src/CMakeFiles/ExampleProject_run.dir/Throw.cpp.obj: src/CMakeFiles/ExampleProject_run.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=W:\Projects\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/CMakeFiles/ExampleProject_run.dir/Throw.cpp.obj"
	cd /d W:\Projects\cmake-build-debug\src && "W:\CLion 2021.3.2\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/ExampleProject_run.dir/Throw.cpp.obj -MF CMakeFiles\ExampleProject_run.dir\Throw.cpp.obj.d -o CMakeFiles\ExampleProject_run.dir\Throw.cpp.obj -c W:\Projects\src\Throw.cpp

src/CMakeFiles/ExampleProject_run.dir/Throw.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ExampleProject_run.dir/Throw.cpp.i"
	cd /d W:\Projects\cmake-build-debug\src && "W:\CLion 2021.3.2\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E W:\Projects\src\Throw.cpp > CMakeFiles\ExampleProject_run.dir\Throw.cpp.i

src/CMakeFiles/ExampleProject_run.dir/Throw.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ExampleProject_run.dir/Throw.cpp.s"
	cd /d W:\Projects\cmake-build-debug\src && "W:\CLion 2021.3.2\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S W:\Projects\src\Throw.cpp -o CMakeFiles\ExampleProject_run.dir\Throw.cpp.s

src/CMakeFiles/ExampleProject_run.dir/main.cpp.obj: src/CMakeFiles/ExampleProject_run.dir/flags.make
src/CMakeFiles/ExampleProject_run.dir/main.cpp.obj: src/CMakeFiles/ExampleProject_run.dir/includes_CXX.rsp
src/CMakeFiles/ExampleProject_run.dir/main.cpp.obj: ../src/main.cpp
src/CMakeFiles/ExampleProject_run.dir/main.cpp.obj: src/CMakeFiles/ExampleProject_run.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=W:\Projects\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/CMakeFiles/ExampleProject_run.dir/main.cpp.obj"
	cd /d W:\Projects\cmake-build-debug\src && "W:\CLion 2021.3.2\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/ExampleProject_run.dir/main.cpp.obj -MF CMakeFiles\ExampleProject_run.dir\main.cpp.obj.d -o CMakeFiles\ExampleProject_run.dir\main.cpp.obj -c W:\Projects\src\main.cpp

src/CMakeFiles/ExampleProject_run.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ExampleProject_run.dir/main.cpp.i"
	cd /d W:\Projects\cmake-build-debug\src && "W:\CLion 2021.3.2\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E W:\Projects\src\main.cpp > CMakeFiles\ExampleProject_run.dir\main.cpp.i

src/CMakeFiles/ExampleProject_run.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ExampleProject_run.dir/main.cpp.s"
	cd /d W:\Projects\cmake-build-debug\src && "W:\CLion 2021.3.2\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S W:\Projects\src\main.cpp -o CMakeFiles\ExampleProject_run.dir\main.cpp.s

# Object files for target ExampleProject_run
ExampleProject_run_OBJECTS = \
"CMakeFiles/ExampleProject_run.dir/Calculator.cpp.obj" \
"CMakeFiles/ExampleProject_run.dir/CsvBuilder.cpp.obj" \
"CMakeFiles/ExampleProject_run.dir/Dice.cpp.obj" \
"CMakeFiles/ExampleProject_run.dir/Throw.cpp.obj" \
"CMakeFiles/ExampleProject_run.dir/main.cpp.obj"

# External object files for target ExampleProject_run
ExampleProject_run_EXTERNAL_OBJECTS =

src/ExampleProject_run.exe: src/CMakeFiles/ExampleProject_run.dir/Calculator.cpp.obj
src/ExampleProject_run.exe: src/CMakeFiles/ExampleProject_run.dir/CsvBuilder.cpp.obj
src/ExampleProject_run.exe: src/CMakeFiles/ExampleProject_run.dir/Dice.cpp.obj
src/ExampleProject_run.exe: src/CMakeFiles/ExampleProject_run.dir/Throw.cpp.obj
src/ExampleProject_run.exe: src/CMakeFiles/ExampleProject_run.dir/main.cpp.obj
src/ExampleProject_run.exe: src/CMakeFiles/ExampleProject_run.dir/build.make
src/ExampleProject_run.exe: src/CMakeFiles/ExampleProject_run.dir/linklibs.rsp
src/ExampleProject_run.exe: src/CMakeFiles/ExampleProject_run.dir/objects1.rsp
src/ExampleProject_run.exe: src/CMakeFiles/ExampleProject_run.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=W:\Projects\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable ExampleProject_run.exe"
	cd /d W:\Projects\cmake-build-debug\src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ExampleProject_run.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/ExampleProject_run.dir/build: src/ExampleProject_run.exe
.PHONY : src/CMakeFiles/ExampleProject_run.dir/build

src/CMakeFiles/ExampleProject_run.dir/clean:
	cd /d W:\Projects\cmake-build-debug\src && $(CMAKE_COMMAND) -P CMakeFiles\ExampleProject_run.dir\cmake_clean.cmake
.PHONY : src/CMakeFiles/ExampleProject_run.dir/clean

src/CMakeFiles/ExampleProject_run.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" W:\Projects W:\Projects\src W:\Projects\cmake-build-debug W:\Projects\cmake-build-debug\src W:\Projects\cmake-build-debug\src\CMakeFiles\ExampleProject_run.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/ExampleProject_run.dir/depend
