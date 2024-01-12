//
// Created by jakub on 09.01.2024.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void sklej(char *wsk1,char *wsk2,char buildedWord[200]);

int main(){
    char firstWord[100];
    char secondWord[100];
    char buildedWord[200];

    char *indicator1 = firstWord;
    char *indicator2 = secondWord;

    printf("Podaj pierwszy lancuch: ");
    fgets(firstWord,sizeof(firstWord),stdin);

    printf("Podaj drugi lancuch: ");
    fgets(secondWord,sizeof (secondWord),stdin);
    sklej(indicator1,indicator2,buildedWord);

    printf("Zbudowane slowo:\n %s",buildedWord);
    return 0;

}

void sklej(char *wsk1,char *wsk2, char buildedWord[200]){
    int i = 0;
    while(wsk1[i] != '\0'){
        buildedWord[i] = wsk1[i];
        i++;
    }

    int j = 0;
    while(wsk2[j] != '\0'){
        buildedWord[i + j] = wsk2[j];
        j++;
    }

}
