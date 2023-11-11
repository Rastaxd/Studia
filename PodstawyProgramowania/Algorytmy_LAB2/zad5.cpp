#include <iostream>

bool primeNumber(int a){
    int i = 2;
    while(i*i<= a){
        if (a%i == 0 )
            return false;
        i++;
    }
    return true;
    if (primeNumber(a) == bool(true)){

    }
}

int main(){
    int a;
    std::cout << "Sprawdzanie pierwszosci. Podaj liczbe do sprawdzenia: "<< std::endl;
    std::cin >> a;
    std::cout << "Czy liczba jest pierwsza?"<< primeNumber(a)<<std::endl;
}