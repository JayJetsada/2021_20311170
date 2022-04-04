# CMakeLists.txt (fragment of)
cmake_minimum_required(VERSION 2.8.0)
project(MathsLib)
include(CTest)
add_library( maths maths.cpp maths.h)

# ...
# description of executables and libraries
# ...
add_executable(test1 test1.cpp maths.h)
target_link_libraries(test1 maths)
add_test(test1 test1)