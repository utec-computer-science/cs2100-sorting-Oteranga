//
// Created by Alejandro  Otero on 2020-03-30.
//

#include "sorts.h"

void sorts::SelectionSort() {
    for (int i=0; i<size-1; i++){
        int smallest=i;
        for (int j=i+1; j<size; j++){
            if(values[smallest]>values[j])
                smallest=j;
        }
        swap(values[smallest],values[i]);
    }
}
