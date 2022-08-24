
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string word;
    cin >> word;
    int countUP = 0, countLW = 0, lenth = word.length();

    for(int i = 0; i < lenth; i++)
    {
        if(word[i] >= 'A' && word[i] <= 'Z')
        {
            countUP++;
        }
        if(word[i] >= 'a' && word[i] <= 'z')
        {
            countLW++;
        }
    }

    if(word[0] >= 'a' && word[0] <= 'z'&& countLW == 1)
    {
        word[0] = toupper(word[0]);
        for(int i = 1; i < lenth; i++)
        {
            word[i] = tolower(word[i]);
        }
    }

    if(countUP == lenth)
    {
        for(int i = 0; i < lenth; i++)
        {
            word[i] = tolower(word[i]);
        }
    }

    cout << word;

    return 0;
}
