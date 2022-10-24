#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        stack<char> temp;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == 'Q')
            {
                temp.push('Q');
            }
            else
            {
                if (temp.size() != 0)
                {
                    temp.pop();
                }
            }
        }
        if (temp.size() == 0)
        {
            cout << "Yes\n";
        }
        else
            cout << "No\n";
    }
}