# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.28

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2024.1.1\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2024.1.1\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\AGUST\Desktop\UCC\programacion III\u3-pilas-agustin-salvay-2305505"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\AGUST\Desktop\UCC\programacion III\u3-pilas-agustin-salvay-2305505\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Ej1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Ej1.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Ej1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Ej1.dir/flags.make

CMakeFiles/Ej1.dir/Ej1.cpp.obj: CMakeFiles/Ej1.dir/flags.make
CMakeFiles/Ej1.dir/Ej1.cpp.obj: C:/Users/AGUST/Desktop/UCC/programacion\ III/u3-pilas-agustin-salvay-2305505/Ej1.cpp
CMakeFiles/Ej1.dir/Ej1.cpp.obj: CMakeFiles/Ej1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\Users\AGUST\Desktop\UCC\programacion III\u3-pilas-agustin-salvay-2305505\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Ej1.dir/Ej1.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Ej1.dir/Ej1.cpp.obj -MF CMakeFiles\Ej1.dir\Ej1.cpp.obj.d -o CMakeFiles\Ej1.dir\Ej1.cpp.obj -c "C:\Users\AGUST\Desktop\UCC\programacion III\u3-pilas-agustin-salvay-2305505\Ej1.cpp"

CMakeFiles/Ej1.dir/Ej1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Ej1.dir/Ej1.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\AGUST\Desktop\UCC\programacion III\u3-pilas-agustin-salvay-2305505\Ej1.cpp" > CMakeFiles\Ej1.dir\Ej1.cpp.i

CMakeFiles/Ej1.dir/Ej1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Ej1.dir/Ej1.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\AGUST\Desktop\UCC\programacion III\u3-pilas-agustin-salvay-2305505\Ej1.cpp" -o CMakeFiles\Ej1.dir\Ej1.cpp.s

# Object files for target Ej1
Ej1_OBJECTS = \
"CMakeFiles/Ej1.dir/Ej1.cpp.obj"

# External object files for target Ej1
Ej1_EXTERNAL_OBJECTS =

Ej1.exe: CMakeFiles/Ej1.dir/Ej1.cpp.obj
Ej1.exe: CMakeFiles/Ej1.dir/build.make
Ej1.exe: CMakeFiles/Ej1.dir/linkLibs.rsp
Ej1.exe: CMakeFiles/Ej1.dir/objects1.rsp
Ej1.exe: CMakeFiles/Ej1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="C:\Users\AGUST\Desktop\UCC\programacion III\u3-pilas-agustin-salvay-2305505\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Ej1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Ej1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Ej1.dir/build: Ej1.exe
.PHONY : CMakeFiles/Ej1.dir/build

CMakeFiles/Ej1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Ej1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Ej1.dir/clean

CMakeFiles/Ej1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\AGUST\Desktop\UCC\programacion III\u3-pilas-agustin-salvay-2305505" "C:\Users\AGUST\Desktop\UCC\programacion III\u3-pilas-agustin-salvay-2305505" "C:\Users\AGUST\Desktop\UCC\programacion III\u3-pilas-agustin-salvay-2305505\cmake-build-debug" "C:\Users\AGUST\Desktop\UCC\programacion III\u3-pilas-agustin-salvay-2305505\cmake-build-debug" "C:\Users\AGUST\Desktop\UCC\programacion III\u3-pilas-agustin-salvay-2305505\cmake-build-debug\CMakeFiles\Ej1.dir\DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/Ej1.dir/depend

