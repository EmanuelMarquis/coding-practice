cmake_minimum_required(VERSION 3.20)

project(multi_threading C)

set(CMAKE_C_STANDARD 11)

if(WIN32)
    add_subdirectory(external/curl)
else()
    find_package(CURL REQUIRED)
endif()

include_directories(include)
include_directories(external/sys_wait_h/sys)

add_subdirectory(external/cunit/CUnit)

add_executable(multi_threading ./src/main.c)
set_target_properties(multi_threading PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/build
)

if(WIN32)
    target_include_directories(multi_threading PRIVATE ${CMAKE_CURRENT_BINARY_DIR}/external/curl/include)
    target_link_libraries(multi_threading PRIVATE libcurl)
else()
    target_link_libraries(multi_threading CURL::libcurl)
endif()

# testing

add_executable(tests ./tests/test1.c)
target_link_libraries(tests PRIVATE external/cunit)
set_target_properties(tests PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/tests
)