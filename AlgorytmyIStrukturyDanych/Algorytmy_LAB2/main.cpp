#include <iostream>
using namespace std;

int main() {
    double a,b,c,h,area,circumference;
    cout << "Program sprawdzajacy czy z podanych bokow mozna stworzyc trojkat & obliczanie jego pola i obwodu." << endl;
    cout << "Podaj A,B I C: " <<endl;
    cin >> a;
    cin >> b;
    cin >> c;
    if ( a+b > c ){
        cout << "Da sie stworzyc trojkat. Podaj wysokosc: " <<endl;
        cin >> h;
        area = (c * h)/2;
        circumference = a+b+c;
        cout << "Obwod wynosi " << circumference << " a Pole wynosi " << area << endl;
        return 0;
    }
    if ( a+c > b ){
        cout << "Da sie stworzyc trojkat. Podaj wysokosc: " <<endl;
        cin >> h;
        area = (b * h)/2;
        circumference = a+b+c;
        cout << "Obwod wynosi " << circumference << " a Pole wynosi " << area << endl;
        return 0;
    }
    if ( b+c > a ){
        cout << "Da sie stworzyc trojkat. Podaj wysokosc: " <<endl;
        cin >> h;
        area = (a * h)/2;
        circumference = a+b+c;
        cout << "Obwod wynosi " << circumference << " a Pole wynosi " << area << endl;
        return 0;

    } else{
        cout << "Podane dlugosci nie sa w stanie stworzyc trojkata" << endl;
        return 0;
    }
}
