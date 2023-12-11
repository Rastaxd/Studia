//
// Created by jakub on 08.12.2023.
//

#include <stdio.h>
#include <stdbool.h>
#define ODSTEP ' '

int main(){

    struct rejsy{
        int seatNum;
        char name[15];
        char surName[15];
        char seatStatus;
    };

    int a;
    struct rejsy seats[a];
    printf("Dostepne siedzenia:");
    for (int i = 0; i <= 15 ; i++) {
        if(seats[i].name != ODSTEP) {
            printf("%d. Siedzenie zajete");
        }
        else {

            printf("%d. Siedzenie wolne");
        }
    }
}
