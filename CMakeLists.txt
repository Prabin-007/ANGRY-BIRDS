cmake_minimum_required(VERSION 3.16)
project(AngryBirdsOOP LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Fetches and builds SFML 2.6.1 automatically (no manual install needed)
include(FetchContent)
FetchContent_Declare(SFML
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG 2.6.1)
set(SFML_BUILD_AUDIO OFF CACHE BOOL "" FORCE)
set(SFML_BUILD_NETWORK OFF CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(SFML)

add_executable(AngryBirds
    src/main.cpp src/Game.cpp src/GameObject.cpp src/Vector2.cpp
    src/Bird.cpp src/Pig.cpp)
target_link_libraries(AngryBirds PRIVATE sfml-graphics sfml-window sfml-system)

# Game loads assets via relative "Data/..." paths: copy next to the exe
add_custom_command(TARGET AngryBirds POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_directory
            ${CMAKE_SOURCE_DIR}/Data $<TARGET_FILE_DIR:AngryBirds>/Data)
set_target_properties(AngryBirds PROPERTIES
    VS_DEBUGGER_WORKING_DIRECTORY ${CMAKE_SOURCE_DIR})

