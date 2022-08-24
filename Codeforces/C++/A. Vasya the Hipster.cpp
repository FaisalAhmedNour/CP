
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b;
    cout << (c = min(a,b));
    d = max(a,b);
    cout << " " << (d - c) / 2;
}
