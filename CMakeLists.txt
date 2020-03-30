cmake_minimum_required(VERSION 3.13)
project(Laboratorio_1)

set(CMAKE_CXX_STANDARD 17)

add_executable(cs2100-sorting-Oteranga main.cpp BubbleSort.cpp HeapSort.cpp InsertSort.cpp
        MergeSort.cpp print.cpp QuickSort.cpp SelectionSort.cpp)