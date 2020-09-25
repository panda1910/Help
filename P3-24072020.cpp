#include<iostream>
using namespace std;

//Roots of a quadratic equation

int main()
{
    int a,b,c;
    float d,r1,r2;
    cout << "Enter a,b,c for the quadratic equation: ";
    cin >> a >> b >> c;
    d = b*b - 4*a*c;
    if(d<0){
        cout << "Roots are imaginary" <<'\n';
    }
    else{
        r1 = (-b+d)/2.0;
        r2 = (-b-d)/2.0;
        cout << "Root1: " << r1 <<'\n';
        cout << "Root2: " << r2 <<'\n';
    }
    return 0;
}