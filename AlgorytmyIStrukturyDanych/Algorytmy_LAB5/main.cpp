#include <iostream>
#include <algorithm>
void selectionsort (int *tab, int size);

int main() {
    int f;
    std::cout << "Ilu liczb ma miescic tablica?" << std::endl;
    std::cin >> f;
    int tab[--f];
    for (int i = 0; i < f;i++){
        std::cout << "Podaj liczbe numer " << i << std::endl;
        std::cin >> tab[i];
    }
    selectionsort(tab,f);
    std::cout << "Posortowana tablica:" << std::endl;
    for (int i = 0; i < f;i++){
        std::cout << tab[i] << "\n";
    }
    return 0;
}


//Sortowanie przez wybór
void selectionsort (int *tab, int size){
    for (int i = 0; i < size; i++){
        int minIndex = i;
        for (int j = i; j < size; j++){
            if (tab[j] < tab[minIndex]){
                minIndex = j;
            }
        }
        std::swap(tab[i], tab[minIndex]);
    }
}