#include <stdio.h>

// Deklaracja funkcji silnia
int silnia(int n);

int main() {
    int liczba;
    scanf("%d",&liczba);
    int wynik = silnia(liczba);
    printf("Silnia liczby %d wynosi %d\n", liczba, wynik);

    return 0;
}

//funkcja na silnie
int silnia(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * silnia(n - 1);
    }
}

//petla na silnie
/*
 *  for (int i = 2; i <= n; ++i) {
            wynik *= i;
        }
 */