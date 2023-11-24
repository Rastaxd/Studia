#include <stdio.h>
#include "min_value.h"
double min(double a, double b);

double min(double a, double b){

    if (a < b){
        return a;
    } else if ( a > b){
        return b;
    }else{
        return a;
    }
}

int main() {
    double a,b;
    printf("Podaj dwie liczby A i B:");
    scanf("%lf",&a);
    scanf("%lf",&b);
    double result = min(a,b);
    printf("Najmniejsza liczba to: %.1lf", result);


    return 0;
}
