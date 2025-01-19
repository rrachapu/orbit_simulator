cmake_minimum_required(VERSION 3.10)
project(Orbit_Simulator)

# Specify C++ standard
set(CMAKE_CXX_STANDARD 17)

# Include directories
include_directories(include /opt/homebrew/include/eigen3)

# Source files
file(GLOB SOURCES "src/*.cpp")

# Add executable
add_executable(main ${SOURCES})
