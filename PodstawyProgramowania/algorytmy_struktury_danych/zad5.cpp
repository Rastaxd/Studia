#include <iostream>
using namespace std;

int main (){
    int a;
    cout << "Podaj liczbę: " << endl;
    cin >> a;

    if (a <= 1000){
        cout << "Podana liczba nie jest większa niż 1000" << endl;
    }

    int sum;
    while ( a > 0 ){
        int number = a % 10;
        sum += number;
        a/=10;
    }
    cout << "Wynik to: " << sum << endl;
}