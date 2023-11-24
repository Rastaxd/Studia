//
// Created by jakub on 24.11.2023.
//

#include <stdio.h>

void addNum(int *a, int *b, int *suma){
    *suma = *a + *b;
}

int main(){
    int l1, l2, result;

    printf("Podaj pierwsza liczbe: ");
    scanf("%d",&l1);

    printf("Podaj pierwsza druga: ");
    scanf("%d",&l2);

    addNum(&l1,&l2,&result);

    printf("Wynik to: %d",result);
}



