cmake_minimum_required (VERSION 3.6)
 
project(TestProject)
set(SOURCE_EXE main.cpp)
set(SOURCE_LIB ParseLib.cpp)

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/input.txt
     DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

add_library(ParseLib STATIC ${SOURCE_LIB})

add_executable(main ${SOURCE_EXE})
target_link_libraries(main ParseLib) 