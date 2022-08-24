
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int a, b;
        cin >> a >> b;
        int c = min(a,b);
        c = c * 2;
        int d = max(a,b);
        cout << (c > d ? c * c : d * d) << endl;
    }
}
