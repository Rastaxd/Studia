//
// Created by Kuba on 17.11.2023.
//

#include "codes.h"
#include <stdio.h>
#include <math.h>
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
int greeting(){
    printf("Witaj! Konwersja liczby decymalnej na binarna.");
    printf("Podaj liczbe, ktora chcesz zamienic zamienic na binarna:");
    int n;
    scanf("%d",&n);
    if ( n < 0){
        printf("Liczba niepoprawna :(\n");
        return -1;
    }
    return n;
}


void dec2bin(int n) {
    int binary[32];
    int i = 0;
    do {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    } while (n > 0);
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

void tryg(double n){
    double x = (3.14159 / 180) * n;
    printf("%.3lf\n", sin(x));
    printf("%.3lf\n", cos(x));
    if ( n == 90) {
        printf("Tangens 90 stopni nie istnieje");
    }else {
        printf("%.3lf\n", tan(x));
    }
}




