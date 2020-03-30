//
// Created by Alejandro  Otero on 2020-03-30.
//

#include "sorts.h"

int sort(int array[],int min,int max){
    int pivot=array[max];
    int i=(min-1);

    for(int j=min;j<=max-1;j++){
        if(array[j]<array[max]){
            i++;
            swap(array[i],array[j]);
        }
    }
    swap(array[i+1],array[max]);
    return(i+1);
}

void quicksort(int array[],int min,int max){
    if(min<max){
        int index=sort(array,min,max);
        quicksort(array,min,index-1);
        quicksort(array,index+1,max);
    }
}

void sorts::QuickSort() {
    quicksort(values,0,size-1);
}