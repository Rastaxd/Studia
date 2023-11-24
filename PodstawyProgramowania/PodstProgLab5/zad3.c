//
// Created by Kuba on 17.11.2023.
//

#include <stdio.h>
#include "codes.h"
int greeting (int n);
void dec2bin_arr(int n);


int main() {
    int n = 0;
    greeting(n);
    dec2bin_arr(n);
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

int greeting (int n){
    printf("Konwerter liczby dziesietnej na binarna. Ilu znakowa chcesz tablice?:");
    int f;
    scanf("%d", &f);
    --f;
    int tab[f];
    for (int i = 0; i < f++; i++){
        scanf("%d",tab[i]);
    }
    return n;
}

void dec2bin_arr(int n) {
    int i = 0;
    int binary[8];
    while (n > 0) {
        binary[i] = n % 2;
        n /= 2;
        i++;
    }
}

