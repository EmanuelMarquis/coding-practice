cmake_minimum_required(VERSION 3.20)

project(multi_threading C)

set(CMAKE_C_STANDARD 11)

find_package(CURL REQUIRED)
include_directories(include)
add_subdirectory(cunit/CUnit)

add_executable(multi_threading ./src/main.c)
set_target_properties(multi_threading PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/build
)

target_link_libraries(multi_threading CURL::libcurl)

# testing

add_executable(tests ./tests/test1.c)
target_link_libraries(tests PRIVATE cunit)
set_target_properties(tests PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/tests
)