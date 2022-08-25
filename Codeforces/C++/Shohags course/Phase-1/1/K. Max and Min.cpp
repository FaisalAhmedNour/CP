#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int x = min({a,b,c});
    int y = max({a,b,c});
    cout << x << " " << y;
}
