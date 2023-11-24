#include <iostream>
using namespace std;

int main(){
    int container[20], min;
    int i;
    for (i = 0;i < 20;i++){
        cout << "Podaj liczbe ktora chcesz dodac do tablicy" << endl;
        cin >> container[i];
    }
    // najmniejsza
    for (i = 0; i < 20;i++){
       if (min > container[i]) {
           min = container[i];
       }
    }
    //najwieksza
    for (i = 0; i < 20;i++){
        if (min < container[i]) {
            min = container[i];
        }
    }
    cout <<min;
}