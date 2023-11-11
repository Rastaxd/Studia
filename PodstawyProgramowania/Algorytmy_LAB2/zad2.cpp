#include <iostream>
using namespace std;
int n;

int main(){
    cout << "Kalkulator liczb pierwszych" <<endl;
    cout << "Podaj liczbe, do ktorej chcesz wypisac liczby pierwsze: "<<endl;
    cin >> n;


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