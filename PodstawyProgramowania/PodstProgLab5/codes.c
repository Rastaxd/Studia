//
// Created by Kuba on 17.11.2023.
//

#include "codes.h"
#include <stdio.h>
double min_value(double a, double b){

    if (a < b){
        return a;
    } else if ( a > b){
        return b;
    }else{
        return a;
    }
}

//funckje na silnie
int silnia_rek(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * silnia_rek(n - 1);
    }
}

int silnia_loop(int n) {
    int wynik = 1;
    for (int i = 1; i <= n; ++i) {
        wynik *= i;
    }
    return wynik;
}
int greeting(int n){
    printf("Witaj! Konwersja liczby decymalnej na binarna.");
    printf("Podaj liczbe, ktora chcesz zamienic zamienic na binarna:");
    scanf("%d",&n);


}

int verifyDec(int n){
    if (n > 0){
        printf("Liczba jest prawidłowa");
    }
}


