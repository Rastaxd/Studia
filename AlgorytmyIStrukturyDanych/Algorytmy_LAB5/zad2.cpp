//
// Created by jakub on 08.12.2023.
//

#include <iostream>
#include <algorithm>

int main(){

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