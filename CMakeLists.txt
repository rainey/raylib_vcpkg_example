
cmake_minimum_required(VERSION 3.21.0)

project("Shawn's creative coding"
VERSION 0.0.0
LANGUAGES C CXX)

find_package(Threads REQUIRED)
find_package(raylib CONFIG REQUIRED)
#Required
find_package(glfw3 CONFIG REQUIRED)

add_subdirectory(src/raylib)

