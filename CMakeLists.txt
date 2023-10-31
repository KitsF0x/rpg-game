cmake_minimum_required(VERSION 3.0.0)
project(rpg)

find_package(SFML COMPONENTS system window graphics CONFIG REQUIRED)
find_package(GTest CONFIG REQUIRED)

add_subdirectory(blocks)
add_subdirectory(map)
add_subdirectory(test)

add_executable(${PROJECT_NAME}-game "main.cpp")
target_link_libraries(${PROJECT_NAME}-game PRIVATE blocks map)