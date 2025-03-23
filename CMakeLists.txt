cmake_minimum_required(VERSION 3.10)
project(sfml-app)

# Find SFML
find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)

# Add the sphere directory for headers and sources
include_directories(sphere)  # Include the sphere folder for headers
add_executable(sfml-app main.cpp sphere/sphere.cpp)  # Include sphere/sphere.cpp

# Link SFML to the project
target_link_libraries(sfml-app sfml-graphics sfml-window sfml-system)