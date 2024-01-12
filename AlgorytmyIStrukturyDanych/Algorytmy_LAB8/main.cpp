#include <iostream>
#include <string>

using namespace std;

int main(){

}

void queue(int s) {
    string *array = new string[s];
    cout << "Podaj jedna z instrukcji:\n"
         << "d - aby dodac napis do kolejki\n"
         << "u - aby usunac napis z kolejki\n"
         << "w - aby wyswietlic zawartosc kolejki\n"
         << "x - aby zakonczyc\n";
    char instrukcja; //info od uzytkownika
    bool loop = true; //czy zapetlac
    int elements = 0; //ilosc elementow
    while (loop) {
        cin >> instrukcja;
        switch (instrukcja) {
            case 'd':
                if (elements == s) {
                    cout << "kolejka jest pelna!\n";
                } else {
                    string str;
                    cout << "podaj napis\n";
                    cin >> str;
                    for (int i = elements - 1; i >= 0; i--) {
                        array[i + 1] = array[i];
                    }
                    array[0] = str;
                    elements++;
                    cout << "dodano!\n";
                }
                break;
            case 'u':
                if (elements == 0) {
                    cout << "kolejka jest pusta!\n";
                } else {
                    elements--;
                    cout << "usunieto: " << array[elements] << "!\n";
                    array[elements] = "";
                }
                break;
            case 'w':
                if (elements == 0) {
                    cout << "kolejka jest pusta!\n";
                } else {
                    cout << "aktualna kolejka:\n";
                    for (int i = 0; i < elements; i++) {
                        cout << array[i] << " ";
                    }
                    cout << "\n";
                }
                break;
            case 'x':
                loop = false;
                break;
            default:
                cout << "Podaj jedna z instrukcji:\n"
                     << "d - aby dodac napis do kolejki\n"
                     << "u - aby usunac napis z kolejki\n"
                     << "w - aby wyswietlic zawartosc kolejki\n"
                     << "x - aby zakonczyc\n";
                break;
        }
    }
}