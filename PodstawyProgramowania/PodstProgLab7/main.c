#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void skracaj(char *tab, int size);

int main() {
    char user_Info[100];
    char *wsk_str = user_Info;
    char user_Rec[10];
    int expectedSize;

    puts("Wprowadz lancuch znakow:");
    fgets(user_Info, sizeof(user_Info), stdin);

    puts("Podaj dlugosc, do jakiej chcesz skrocic lancuch znakow:");
    fgets(user_Rec, sizeof(user_Rec), stdin);

    //zamiana chara na int (ASCII TO INTEGER)
    expectedSize = atoi(user_Rec);

    skracaj(wsk_str, expectedSize);

    printf("Po skroceniu: %s\n", user_Info);

    return 0;
}

void skracaj(char *tab, int size) {
    int length = strlen(tab);
    if (length > 0 && tab[length - 1] == '\n') {
        tab[length - 1] = '\0';
    }

    if (strlen(tab) > size) {
        tab[size] = '\0';
    }
}
