#in src/raylib

find_package(raylib CONFIG REQUIRED)

add_executable(raylib_example
    raylib_example.cpp
)

target_include_directories(raylib_example PRIVATE ${RAYLIB_INCLUDE_DIRS})
target_link_libraries(raylib_example PRIVATE ${RAYLIB_LIBRARIES} )
