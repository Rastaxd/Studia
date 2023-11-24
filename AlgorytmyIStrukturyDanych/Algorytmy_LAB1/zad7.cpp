#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double a, b, c, d;
    cout << "Podaj A,B i C: " << endl;
    cin >> a;
    cin >> b;
    cin >> c;

    d = (b * b) - (4 * a * c);

    if (d > 0) { // Upewnienie się, ze delta jest większa od 0
        if (a != 0) {
            d = (b * b) - (4 * a * c);
            double x1 = (b * (-1) + sqrt(d)) / (2 * a);
            double x2 = (b * (-1) - sqrt(d)) / (2 * a);

            cout << x1 << endl;
            cout << x2 << endl;
        } else {
            cout << (-1) * c / b << endl;
        }
    }else {
        cout << "Liczba jest mniejsza od 0, przez co nie mozna wyliczyc pierwiastka." << endl;
    }
}