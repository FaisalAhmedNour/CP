
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        map<int,int> mp;
        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        if(mp.find(1) != mp.end() && mp.find(2) == mp.end())
        {
            if(mp[1] % 2 == 0)
                cout << "YES\n";
            else cout << "NO\n";
        }
        else if(mp.find(1) == mp.end() && mp.find(2) != mp.end())
        {
            if(mp[2] % 2 == 0)
                cout << "YES\n";
            else cout << "NO\n";
        }
        else
        {
            if(mp[1] % 2 == 0 && mp[2] % 2 == 0)
                cout << "YES\n";
            else if(mp[1] % 2 == 0 && mp[2] % 2 != 0)
                cout << "YES\n";
            else cout << "NO\n";
        }
    }
}
