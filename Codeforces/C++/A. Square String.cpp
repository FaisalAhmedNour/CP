#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        if(s.size() % 2 == 1)
        {
            cout << "NO\n";
        }
        else
        {
            int m = s.size() / 2, f = 1;
            for(int i = 0; i < m; i++)
            {
                if(s[i] != s[m+i])
                {
                    f = 0;
                }
            }
            if(f) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}