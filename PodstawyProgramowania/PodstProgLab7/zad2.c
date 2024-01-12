#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool znajduje_sie_w(char wantedSymbol, char *wsk);

int main() {
    char userInput[100];
    char *wsk_uInput = userInput;

    printf("Podaj lancuch znakow:");
    fgets(userInput, sizeof(userInput), stdin);

    int arraySize = 0;
    arraySize = strlen(wsk_uInput);


    for (int i = 0; i < arraySize; ++i) {

        char userChoice;
        printf("Podaj znak, ktory chcesz wyszukac: ");
        scanf(" %c", &userChoice);

        if (znajduje_sie_w(userChoice, wsk_uInput)) {
            printf("Prawda \n");
        } else {
            printf("Nieprawda\n");
        }
    }

    return 0;
}

bool znajduje_sie_w(char wantedSymbol, char *wsk) {
    while (*wsk != '\0'){
        if(*wsk == wantedSymbol){
            return true;
        }
        wsk++;
    }
    return false;

}

