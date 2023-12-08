#include <stdio.h>
int sum = 0,n = 30, i, j;
int main()
{
    for(j = 2; j <= n; j++){
        sum = 0;
        for(int i = 1; i <= j - 1; i++)
        {
            if(j % i == 0){
                sum += i;
            }

        }
        if(sum == j){
            printf("%d jest doskonala\n", j);
        }

    }
}


