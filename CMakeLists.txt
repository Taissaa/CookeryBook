cmake_minimum_required(VERSION 3.24)
project(CookeryBook)

set(CMAKE_CXX_STANDARD 17)

add_executable(CookeryBook main.cpp Recipe.h Book.h)
