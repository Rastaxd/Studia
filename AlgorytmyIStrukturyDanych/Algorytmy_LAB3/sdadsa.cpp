//
// Created by Kuba on 13.11.2023.
//

//
// Created by Kuba on 13.11.2023.
//


#include <iostream>
using namespace std;
int dec2bin(int);

void dec2bin_str(int n) {
    string res = " ";
    while (n > 0) {
        res=to_string(n%2)+res;
        n /= 2;
    }
    std::cout << res << std::endl;
}

int main(){
    int a;
    cout << "Podaj liczbe dziesietna: " << endl;
    cin >> a;
    int wynik = dec2bin(a);

    cout << "Liczba " << a << "w postaci binarnej to " << wynik << endl;
}
