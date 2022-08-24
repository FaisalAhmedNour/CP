
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char word[100];
    cin >> word;
    strlwr(word);
    int i = 0;
    while(word[i] != '\0')
    {
        if(word[i] != 'a' && word[i] != 'e' && word[i] != 'i' && word[i] != 'o' && word[i] != 'u' && word[i] != 'y')
        {
            cout << "." << word[i];
        }
        i++;
    }

    return 0;
}
