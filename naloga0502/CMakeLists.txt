cmake_minimum_required(VERSION 3.21)
project(naloga0502)

set(CMAKE_CXX_STANDARD 14)

add_executable(naloga0502 naloga0502.cpp Device.cpp Device.h Light.cpp Light.h SmartHome.cpp SmartHome.h TV.cpp TV.h Phone.cpp Phone.h VentilationSystem.cpp VentilationSystem.h)
