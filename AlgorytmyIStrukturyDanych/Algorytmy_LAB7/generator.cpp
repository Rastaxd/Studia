#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>

int main() {
    int tab[1999];
    std::ofstream file;
    file.open("C:\\Users\\jakub\\Desktop\\Testy_algorytmy\\Losowe\\2000.txt");
    std::string line = "Linia numer";

    srand(static_cast<unsigned>(time(0))); // Inicjalizacja generatora liczb pseudolosowych

    for (int i = 0; i <= 1999; i++) {
        int a = rand() % 50;
        file << line << i << ": " << a << "\n";  // Dodano spację między numerem linii a liczbą pseudolosową
    }

    file.close();
    return 0;
}
