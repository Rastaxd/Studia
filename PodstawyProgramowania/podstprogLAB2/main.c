#include <stdio.h>

int main() {
    int a, b, c, d, plus, minus;
    printf("Podaj liczbe A: ");
    scanf("%d", &a);
    printf("Podaj liczbe B: ");
    scanf("%d", &b);
    printf("Podaj liczbe C: ");
    scanf("%d", &c);
    printf("Podaj liczbe D: ");
    scanf("%d", &d);

    if ( a > 0) {
        plus++;
    }
    else{
            minus++;
        }
    if ( b > 0) {
        plus++;
    }
    else {
        minus++;
    }
    if (c > 0){
        plus++;
    }
    else{
        minus++;
    }
    if (d > 0){
        plus++;
    }
    else{
        minus++;
    }
    printf("Liczb dodatkich jest %d, ujemnych jest %d",plus,minus);
}