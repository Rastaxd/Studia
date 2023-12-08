#include <iostream>

using namespace std;

int getDec (char n);

int main() {
    string n;
    int res = 0,pow = 1;
    cin>>n;
    for(int i = n.length()-1;i>=0;i--)
    {
        res+= (getDec(n[i])%16)*pow;
        pow*=16;
    }
    cout<<res<<endl;
    return 0;
}

int getDec(char n)
{
    switch(n)
    {
        case 'A':
            return 10;
        case 'B':
            return 11;
        case 'C':
            return 12;
        case 'D':
            return 13;
        case 'E':
            return 14;
        case 'F':
            return 15;
        default:
            int number = n-'0';
            return number;
    }
}