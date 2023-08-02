cmake_minimum_required(VERSION 3.0.0)
project(leetcode VERSION 0.1.0 LANGUAGES C CXX)

add_subdirectory("Find Eventual Safe States")
add_subdirectory("LRU Cache")
add_subdirectory("Roman to Integer")
add_subdirectory("Move Zeroes")
add_subdirectory("Sqrt(x)")
add_subdirectory("Reverse Linked List")
add_subdirectory("Longest Common Prefix")
add_subdirectory("Valid Parentheses")

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
