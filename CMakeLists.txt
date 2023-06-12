cmake_minimum_required(VERSION 3.21)
project(fastProject)

set(CMAKE_CXX_STANDARD 14)

add_executable(fastProject main.cpp Dice.cpp Dice.h Throw.cpp Throw.h Calculator.cpp Calculator.h CsvBuilder.cpp CsvBuilder.h)
add_subdirectory(Google_tests)
