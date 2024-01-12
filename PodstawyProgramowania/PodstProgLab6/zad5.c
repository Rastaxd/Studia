//
// Created by jakub on 24.11.2023.
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int arr_one[9];
    float arr_sec[9];
    int *wsk = arr_one;
    float *wsk2 = arr_sec;
    srand(time(NULL));
    for (int i = 0; i <= 9; ++i) {
        wsk[i] = rand() % 100;
    }
    for (int i = 0; i < 9; ++i) {
        float randFloat = (float)rand() / RAND_MAX;
        wsk2[i] = randFloat;
    }
}