#include <stdio.h>

int main(){
    int a,b,c,wybor;
    double wynik;
    printf("Podaj liczbę a :");
    scanf("%d",&a);
    printf("Podaj liczbę b :");
    scanf("%d",&b);
    printf("Podaj liczbę h (do obliczenia pola trojkata) :");
    scanf("%d",&c);
    printf("Wybierz, co chcesz obliczyć:\n 1.Pole kwadratu\n 2.Pole prostokąta\n 3.Pole trojkata");
    scanf("%d",&wybor);

    if (wybor == 1){
        wynik = a*a;
        printf("Pole kwadratu o tych wymiarach wynosi %d ",wynik);
    }
    else if (wybor == 2){
        wynik = a * b;
        printf("Pole prostokatu o tych wymiarach wynosi %d ",wynik);
    }
    else if (wybor == 3){
        wynik = (a * c)/2;
        printf("Pole trojkata wynosi %lf",wynik);
    }
    else{
        printf("Wybierz prawidlawa opcje.");
    }

}