#include<bits/stdc++.h>
using namespace std;

int main()
{
    char letter;
    cin >> letter;
    if(letter >= '0' && letter <= '9'){
        cout << "IS DIGIT";
    }
    else{
        cout << "ALPHA\n";
        if(letter >= 'A' && letter <= 'Z'){
            cout << "IS CAPITAL";
        }
        else cout << "IS SMALL";
    }
}
