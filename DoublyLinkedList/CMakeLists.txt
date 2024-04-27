cmake_minimum_required(VERSION 3.23)
project(DoublyLinkedList)

set(CMAKE_CXX_STANDARD 14)

add_executable(DoublyLinkedList main.cpp Node.h Node.cpp DLL.cpp DLL.h)
