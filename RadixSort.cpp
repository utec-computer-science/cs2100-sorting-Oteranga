//
// Created by Alejandro  Otero on 2020-04-04.
//

#include "sorts.h"

int GetMax(int arr[],int n){
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

void Sort(int arr[],int n, int pos){
    int result[n];
    int i;
    int count[10]={0};

    for(i=0;i<n;i++){
        count[(arr[i]/pos)%10]++;
    }

    for(i=1;i<10;i++){
        count[i]+=count[i-1];
    }

    for(i=n-1;i>=0;i--){
        result[count[(arr[i]/pos)%10]-1]=arr[i];
        count[(arr[i]/pos)%10]--;
    }

    for(i=0;i<n;i++){
        arr[i]=result[i];
    }
}

void sorts::RadixSort() {
    int max=GetMax(values,size);

    for(int i=1; max/i>0;i*=10){
        Sort(values,size,i);
    }
}