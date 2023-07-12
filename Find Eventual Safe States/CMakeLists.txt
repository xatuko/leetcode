cmake_minimum_required(VERSION 3.0.0)
project(task802 VERSION 0.1.0 LANGUAGES C CXX)

add_executable(task802 main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})