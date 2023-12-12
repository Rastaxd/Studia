//
// Created by jakub on 11.12.2023.
//
#include <iostream>
#include <cmath>

int main(){
    int a;
    int *tab[a];
    std::cout<<"Sortuj i zwyciezaj! Podaj rozmiar tablicy:"<<std::endl;
    std::cin>>a;
    std::cout<<"Podaj liczby ktore chcesz posortowac:"<<std::endl;
    for (int i = 0; i <= a; i++) {
        std::cin>>*tab[i];
    }

    double test = 9.0/2.0;
    std::cout<<std::ceil(test)<<std::endl;

}

void merge(int* tab,int* sup_tab,int begin, int end, int middle){
    int i = 0,j;
    begin = i;
    middle = middle + j;
    end = sizeof(tab);
}