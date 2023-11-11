#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
        // Inicjalizacja generatora liczb pseudolosow   ych
        srand(time(NULL));

        int liczba;
        int proba = 0;

        do {
            liczba = rand() % 6 + 1 ;
            proba++;
            printf("Proba %d: Wylosowana liczba: %d\n", proba, liczba);
        } while (liczba != 6);

        printf("Trafileś '6' po %d probach!\n", proba);

        return 0;
}