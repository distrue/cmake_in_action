# add_library(core ${core_SRCS})

SET( BINARY ${CMAKE_PROJECT_NAME} )
SET( EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR} )
SET( LIBRARY_OUTPUT_PATH ${CMAKE_SOURCE_DIR} )
SET( CMAKE_CACHEFILE_DIR cmake )

add_library(${BINARY}_lib STATIC main.cpp)
add_executable(${BINARY}_run main.cpp)

# target_link_libraries(exe core)

# set(TARGET_APP main)
#add_executable(rocks_cpp main.cpp)
#
#set(TARGET_TEST)
#add_executable(unit_test main_test.cpp)
#target_include_directories(unit_test PRIVATE . usr/local/include)
#target_include_directories(unit_test PRIVATE . usr/local/lib)
#target_link_libraries(unit_test PRIVATE gtest gtest_main pthread)
#