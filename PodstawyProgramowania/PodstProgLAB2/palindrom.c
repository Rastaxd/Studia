#include <stdio.h>
char *first = "kajak";
char pali[50]; //tutaj bedziemy przechowywac odwaracany wyraz
int main()
{
    char *original_first = first; // zapisyanie oryginalnego wyrazu
    int i = 0;
    int j = 0;
    while(*first != '\0')
        {
            i++;
            first++;
        }// zliczenie dlugosci wyrazu
    first--; //cofniecie o jeden 
    while(i > 0)
        {
            pali[j] = *first;
            first--;
            i--;
            j++;
        }//odwrocenie wyrazu i zapisanie go w tablicy
    pali[j] = '\0'; //znak konca ciagu 
    first = original_first; // przywrocenie oryginalnego wskaznika
    char *jeden = pali;// nowe zmienne do porównania
    char *dwa = first;
    while (*jeden != '\0') // algorytm sprawdzajacy czy
    {// oba wyrazy sa identycze
        if (*jeden != *dwa) 
        {
            printf("Wyraz nie jest palindromem.\n");
            return 1;
        }//jesli nie, wyskoczy wiadomosc i blad, ktory przerwie petle
        jeden++;
        dwa++;
    }
    printf("Wyraz jest palindromem");
    return 0;
}
