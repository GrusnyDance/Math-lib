cmake_minimum_required(VERSION 3.22)
project(Math_lib C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(Math_lib
        s21_acos.c
        s21_asin.c
        s21_atan.c
        s21_math.h)
