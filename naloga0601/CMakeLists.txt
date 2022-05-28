cmake_minimum_required(VERSION 3.21)
project(naloga0601)

set(CMAKE_CXX_STANDARD 14)

add_executable(naloga0601 naloga0601.cpp ColorCode.h PrintUtility.cpp PrintUtility.h Shape2D.cpp Shape2D.h Rectangle.cpp Rectangle.h Canvas.cpp Canvas.h Square.cpp Square.h Circle.cpp Circle.h)
