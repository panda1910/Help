#include<iostream>
using namespace std;

int main()
{
    string vowels = "aAeEiIoOuU";
    char str;
    cout <<"Enter the chararcter: ";
    cin >> str;
    for(int i=0;i<vowels.size();i++){
        if(str == vowels[i]){
            cout << "It's a vowel\n";
            return 0;
        }
    }
    cout << "It's a consonant\n";
    return 0;
}