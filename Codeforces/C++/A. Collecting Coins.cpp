#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b, c, n;
        cin >> a >> b >> c >> n;
        int s = a + b + c + n;
        int m = max({a,b,c});
        int d = (m - a) + (m - b) + (m - c);
        if (s % 3 == 0 && n >= d)
        {
            cout << "YES\n";
        }
        else cout << "NO\n";
    }
}