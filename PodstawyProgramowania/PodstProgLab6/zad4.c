//
// Created by jakub on 24.11.2023.
//

#include <stdio.h>
#include <stdbool.h>


void bubbleSort(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}


    void printArr(int arr[], int size) {
        int i;
        for (i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
    }


int main(){
    int arr[] = { 64, 34, 25, 12, 22, 11, 90,60,45,50 };
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    printf("Posortowana tablica \n");
    printArr(arr, n);
    return 0;

}