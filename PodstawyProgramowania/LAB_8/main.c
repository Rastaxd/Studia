#include <stdio.h>

int main() {
    int a;

    printf("Ile osob chcesz podac?");
    scanf("%d",&a );

    struct Zbiorka {
        char name[20];
        char group[20];
        char donation[20];
    };

    struct Zbiorka charity[a];
    struct Zbiorka *wsk; // do wypisania donejtorow

    for (int i = 0; i < a; i++) {
        printf("Podaj dane uzytkownika numer %d: ",i + 1);

        printf("Podaj imie: ");
        scanf("%s",&charity[i].name);

        printf("Podaj grupe: ");
        scanf("%s",&charity[i].group);

        printf("Podaj kwote: ");
        scanf("%s",&charity[i].donation);

    }
    for (int i = 0; i < a; i++) {
        printf("Osoba nr %d \n",i + 1);
        printf("Imie: %s \n",charity[i].name);
        printf("Grupa: %s \n",charity[i].group);
        printf("Kwota: %s \n",charity[i].donation);
    }
}
