#include <stdio.h>
#include <ctype.h>

void zlicz_wystapienia(char* tekst, int* litery,int* cyfry) {
    while (*tekst != '\0') {
        if(islower(*tekst)) {
            (*litery)++;
        } else if(isdigit(*tekst)) {
            (*cyfry)++;
        }
        tekst++;
    }
}

void zlicz_Znaki(char* tekst,const char* znak,int* wystapienia){
    while(*tekst != '\0'){
        if(*tekst == *znak) {
            (*wystapienia)++;
        }
        tekst++;
    }
}

int main() {
    char tekst[50] = "155PolitechnikaBydgoskaSniadeckich155";
    int litery=0,cyfry=0,wystapienia=0;
    char znak;
    puts("Podaj znak do sprawdzenia: ");
    scanf("%c",&znak);
    zlicz_wystapienia(tekst,&litery,&cyfry);
    zlicz_Znaki(tekst,&znak,&wystapienia);
    printf("Liczba malych liter: %d\nLiczba cyfr: %d",litery,cyfry);
    printf("\nLiczba znakow: %d",wystapienia);
    return 0;
}