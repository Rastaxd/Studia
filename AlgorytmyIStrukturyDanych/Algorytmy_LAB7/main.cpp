#include <iostream>
#include <iomanip>
#include <chrono>

int main() {
    auto start = std::chrono::high_resolution_clock::now(); // początek

    std::ios_base::sync_with_stdio(false);

    // Tutaj dodaj kod, który chcesz zmierzyć czas wykonania.

    auto end = std::chrono::high_resolution_clock::now(); // koniec
    double time_taken = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count();
    time_taken *= 1e-9; // konwersja ns na s

    std::cout << "Time taken by program is: "  << std::setprecision(9) << time_taken << " s" << std::endl;

    return 0;
}
