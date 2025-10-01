cmake_minimum_required(VERSION 4.0)
project(_idea)

set(CMAKE_CXX_STANDARD 14)

add_executable(_idea
        fa25-classwork.iml
        modules.xml
        vcs.xml
        ../ArrayQueue.cpp
        ../ArrayStack.cpp)
