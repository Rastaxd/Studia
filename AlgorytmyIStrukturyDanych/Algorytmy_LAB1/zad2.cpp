#include <iostream>
using namespace std;


int main(){
    int m,n,nww,tmp;
    cout << "Podaj n: " << endl;
    cin >> n;
    cout << "Podaj m: " << endl;
    cin >> m;
    nww = m*n;
    while (n!=0){
        tmp = tmp = m % n;
        m = n;
        n = tmp;
    }
    nww /= m;
    cout << "NWW wynosi " << nww << " Oraz NWD wynosi: " << m << endl;
}
//schemat blokowy w przegladarce