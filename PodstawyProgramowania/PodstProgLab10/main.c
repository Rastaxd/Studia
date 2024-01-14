#include <stdio.h>

int main() {
   unsigned int userInput;

    printf("Podaj liczbe calkowita\n");
    scanf("%d",&userInput);
    printf("%d \n",userInput >> 4) & 1;
    printf("%d",userInput >> 7) & 1;

    return 0;
}
