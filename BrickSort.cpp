//
// Created by Alejandro  Otero on 2020-04-05.
//

#include "sorts.h"

void sorts::BrickSort() {
    int sorted= false;

    while (!sorted){
        sorted=true;
        for(int i=1;i<=size-2;i+=2){
            if(values[i]>values[i+1]){
                swap(values[i],values[i+1]);
                sorted= false;
            }
        }
        for (int i=0;i<=size-2;i+=2) {
            if(values[i]>values[i+1]){
                swap(values[i],values[i+1]);
                sorted=false;
            }
        }
    }
}