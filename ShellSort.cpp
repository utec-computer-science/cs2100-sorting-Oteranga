//
// Created by Alejandro  Otero on 2020-04-02.
//

#include "sorts.h"

void sorts::ShellSort() {
    for(int gap=size/2;gap>0;gap/=2){
        for(int i=gap;i<size;i++){
            int temp=values[i];
            int j;
            for(j=i;j>=gap && values[j-gap]>temp;j-=gap){
                values[j]=values[j-gap];
            }
            values[j]=temp;
        }
    }
}