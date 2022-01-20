CMAKE_MINIMUM_REQUIRED(VERSION 2.6)

project(TPmedev)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/build)

find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)
find_package(Threads REQUIRED)

file(GLOB SRC_MAIN "src/main.cpp")
file(GLOB_RECURSE SRC_FILES "src/**.cpp")
list(REMOVE_ITEM SRC_FILES ${SRC_MAIN})

file(GLOB GTESTS "tests/**.cpp")

include_directories(${PROJECT_SOURCE_DIR})
include_directories(${PROJECT_SOURCE_DIR}/include)

include_directories(${OPENGL_INCLUDE_DIR} ${GLUT_INCLUDE_DIR})
include_directories(${PROJECT_SOURCE_DIR}/googletest/googletest/include)

add_executable(TPmedev ${SRC_FILES} ${SRC_MAIN})
add_executable(run_tests tests/gtests.cpp ${GTESTS} ${SRC_FILES})

target_link_libraries(TPmedev ${OPENGL_LIBRARIES} ${GLUT_LIBRARY})

target_link_libraries(run_tests ${OPENGL_LIBRARIES} ${GLUT_LIBRARY} ${CMAKE_SOURCE_DIR}/build_gtest/lib/libgtest.a pthread)

if(UNIX)
   target_link_libraries(run_tests pthread)
endif(UNIX)
