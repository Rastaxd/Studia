//
// Created by Kuba on 13.11.2023.
//

#include <iostream>
#include <string>
using namespace std;
string dec2hex(int decNum) {
    string res = "";
    while (decNum > 0){
        int rest = decNum % 16;
        char hexNum;
        if (rest < 10){
            hexNum = rest + '0';
        }else{
            hexNum = rest - 10 + 'A';
        }
    }
}

int main(){

}

#include <iostream>
#include <string>

std::string decToHex(int decimalNumber) {
    std::string result = "";

    while (decimalNumber > 0) {
        int remainder = decimalNumber % 16;
        char hexDigit = (remainder < 10) ? (char)(remainder + '0') : (char)(remainder - 10 + 'A');
        result = hexDigit + result;
        decimalNumber /= 16;
    }

    return result.empty() ? "0" : result;
}

int main() {
    int decimalInput;

    std::cout << "Podaj liczbę dziesiętną: ";
    std::cin >> decimalInput;

    std::string hexOutput = decToHex(decimalInput);

    std::cout << "Wynik konwersji: " << hexOutput << std::endl;

    return 0;
}

