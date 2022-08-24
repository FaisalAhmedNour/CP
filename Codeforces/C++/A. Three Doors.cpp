
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x, a, b, c;
        cin >> x >> a >> b >> c;
        if(a == 1 || b == 2 || c == 3) cout << "NO\n";
        else if((x == 1 && a == 0) || (x == 2 && b == 0) || (x == 3 && c == 0))
            cout << "NO\n";
        else cout << "YES\n";
    }
}
