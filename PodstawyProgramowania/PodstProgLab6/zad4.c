//
// Created by jakub on 24.11.2023.
//

#include <stdio.h>
#include <stdbool.h>

void swap(int *l1, int *l2){
    int temp = *l1;
    *l1 = *l2;
    *l2 = temp;
};

void bubbleSort(int arr[],int n) {
    int i, j;
    bool swapped;

    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }

        if (swapped = false) {
            break;

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
    printf("Sorted array: \n");
    printArr(arr, n);
    return 0;

}