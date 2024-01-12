#include <stdio.h>
#include <stdbool.h>

#define max 100
struct rejsPoBrdzie {
    int ID;
    char name[max];
    char username[max];
    bool orBusy;
};

void freePlaces(struct rejsPoBrdzie *places, int sizeOfStruct);

void whatFreePlaces(struct rejsPoBrdzie *places, int sizeOfStruct);

void reserveAPlace(struct rejsPoBrdzie *places);

void showReservedPlaces(struct rejsPoBrdzie *places, int sizeOfStruct);


int main() {
    int endOption = 0;
    struct rejsPoBrdzie places[15];
    struct rejsPoBrdzie *ptrPlaces = &places[0];
    int sizeOfStruct = sizeof(places) / sizeof(places[0]);

    for (int i = 0; i < sizeOfStruct; i++) {
        places[i].ID = i + 1;
        places[i].orBusy = false;
    }

    while (endOption != 5) {
        int userOption;

        printf("\n Uzytkowniku wybierz opcje: \n"
               "1. Pokaz, ile jest wolnych miejsc\n"
               "2. Pokaz, ktore miejsca sa wolne\n"
               "3. Zarezerwuj miejsce\n"
               "4. Pokaz wszystkie zarezerwowane miejsca, wraz z danymi klienta dokonujacego rezerwacje\n"
               "5. Koniec\n");
        scanf("%d", &userOption);

        switch (userOption) {
            case 1:
                freePlaces(ptrPlaces, sizeOfStruct);
                break;
            case 2:
                whatFreePlaces(ptrPlaces, sizeOfStruct);
                break;
            case 3:
                reserveAPlace(ptrPlaces);
                break;
            case 4:
                showReservedPlaces(ptrPlaces, sizeOfStruct);
                break;
            default:
                endOption = userOption;
                break;
        }
    }
    printf("Dziekujemy za skorzystanie z programu, zapraszamy ponownie.");
    return 0;
}

void freePlaces(struct rejsPoBrdzie *places, int sizeOfStruct) {
    int count = 0;
    for (int i = 0; i < sizeOfStruct; i++) {
        if (!places[i].orBusy) {
            count++;
        }
    }
    printf("Wolnych miejsc jest: %d\n", count);
}

void whatFreePlaces(struct rejsPoBrdzie *places, int sizeOfStruct) {
    for (int i = 0; i < sizeOfStruct; i++) {
        if (!places[i].orBusy) {
            printf("Wolne miejsca : %d \t", i + 1);
        }
    }
    printf("\n");
}

void reserveAPlace(struct rejsPoBrdzie *places) {
    int userPlace = 0;
    printf("Prosze wybrac miejsce: ");
    scanf("%d", &userPlace);

    if (places[userPlace - 1].orBusy) {
        printf("Wybrano zarezerwowane miejsce! \n");
    } else {
        printf("Podaj imie:");
        scanf("%s", &places[userPlace - 1].name);
        printf("Podaj nazwisko: ");
        scanf("%s", &places[userPlace - 1].username);
        places[userPlace - 1].orBusy = true;
    }
}

void showReservedPlaces(struct rejsPoBrdzie *places, int sizeOfStruct) {
    for (int i = 0; i < sizeOfStruct; i++) {
        if (places[i].orBusy) {
            printf("\n");
            printf("|ID Miejsca: %d| ", places[i].ID);
            printf("|Imie osoby: %s| ", places[i].name);
            printf("|Nazwisko osoby: %s| ", places[i].username);
        }
    }
    printf("\n");
}