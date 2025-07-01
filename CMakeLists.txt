cmake_minimum_required(VERSION 3.5...4.0)
project(my_project VERSION 1.0.0 LANGUAGES CXX C)


# Executable Target

add_executable(my_exe source/main.cpp source/math.c)

# Target specific include directories, in this case PRIVATE includes for my_exe executable target
# Note: it could have been PRIVATE or PUBLIC
target_include_directories(my_exe PRIVATE ${CMAKE_SOURCE_DIR}/include)


# Library Target
add_library(my_math_lib SHARED source/my_math_lib_source.cpp)
target_include_directories(my_math_lib PRIVATE ${CMAKE_SOURCE_DIR}/include)

# Executable using the my_math_lib SHARED library
add_executable(my_math_lib_exe source/my_math_lib_exe.cpp)
target_include_directories(my_math_lib_exe PRIVATE ${CMAKE_SOURCE_DIR}/include)
# Note: it could have been PRIVATE, PUBLIC, or INTERFACE. INTERFACE -> for header only librarly linkage
target_link_libraries(my_math_lib_exe PRIVATE my_math_lib)
