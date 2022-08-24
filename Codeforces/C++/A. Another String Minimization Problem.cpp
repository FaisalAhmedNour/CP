
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        map<int,int> cnt;
        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            cnt[x]++;
        }
        vector<char> str(m,'B');
        for(auto v : cnt)
        {
            if(v.second == 1)
            {
                if(v.first-1 < m-v.first)
                {
                    if(str[v.first-1] == 'B') str[v.first-1] = 'A';
                    else str[m-v.first] = 'A';
                }
                else
                {
                    if(str[m-v.first] == 'B') str[m-v.first] = 'A';
                    else str[v.first-1] = 'A';
                }
            }
            else
            {
                str[v.first-1] = 'A';
                str[m-v.first] = 'A';
            }
        }
        for(auto v : str)
        {
            cout << v;
        }
        cout << "\n";
    }
}
