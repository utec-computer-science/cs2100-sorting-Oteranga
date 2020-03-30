//
// Created by Alejandro  Otero on 2020-03-30.
//

#include "sorts.h"

void merge(int array[],int left,int half,int right){
    int i,j,k;
    int n1=half-left+1;
    int n2=right-half;

    int l[n1],r[n2];

    for(i=0; i<n1;i++){
        l[i]=array[left+i];
    }
    for(j=0; j<n2;j++){
        r[j]=array[half+1+j];
    }

    i=0;
    j=0;
    k=left;

    while(i<n1 and j<n2){
        if(l[i]<=r[j]){
            array[k]=l[i];
            i++;
        }
        else{
            array[k]=r[j];
            j++;
        }
        k++;
    }

    while(i<n1){
        array[k]=l[i];
        i++;
        k++;
    }

    while(j<n2){
        array[k]=r[j];
        j++;
        k++;
    }
}

void divide(int array[], int left, int right) {
    if (left<right){
        int half=left+(right-left)/2;
        divide(array,left,half);
        divide(array,half+1,right);
        merge(array,left,half,right);
    }
}

void sorts::MergeSort(){
    divide(values,0,size-1);
}

