#include <stdio.h>
#define ODSTEP ' '

int main(void){
    int a = 0,b = 0;
    char ch;
    ch = getchar();

    while (ch !='\n'){
        a++;
        ch = getchar();
        if(ch == ODSTEP){
            ++b;
        }
    }
    b+=1;
    printf("Liczba znakow wynosi %d,slow %d",a,b);
}