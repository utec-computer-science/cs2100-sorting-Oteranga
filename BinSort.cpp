//
// Created by Alejandro  Otero on 2020-04-02.
//

#include "sorts.h"
#include <vector>

void sorts::BinSort() {

    vector<int> arr[size];

    for(int i=0;i<size;i++){
        int bi=size*values[i];
        arr[bi].push_back(values[i]);
    }
    for(int i=0; i<size; i++){
        sort(arr[i].begin(),arr[i].end());
    }

    int index=0;
    for(int i=0;i<size;i++){
        for(int j=0;j<arr[i].size();j++){
            values[index++]=arr[i][j];
        }
    }
}