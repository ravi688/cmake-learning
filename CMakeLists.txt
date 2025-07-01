cmake_minimum_required(VERSION 3.5...4.0)

# set variables
set(project_name my_project)
set(exe_name my_exe)
set(my_math_lib_exe_name my_math_lib_exe)

project(${project_name} VERSION 1.0.0 LANGUAGES CXX C)


# Executable Target

add_executable(${exe_name} source/main.cpp source/math.c)

# Target specific include directories, in this case PRIVATE includes for my_exe executable target
# Note: it could have been PRIVATE or PUBLIC
target_include_directories(${exe_name} PRIVATE ${CMAKE_SOURCE_DIR}/include)


# Library Target
add_library(my_math_lib SHARED source/my_math_lib_source.cpp)
target_include_directories(my_math_lib PRIVATE ${CMAKE_SOURCE_DIR}/include)

# Executable using the my_math_lib SHARED library
add_executable(${my_math_lib_exe_name} source/my_math_lib_exe.cpp)
target_include_directories(${my_math_lib_exe_name} PRIVATE ${CMAKE_SOURCE_DIR}/include)
# Note: it could have been PRIVATE, PUBLIC, or INTERFACE. INTERFACE -> for header only librarly linkage
target_link_libraries(${my_math_lib_exe_name} PRIVATE my_math_lib)
