#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int a = 1;
    int n = 1;
    int a1 = 1;

    cout << "Podaj liczbe a: " <<endl;
    cin >> a;
    cout << "Podaj potege do ktorej chcesz ja podniesc: " << endl;
    cin >> n;

    while (n > 0){
        a1 *= a;
        n -= 1;
    }

    cout << "Wynik to: " << a1 << endl;
}