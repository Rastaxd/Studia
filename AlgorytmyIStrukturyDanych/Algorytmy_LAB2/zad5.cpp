#include <iostream>
#include <math.h>

int n,t;

int main(){
    std::cout<<"Podaj liczbe do sprawdzenia jej pierwszosci: "<<std::endl;
    std:: cin>> n;
    for (int i = 2; i <= sqrt(n) ; i++) {
        if(n%i == 0){
            t+=1;
        }
    }
    if (t == 0){
        std::cout<<"Liczba jest pierwsza"<<std::endl;
    } else{
        std::cout<<"Liczba nie jest pierwsza"<<std::endl;
    }
    return 0;
}

