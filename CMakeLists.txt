cmake_minimum_required(VERSION 3.5.1)
project(sorting)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Werror -Icw-ip-211_sorting -Iinclude -Ithirdparty")

include_directories(include)
include_directories(thirdparty)

add_library(sortinglib src/sorts.cpp)

target_link_libraries(sortinglib m)

set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/build)

add_executable(test_app test/ctest.cpp test/main.cpp)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build)

target_link_libraries(test_app sortinglib)

add_executable(sorting src/main.cpp)

set(CMAKE_MODULE_PATH${PROJECT_SOURCE_DIR}/build)

target_link_libraries(sorting sortinglib)