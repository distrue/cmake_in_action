# Download and unpack googletest at configure time
cmake_minimum_required(VERSION 3.19)
project(MakeUpTest NONE)
set(CMAKE_CXX_STANDARD 11)

configure_file(cmake/CMakeLists.txt.in cmake/googletest-download/CMakeLists.txt)
execute_process(COMMAND ${CMAKE_COMMAND} -G "${CMAKE_GENERATOR}" .
        RESULT_VARIABLE result
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/cmake/googletest-download )
if(result)
    message(FATAL_ERROR "CMake step for googletest failed: ${result}")
endif()
execute_process(COMMAND ${CMAKE_COMMAND} --build .
        RESULT_VARIABLE result
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/cmake/googletest-download )
if(result)
    message(FATAL_ERROR "Build step for googletest failed: ${result}")
endif()

add_subdirectory(src)
add_subdirectory(test)
add_subdirectory(extern/gtest/googletest-src EXCLUDE_FROM_ALL)
