CMAKE_MINIMUM_REQUIRED(VERSION 2.6)

project(TPmedev)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/build)

find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)

file(GLOB SRC_MAIN "src/main.cpp")
file(GLOB_RECURSE SRC_FILES "src/**.cpp")
list(REMOVE_ITEM SRC_FILES ${SRC_MAIN})

include_directories(${PROJECT_SOURCE_DIR})
include_directories(${PROJECT_SOURCE_DIR}/include)

include_directories(${OPENGL_INCLUDE_DIR} ${GLUT_INCLUDE_DIR})

add_executable(TPmedev ${SRC_FILES} ${SRC_MAIN})

target_link_libraries(TPmedev ${OPENGL_LIBRARIES} ${GLUT_LIBRARY})

