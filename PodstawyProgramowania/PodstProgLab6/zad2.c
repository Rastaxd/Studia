//
// Created by jakub on 24.11.2023.
//
#include <stdio.h>

int main(){
    float a,b,c,d,e,f,g,h,i;
    printf("Podaj dane do macierzy: ");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    scanf("%f",&d);
    scanf("%f",&e);
    scanf("%f",&f);
    scanf("%f",&g);
    scanf("%f",&h);
    scanf("%f",&i);

    float macierz[3][3] = {
            {a,b,c},
            {d,e,f},
            {g,h,i},
    };

    for (int j = 0; j <= 2; ++j) {
        for (int k = 0; k <= 2 ; ++k) {
            printf("%.1f ",macierz[j][k]);

        }
        printf("\n");
    }
}

