#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        string s;
        cin >> n >> s;
        char c = 'a';
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] > c)
            {
                c = s[i];
            }
        }
        cout << (c-'a') + 1 << endl;
    }
}