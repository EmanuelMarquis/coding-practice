cmake_minimum_required(VERSION 3.20)

project(multi_threading C)

set(CMAKE_C_STANDARD 11)

include_directories(include)

# target_link_libraries(math-interpreter your_library_name)

add_executable(multi_threading ./src/main.c)
set_target_properties(multi_threading PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/build
)

