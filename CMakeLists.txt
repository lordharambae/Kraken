cmake_minimum_required(VERSION 3.11)
project(Kraken)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

set(SOURCE_FILES src/kraken)
add_library(Kraken STATIC ${SOURCE_FILES})
