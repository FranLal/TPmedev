CMAKE_MINIMUM_REQUIRED(VERSION 2.6)

project(TPmedev)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/build)

find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)

file(GLOB_RECURSE SRC_FILES "src/**.cpp")

include_directories(${PROJECT_SOURCE_DIR})
include_directories(${PROJECT_SOURCE_DIR}/include)

include_directories(${OPENGL_INCLUDE_DIRS} ${GLUT_INCLUDE_DIRS})

add_executable(TPmedev ${SRC_FILES})

target_link_libraries(TPmedev ${OPENGL_LIBRARIES} ${GLUT_LIBRARY})

