cmake_minimum_required(VERSION 3.13)

include(pico_sdk_import.cmake)

project(test_project C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

pico_sdk_init()

add_executable(hello_world
  main.c
)

pico_enable_stdio_usb(hello_world 1)
pico_add_extra_outputs(hello_world 1)
target_link_libraries(hello_world pico_stdlib)
