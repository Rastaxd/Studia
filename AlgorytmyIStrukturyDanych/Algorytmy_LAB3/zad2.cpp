#include <iostream>
#include <string>

using namespace std;
string dec2bin_str(int n);

int main() {
    int a;
    cout << "Podaj liczbe dziesietna: " << endl;
    cin >> a;
    string result = dec2bin_str(a);
    cout << "Wynik to: " << result << endl;
}

string dec2bin_str(int n) {
    string res = " ";
    while (n > 0) {
        res=to_string(n%2)+res;
        n /= 2;
    }
    return res;
}

