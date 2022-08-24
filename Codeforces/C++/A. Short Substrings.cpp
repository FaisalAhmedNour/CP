
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string word;
        cin >> word;
        if(word.size() <= 2)
            cout << word << endl;
        else
        {
            for(int i = 0; i < word.size(); i = i + 2)
                cout << word[i];
            if(word.size() % 2 == 0)
                cout << word[word.size()-1] << endl;
            else
                cout << endl;
        }
    }
}
