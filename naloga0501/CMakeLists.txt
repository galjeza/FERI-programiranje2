cmake_minimum_required(VERSION 3.21)
project(naloga_0501)

set(CMAKE_CXX_STANDARD 14)

add_executable(naloga_0501 naloga0501.cpp Artwork.cpp Artwork.h Artist.cpp Artist.h Date.cpp Date.h Gallery.cpp Gallery.h Painting.cpp Painting.h Sculpture.cpp Sculpture.h)
