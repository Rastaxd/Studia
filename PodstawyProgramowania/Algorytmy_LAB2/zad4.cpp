#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Kalkulator. Podaj dwie liczby: " << endl;
    cin >> a;
    cin >> b;
    if (a!=0 && b!=0){
        int sum = a + b;
        int dif = a - b;
        int div = a / b;
        int mul = a * b;

        cout <<"Suma: \n" << sum <<"\nRoznica: \n"<< dif <<"\nDzielenie: \n"<< div <<"\nMnozenie: \n"<< mul <<endl;

    }
}