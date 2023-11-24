#include <iostream>
using namespace std;

//obliczanie silni, iteracyjny
using namespace std;

int main(){
    int a,i,score;
    cout << "Podaj liczbe do obliczenia silni: " << endl;
    cin >> a;
    i = 1;
    score = 1;

    if (a <= 0) {
        cout << " Wynik rowna sie 1" << endl;
    }

    while (i < a){
        i++;
        score *= i;
    }

    cout << "Silnia z podanej liczby wynosi: " << score << endl;
}