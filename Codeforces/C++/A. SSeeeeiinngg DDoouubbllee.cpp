#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        map<char, int> str;
        for (int i = 0; i < s.size(); i++)
        {
            str[s[i]]++;
        }
        for (auto v : str)
        {
            for (int i = 1; i <= v.second; i++)
            {
                cout << v.first;
            }
        }
        auto it = str.end(), it2 = str.begin();
        --it;
        //--it2;
        // cout << (*it).first << " " << (*it).second << endl;
        for (;; it--)
        {
            for (int i = 1; i <= (*it).second; i++)
            {
                cout << (*it).first;
            }
            if (it == it2)
                break;
        }
        cout << endl;
    }
}
