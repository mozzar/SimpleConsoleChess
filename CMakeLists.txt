cmake_minimum_required(VERSION 3.21)
project(SimpleConsoleChess)

set(CMAKE_CXX_STANDARD 14)

add_executable(SimpleConsoleChess main.cpp Board.cpp Board.h)
