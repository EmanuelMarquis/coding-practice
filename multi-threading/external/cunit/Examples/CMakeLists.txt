add_library(cunitexamples ExampleTests.c)
target_include_directories(cunitexamples PUBLIC .)
target_link_libraries(cunitexamples cunit)

add_subdirectory(BasicTest)
add_subdirectory(AutomatedTest)
add_subdirectory(CI)