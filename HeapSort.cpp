//
// Created by Alejandro  Otero on 2020-03-30.
//

#include "sorts.h"

void heapify(int array[],int n,int i){
    int biggest=i;
    int left=2*i+1;
    int right=2*i+2;

    if(left<n and array[left]>array[biggest]){
        biggest=left;
    }

    if(right<n and array[right]>array[biggest]){
        biggest=right;
    }

    if(biggest!=i){
        swap(array[i],array[biggest]);
        heapify(array,n,biggest);
    }
}

void heapsort(int array[],int n){
    //n es usado como size
    for(int i=n/2-1;i>=0;i--){
        heapify(array,n,i);
    }
    for(int i=n-1;i>=0;i--){
        swap(array[0],array[i]);
        heapify(array,i,0);
    }
}

void sorts::HeapSort() {
    heapsort(values,size);
}