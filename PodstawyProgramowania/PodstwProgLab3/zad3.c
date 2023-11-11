#include <stdio.h>

int main(){
    int n = 255,i = 32;
    while (i <= n){
        printf("%c",i);
        i++;
        if (i % 16 == 0){
            printf("\n");
        }
    }
}