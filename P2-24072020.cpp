#include<iostream>
using namespace std;

//Largest among 3 numbers

int main()
{
    int a,b,c,lar;
    cout << "Enter the 3 numbers: "; 
    cin >> a >> b >> c;
    lar = a;
    if(b > lar) lar = b;
    if(c > lar) lar = c;
    cout << "Largest of the three: " << lar <<'\n';
    return 0;
}