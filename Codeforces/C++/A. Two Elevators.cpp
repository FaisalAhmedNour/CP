#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int nd = abs(c - b) + c;
        if(a > nd)
            cout << 2 << endl;
        else if(a < nd)
            cout << 1 << endl;
        else cout << 3 << endl;
    }
}