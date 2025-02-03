cmake_minimum_required(VERSION 3.30)
project(cmi C)

set(CMAKE_C_STANDARD 23)

include_directories(include)

add_library(cmi STATIC
        src/hashmap.c
        include/hashmap.h)
