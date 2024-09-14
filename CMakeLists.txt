cmake_minimum_required(VERSION 3.28.1)

project(TeaPot VERSION 0.0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(BoilingHotWater REQUIRED)
find_package(TeaCup REQUIRED)
find_package(Threads REQUIRED)
find_package(OpenGL REQUIRED)

add_subdirectory(src)