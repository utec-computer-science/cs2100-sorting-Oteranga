#include <iostream>
#include "sorts.h"
using namespace std;

int main(int, char*[]){

    size_t length;
    int *ptr;
    srand((unsigned)time(NULL));

    cout<<"Ingresa tamaño del arreglo: ";
    cin>>length;

    int elements[length];
    ptr=elements;

    for(int i=0; i<length; i++){
        elements[i]=rand()%10+1;
    }

    sorts *ejemplo= new sorts (ptr,length);
    //ejemplo->InsertSort();
    //ejemplo->SelectionSort();
    //ejemplo->BubbleSort();
    //ejemplo->MergeSort();
    //ejemplo->HeapSort();
    //ejemplo->QuickSort();
    ejemplo->ShellSort();
    ejemplo->print();

    return 1;
}