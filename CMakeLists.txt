cmake_minimum_required(VERSION 3.19)
project(OpenGL_Demo)

set(CMAKE_CXX_STANDARD 14)

add_executable(OpenGL_Demo main.cpp /home/adam79/dev/glfw-3.3.3/src/glad.c)

set(SOURCE_FILES main.cpp)
target_link_libraries(OpenGL_Demo GL GLU glfw3 X11 Xxf86vm Xrandr pthread Xi dl Xinerama Xcursor)

