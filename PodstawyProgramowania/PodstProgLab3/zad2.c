#include <stdio.h>

int main() {
    int n, i = 1;

    printf("Podaj liczbe n do ktorej chcesz zobaczyc liczby nie parzyste:");
    scanf("%d", &n);
    while (i <= n) {
       if(i % 2 == 1){
           printf("%d",i);
       }
        i++;
    }
}