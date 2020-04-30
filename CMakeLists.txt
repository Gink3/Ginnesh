cmake_minimum_required(VERSION 3.10)
project(Ginnesh)

include_directories(include)
file(GLOB SOURCES "src/*.cpp")

find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIR})

add_executable(Ginnesh ${SOURCES})
target_link_libraries(Ginnesh ${CURSES_LIBRARIES})
