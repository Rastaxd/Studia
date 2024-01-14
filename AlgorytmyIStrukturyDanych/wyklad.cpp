#include <iostream>
using namespace std;

// algorytm euklidesa Iteracyjny
int gcdIt(int a, int b)
{
    std::cout << "Algorytm Euklidesa, Iteracyjny" << std::endl;
    std::cout << "Podaj A" << std::endl;
    std::cin >> a;
    std::cout << " Podaj B" << std::endl;
    std::cin >> b;
    int tmp;
    while(b!= 0)
    {
        tmp = a % b;
        a = b;
        b=tmp;
    }
    return a;
}
// Rekurencyjny
int gcdRec( int a, int b){
    if (b == 0)
        return a;
    return gcdRec(b, (a % b));
}

// naiwne szukanie nwd

int naiveGCD(int a, int b ){
    int i;
    if (a > b)
        i = b;
    else
        i = a;
    while (i > 1){
        if (a%1 == 0 && b % i == 0)
            return i;
        else
            i--;
    }
    return i;
}

// sito erastotenesa

void erastotenesSieve(int n){
    bool tab[n+1];
    for (int i = 0;i<=n;i++){
        tab[i] = false;
    }
    for (int i = 2; i*i <=n ; i++) {
        for (int a = 2*i; a<= n; a+= i ){
            tab[a] = true;
        }

    }
    for (int i = 2; i <=n ; i++) {
        if (tab[ixx])
    }
}
// do dokonczenia

// Fibonacciego
int fib(int n){
    if (n == 0 || n == 1) return n;
    else return fib(n-1) + fib(n-2);
}

// Liczby Pierwsze
bool primeNumber(int a){
    int i = 2;
    while(i*i<= a){
        if (a%i == 0 )
            return false;
        i++;
    }
    return true;
}

// Liczba doskonała
bool perfectNumber(int a){
    int sum = 0;
    for (int i = 1; i < a; i++){

    }
}

// Czynniki pierwsze
void primeFactors(int n ){
    for (int i = 2; i * i <= n; i++){
        while ( n % i == 0){
            std::cout << i <<" ";
            n/=i;
        }
        if ( n == 1) break;
    }
    if (n > 1){
        std::cout<< n << " " << std::endl;
    }
}
// schemat hornera (iteracyjny)
int horner_it(int wsp[], int st, int x){
    int wynik = wsp[0];
    for (int i = 1; i<= st;i++)
        wynik = wynik*x + wsp[i];
    return wynik;
}
//pobranie danych
/*int *wsp
int st,x;
std::cout << "podaj stopień: ";
std::cin >> st;
wsp = new int [st+1];
std::cout << "Podaj wsp.(od max potegi): ";
for (int i = 0l i<= st; i++)
    cin >> wsp[i];
std::cout << " Podaj argument: ";
cin >> x;
cout <<horner_rec << endl
*/

//Algorytm dec2bin

//Napis
 void dec2bin_str(int n) {
   string res = " ";
    while (n > 0) {
        res=to_string(n%2)+res;
        n /= 2;
    }
    std::cout << res << std::endl;
}

//(tablica)
void dec2bin_arr(int n) {
    int i = 0;
    int binary[8];
    while (n > 0) {
        binary[i] = n % 2;
        n /= 2;
    }
}

// Bin2Dec
int bin2dec_str (string n){
    int res = 0;
    int power = 1;
    for (int i = n.lenght()-1; i >= 0; i-- ){
        if (n[i] == '1')
            res+= power;
        power *= 2;
    }
    cout << res << endl;
}


int main(){
    //sprawdzenie liczby pierwszej
    std::cout << primeNumber(31) << std::endl;
    //std::cout << primeFactors(13) << std::endl;
}
//Sortowanie bąbelkowe

void bubblesort(int *tab, int size) {
    for (int i = 0; i < size - 1; i++){
        for (int j = 0; j < size -1; j++){
            if (tab[j] > tab [j + 1]){
                swap(tab[j], tab[j + 1]);
            }
        }
    }
}

//Sortowanie przez wstawianie
void insertionsor(int *tab, int size){
    int tmp;
    for (int i = 1; i < size; i++){
        tmp = tab[i];
        int j = i - 1;
        while(j >= 0 && tmp <= tab[j]){
            tab[j+1] = tab[j];
            j--
        }
        tab[j+1] = tmp;
    }
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
        swap(tab[i], tab[minIndex]);
    }
}