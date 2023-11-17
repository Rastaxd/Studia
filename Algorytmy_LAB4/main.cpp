#include <iostream>
using namespace std;
void insertSort(int * tab, int size);



int main() {
    int size,*tablica,i = 0;
    cout << "Podaj wielkosc tablicy: " << endl;
    cin >> size;
    while (i <= size ){
        cin >> tablica[i];
        i++;
    }
    return 0;
}

void insertSort(int *tab, int size){
    int tmp;
    for (int i = 1 ; i < size ; i++){
        tmp = tab[i];
        int j = i - 1;
        while (j >= 0 && tmp <= tab[j]){
            tab[j+1] = tab[j];
            j--;
        }
        tab[j + 1] = tmp;
    }
}