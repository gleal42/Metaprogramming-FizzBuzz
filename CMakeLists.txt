cmake_minimum_required(VERSION 3.10)

project(fizzbuzz)

add_compile_options(-ftemplate-depth=100000 -O2)

add_executable(fizzbuzztags FizzBuzzTags.cpp)
add_executable(fizzbuzz FizzBuzzmain.cpp)