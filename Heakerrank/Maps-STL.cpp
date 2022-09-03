
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    unordered_map<string,int> mp;
    while(tt--)
    {
        int n, y;
        string x;
        cin >> n;
        if(n == 1)
        {
            cin >> x >> y;
            if(mp[x] == 0)
                mp[x] = y;
            else mp[x] += y;

        }
        else if(n == 2)
        {
            cin >> x;
            mp.erase(x);
        }
        else
        {
            cin >> x;
            cout << mp[x] << endl;
        }
    }
}
