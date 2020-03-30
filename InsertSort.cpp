//
// Created by Alejandro  Otero on 2020-03-30.
//

#include "sorts.h"

void sorts::InsertSort() {

    for(int i=1; i<size;i++){
        for(int j=i;j>0;j--){
            if(values[j]<values[j-1]){
                swap(values[j],values[j-1]);
            }
        }
    }

}