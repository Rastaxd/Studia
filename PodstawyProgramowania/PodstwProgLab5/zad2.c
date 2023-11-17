#include <stdio.h>
#include "codes.h"

int main() {
    int liczba;
    scanf("%d",&liczba);
    int result_rek = silnia_rek(liczba);
    int result_loop = silnia_loop(liczba);
    printf("Silnia liczby %d wynosi %d\n", liczba, result_rek);
    printf("Silnia liczby %d wynosi %d\n", liczba, result_loop);

    return 0;
}

