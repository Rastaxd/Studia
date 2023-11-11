#include <stdio.h>

int main(){
    const float hours;
    float brutto,netto,tax;
    float addHoursBonus;
    addHoursBonus = 40 * 1.5;
    printf("Podaj liczbe przepracowanych godzin: ");
    scanf("%f",&hours);

    if (hours <= 40){
        brutto = hours * 40;
    } else{
        brutto = 40 * 40 + (hours - 40) * addHoursBonus;
    }
    if (brutto <= 1200){
        tax = 0.15 * brutto;
    }else if (brutto <= 1800){
        tax = 0.15 * 1200 + 0.20 * (brutto - 1200);
    }else {
        tax = 0.15 * 1200 + 0.20 * 600 + 0.25 * (brutto - 1800);
    }
    netto = brutto - tax;
    printf("Brutto: %.1f\n",brutto);
    printf("Podatek: %.1f\n",tax);
    printf("Netto: %.1f\n",netto);

    return 0;
}