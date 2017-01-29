cmake_minimum_required(VERSION 3.6)
project(CPrimerPlus6E)

set(CMAKE_C_STANDARD 99)
set(SOURCE_FILES    Ch01/listing1.c)
set(SOURCE_FILE_LISTING2    Ch01/listing2.c)
add_executable(listing2 ${SOURCE_FILE_LISTING2})
add_executable(listing1 ${SOURCE_FILES})
