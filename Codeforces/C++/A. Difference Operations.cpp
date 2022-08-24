
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, x, y, f = 0;
        cin >> n >> x;
        for(int i = 1; i < n; i++)
        {
            cin >> y;
            f |= (y % x != 0);
        }
        if(f) cout << "NO\n";
        else cout << "YES\n";
    }
}
