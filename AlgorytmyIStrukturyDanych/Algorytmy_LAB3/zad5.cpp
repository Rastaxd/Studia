#include <iostream>

using namespace std;

int getDec (char n); //tworzenie prototypu funkcji zwracającej cyfrę w systemie dziesiętnym

int main() {
    string n; //deklaracja zmiennej string: n — liczba heksadecymalna
    int res = 0,pow = 1; //deklaracja zmiennych typu int: res — wynik dodawania obliczonych potęg, pow — wykłądnik potęgi
    cin>>n; //wpisywanie liczby heksadecymalnej przez użytkownika
    for(int i = n.length()-1;i>=0;i--) //tworzenie pętli, która będzie zmieniałą pozycje od prawej do lewej
    {
        res+= (getDec(n[i])%16)*pow; //dodaj do wyniku rezultat funkcji getDec pomnożone przez potęgę o podstawie 16
        pow*=16; //zwiększenie potęgi o wykładnik
    }
    cout<<res<<endl; //wypisanie liczby dziesiętnej
    return 0;
}

int getDec(char n) //funkcja, która będzie zwracała cyfrę w zapisie dziesiętnym
{
    switch(n)
    {
        case 'A':
            return 10; //w przypadku kiedy będzie to 'A' to zwróć reprezentację dziesiętna, czyli 10
        case 'B':
            return 11; //w przypadku kiedy będzie to 'B' to zwróć reprezentację dziesiętna, czyli 11
        case 'C':
            return 12; //w przypadku kiedy będzie to 'C' to zwróć reprezentację dziesiętna, czyli 12
        case 'D':
            return 13; //w przypadku kiedy będzie to 'D' to zwróć reprezentację dziesiętna, czyli 13
        case 'E':
            return 14; //w przypadku kiedy będzie to 'E' to zwróć reprezentację dziesiętna, czyli 14
        case 'F':
            return 15; //w przypadku kiedy będzie to 'F' to zwróć reprezentację dziesiętna, czyli 15
        default:
            int number = n-'0'; //w przypadku kiedy cyfra jest w przedziale od 0 do 9 to zwróć jej kod liczbowy ASCII i odejmij o wartość zero co nam da liczbę w postaci dziesiętnej
            return number; //zwróć reprezentację dziesiętną tej liczby
    }
}