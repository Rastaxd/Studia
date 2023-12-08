#include <stdio.h>
float n; //ile razy wykonac petle
float num = 0; //suma iloczynow
float den = 0; //suma wag
float x;
float w;
int main()
{
    printf("Podaj ilość liczb do obliczenia sredniej wazonej");
    scanf("%f", &n);
    for(; n > 0; n--)
        {
            printf("Podaj wartosci x i w: ");
            scanf("%f %f", &x, &w); //x wartosc a w waga
            num += x * w; //dodanie iloczynu do sumy ioczynow
            den += w; //dodawanie wagi do sumy wag
        }
    float score = num / den; //srednia artytmetyczna
    printf("%f", score);
    return 0;
}