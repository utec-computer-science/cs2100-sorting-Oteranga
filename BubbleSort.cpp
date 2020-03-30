//
// Created by Alejandro  Otero on 2020-03-30.
//

#include "sorts.h"

void sorts::BubbleSort() {
    for (int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(values[j]>values[j+1])
                swap(values[j],values[j+1]);
        }
    }
}