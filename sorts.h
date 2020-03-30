//
// Created by Alejandro  Otero on 2020-03-30.
//

#ifndef LABORATORIO_1_SORTS_H
#define LABORATORIO_1_SORTS_H

class sorts{
private:
    int *values;
    size_t size;
public:
    sorts(int *_values, size_t _size):values(_values),size(_size);
    void InsertSort(int *_values, size_t _size);
    void SelectionSort(int *_values, size_t _size);
    void BubbleSort(int *_values, size_t _size);
    void MergeSort(int *_values, size_t _size);
    void HeapSort(int *_values, size_t _size);
    void QuickSort(int *_values, size_ti _size);

};

#endif //LABORATORIO_1_SORTS_H
