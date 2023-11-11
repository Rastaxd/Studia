#include <stdio.h>

int main(){
    int a;
    printf("Podaj liczbe: ");
    scanf("%d",&a);
    if(a < 0){
        a *= -1;
        printf("Wartosc bezwzgledna wynosi %d",a);
    }
    else{
        printf("Wartosc bezwzgledna wynosi %d",a);
    }
}