#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int r;
    int x;
    srand(time(NULL));
    r = (rand()%15+1);
    for(int i = 1; x != r; i++)
    {
        printf("Podaj swoj wybor\n");
        scanf("%d", &x);
        if(x < r){
            printf("more!\n");
        }
        else if(x == r){
            printf("Succes! %d\n", i);
        }
        else{
            printf("less!\n");
        }
    }
    return 0;
}

