cmake_minimum_required(VERSION 3.3)
project(test_build)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(BUILD_1 zadanie_4_4)
set(SOURCE_FILES_1 zestaw_4/zadanie_4_4.cpp)
add_executable(${BUILD_1} ${SOURCE_FILES_1})



set(BUILD_2 zadanie_4_5)
set(SOURCE_FILES_2 zestaw_4/zadanie_4_5.cpp)
add_executable(${BUILD_2} ${SOURCE_FILES_2})



set(BUILD_3 zadanie_6_1)
set(SOURCE_FILES_3 zestaw_6/zad_6_1.cpp)
add_executable(${BUILD_3} ${SOURCE_FILES_3})


set(BUILD_4 zadanie_6_2)
set(SOURCE_FILES_4 zestaw_6/zad_6_2.cpp)
add_executable(${BUILD_4} ${SOURCE_FILES_4})


set(BUILD_5 zadanie_6_3)
set(SOURCE_FILES_5 zestaw_6/zad_6_3.cpp)
add_executable(${BUILD_5} ${SOURCE_FILES_5})


set(BUILD_6 zadanie_6_4)
set(SOURCE_FILES_6 zestaw_6/zad_6_4.cpp)
add_executable(${BUILD_6} ${SOURCE_FILES_6})


set(BUILD_7 zadanie_6_5)
set(SOURCE_FILES_7 zestaw_6/zad_6_5.cpp)
add_executable(${BUILD_7} ${SOURCE_FILES_7})


set(BUILD_8 matrix)
set(SOURCE_FILES_8 matrix/matrix.cpp)
add_executable(${BUILD_8} ${SOURCE_FILES_8})


set(BUILD_9 kolejki)
set(SOURCE_FILES_9 kolejki/kolejki.cpp)
add_executable(${BUILD_9} ${SOURCE_FILES_9})


set(BUILD_10 cechy)
set(SOURCE_FILES_10 zestaw_7/cechy_1.cpp)
add_executable(${BUILD_10} ${SOURCE_FILES_10})


set(BUILD_11 suma_ciagu)
set(SOURCE_FILES_11 zestaw_8/suma_ciagu.cpp)
add_executable(${BUILD_11} ${SOURCE_FILES_11})