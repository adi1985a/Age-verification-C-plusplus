cmake_minimum_required(VERSION 3.10)
project(AgeVerification)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)

add_executable(AgeVerification main.cpp)
target_link_libraries(AgeVerification sfml-graphics sfml-window sfml-system)
