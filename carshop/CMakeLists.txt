cmake_minimum_required(VERSION 3.15)
project(carshop C)

set(CMAKE_C_STANDARD 99)

add_executable(carshop main.c customer.h customer.c)