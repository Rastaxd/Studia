#include <iostream>
#include <iomanip>
#include <chrono>
#include <fstream>

int main() {
    std::fstream file;
    file.open("C:\\Users\\jakub\\Desktop\\Testy_algorytmy\\Losowe\\50.txt");
    std::string line;
    while(file.good()){
        getline(file, line);
    }
    auto start = std::chrono::high_resolution_clock::now(); // początek

    std::ios_base::sync_with_stdio(false);

    // Tutaj dodaj kod, który chcesz zmierzyć czas wykonania.

    auto end = std::chrono::high_resolution_clock::now(); // koniec
    double time_taken = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count();
    time_taken *= 1e-9; // konwersja ns na s

    std::cout << "Time taken by program is: "  << std::setprecision(9) << time_taken << " s" << std::endl;

    return 0;
}

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

void quickSort(int tab[], int less, int more){
    int l = less;
    int m = more;
    int t = tab[(less + more) / 2];
    do{
        while (tab[l] < t)
            l++;
        while (tab[l] > m)
            m--;
        if (l <= m){
            std::swap(tab[l],tab[m]);
            l++;
            m--;
        }
    }
    while( l <= m );
    if( less < m) quickSort(tab,less, m);
    if (more > l) quickSort(tab,l, more);
}

void bubblesort(int *tab, int size) {
    for (int i = 0; i < size - 1; i++){
        for (int j = 0; j < size -1; j++){
            if (tab[j] > tab [j + 1]){
                std::swap(tab[j], tab[j + 1]);
            }
        }
    }
}

void insertionsort(int *tab, int size){
    int tmp;
    for (int i = 1; i < size; i++){
        tmp = tab[i];
        int j = i - 1;
        while(j >= 0 && tmp <= tab[j]){
            tab[j+1] = tab[j];
            j--;
        }
        tab[j+1] = tmp;
    }
}
