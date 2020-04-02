//
// Created by Alejandro  Otero on 2020-03-30.
//

#ifndef LABORATORIO_1_SORTS_H
#define LABORATORIO_1_SORTS_H

#include <iostream>

using namespace std;

class sorts{
private:
    int *values;
    size_t size;
public:
    sorts(int *_values, size_t _size):values(_values),size(_size){};
    void InsertSort();
    void SelectionSort();
    void BubbleSort();
    void MergeSort();
    void HeapSort();
    void QuickSort();
    void print();
    //sorts extras
    void ShellSort();
};

#endif //LABORATORIO_1_SORTS_H
