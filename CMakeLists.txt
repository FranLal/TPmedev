CMAKE_MINIMUM_REQUIRED(VERSION 2.6)

project(TPmedev)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/build)

find_package()

include_directories(${PROJECT_SOURCE_DIR})

add_executable(project src/main.cpp)
