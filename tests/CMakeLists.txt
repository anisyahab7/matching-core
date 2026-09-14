add_executable(matching-core_tests test_core.cpp)
target_link_libraries(matching-core_tests PRIVATE engine)
target_include_directories(matching-core_tests PRIVATE ${CMAKE_SOURCE_DIR}/include)
add_test(NAME core COMMAND matching-core_tests)
