cmake_minimum_required(VERSION 3.24)
project(caesar_cipher)

set(CMAKE_CXX_STANDARD 14)

add_executable(caesar_cipher main.cpp caesar_cipher.cpp caesar_cipher.h)
