#include <stdio.h>
#include "min_value.h"

int main() {
    double a,b;
    printf("Podaj dwie liczby A i B:");
    scanf("%lf",&a);
    scanf("%lf",&b);
    printf("Najwieksza liczba to: %lf",min_value(a,b));
    printf("Najwieksza liczba to: %lf",max_value(a,b));

    return 0;
}
