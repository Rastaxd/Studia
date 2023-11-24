#include <stdio.h>

int main() {
    int tab[4];
    for (int i = 0 ;  i <= 4 ; i++ ){
        scanf("%d",&tab[i]);
    }
    for (int i = 4; i >= 0; i--){
        printf("%d",tab[i]);
    }
}
