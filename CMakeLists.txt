cmake_minimum_required(VERSION 3.0.0)
project(leetcode VERSION 0.1.0 LANGUAGES C CXX)

add_subdirectory("Find Eventual Safe States")
add_subdirectory("LRU Cache")
add_subdirectory("Roman to Integer")
add_subdirectory("Move Zeroes")

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
