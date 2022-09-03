
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string word;
    cin >> word;
    int count = 0;
    for(int i = 0, j = word.size()-1; i <= j; i++, j--)
    {
        if(word[i] == word[j])
            count++;
        else
            break;
    }
    if(word.size()%2 == 0)
        cout << (count == word.size()/2 ? "YES"  : "NO");
    else
        cout << (count == (word.size()+1)/2 ? "YES"  : "NO");
}
