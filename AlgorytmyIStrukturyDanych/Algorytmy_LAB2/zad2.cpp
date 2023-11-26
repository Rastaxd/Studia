using namespace std;
#include <iostream>
int n;
bool primeNumber(int a);

int main(){
    cout << "Kalkulator liczb pierwszych" <<endl;
    cout << "Podaj liczbe, do ktorej chcesz wypisac liczby pierwsze: "<<endl;
    cin >> n;

    for(int i = 2; i <= n; i++){
        if (primeNumber(i) == true){
            cout << "Liczba " << i << " jest pierwsza" << endl;
        }
    }
}
bool primeNumber(int a){
    int i = 2;
    while(i*i<= a){
        if (a%i == 0 )
            return false;
        i++;
    }
    return true;
}
