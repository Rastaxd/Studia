#include <stdio.h>

int main() {
    int userLine, digit = 1;
    printf("Podaj liczbe wierszy:");
    scanf("%d",&userLine);
    for (int i = 1; i <= userLine; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ",digit);
            digit++;
        }
        printf("\n");
    }
}
