#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b, c, sum, mx, mn;
        cin >> a >> b >> c;
        sum = a + b + c;
        mx = max({a,b,c});
        mn = min({a, b, c});
        cout << sum - mx - mn << endl;
    }
}