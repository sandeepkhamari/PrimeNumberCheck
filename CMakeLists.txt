cmake_minimum_required(VERSION 3.15)
project(primeNumberCheck)

add_subdirectory(src)
add_subdirectory(test)

# enables you to run ctest from the build directory.
enable_testing()
include(CTest)
