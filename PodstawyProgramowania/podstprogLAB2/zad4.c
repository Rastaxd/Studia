#include <stdio.h>

int main() {
    double a, b,wynik;
    char znak;
    printf("Podaj liczbę a :");
    scanf("%lf",&a);
    printf("Podaj liczbę b :");
    scanf("%lf",&b);
    printf("Podaj znak: ");
    scanf(" %c",&znak);

    if (znak == '+') {
        wynik = a + b;
        printf("Wynik wynosi %.3lf", wynik);
    } else if (znak == '-') {
        wynik = a - b;
        printf("Wynik wynosi %.3lf", wynik);
    } else if (znak == '*') {
            wynik = a * b;
            printf("Wynik wynosi %.3lf", wynik);
    }else if (znak == '/'){
        wynik = a/b;
        printf("Wynik wynosi %.3lf",wynik);
    }else{
        printf("Wybierz prawidlowy symbol.");
    }
}
