cmake_minimum_required(VERSION 3.10)

project(ProbabilisticRoadmap)

file(GLOB main_src "*/*.h" "*/*.cpp")

add_executable(main ${main_src})

find_package(OpenGL REQUIRED)
find_package(glfw3 REQUIRED)
include_directories(${OPENGL_INCLUDE_DIRS} ${GLEW_INCLUDE_DIRS} src/headers)

target_link_libraries(main ${OPENGL_LIBRARIES} ${GLEW_LIBRARY})