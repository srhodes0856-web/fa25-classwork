cmake_minimum_required(VERSION 4.0)
project(fa25_classwork CXX)

set(CMAKE_CXX_STANDARD 14)

# Build two independent executables so their main() functions don't collide
add_executable(queue_demo ../ArrayQueue.cpp)
add_executable(stack_demo ../ArrayStack.cpp)
