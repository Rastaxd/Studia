//
// Created by Kuba on 13.11.2023.
//
#include <iostream>
using namespace std;
int bin2dec_str(string n);

int main(){

    string a;
    cout << "Podaj liczbe binarna: " << endl;
    cin >> a;
    int result = bin2dec_str(a);
    cout << "Wynik to: " << result << endl;

}

int bin2dec_str (string n){
    int res = 0;
    int power = 1;
    for (int i = n.length()-1; i >= 0; i-- ){
        if (n[i] == '1')
            res+= power;
        power *= 2;
    }
    return res;
}


