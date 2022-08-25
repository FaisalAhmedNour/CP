#include<bits/stdc++.h>
using namespace std;

int main()
{
    char letter;
    cin >> letter;

    if(letter >= 'A' && letter <= 'Z')
    {
        letter = tolower(letter);
        cout << letter;
    }
    else
    {
        letter = toupper(letter);
        cout << letter;
    }
}
