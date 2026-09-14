add_library(engine STATIC engine.cpp)
target_include_directories(engine PUBLIC ${CMAKE_SOURCE_DIR}/include)
add_executable(matching-core main.cpp)
target_link_libraries(matching-core PRIVATE engine)
