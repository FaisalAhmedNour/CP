
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        map<int,int> m;
        int n;
        cin >> n;
        int i = n;
        while(i--)
        {
            int x;
            cin >> x;
            m[x]++;
        }
        int count = 0;
        for(auto &value : m)
        {
            if(value.second == 1)
                count++;
        }
        if(count != 0)
            cout << -1 << endl;
        else
        {
            int p = 0, i = 1;
            for(auto value : m)
            {
                p += value.second;
                cout << p << " ";
                for( ; i < p; ++i)
                    cout << i << " ";
                i++;
            }
            cout << endl;
        }
    }
}
