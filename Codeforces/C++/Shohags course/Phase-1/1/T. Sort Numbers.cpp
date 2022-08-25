
#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    int x = min({a,b,c});
    int z = max({a,b,c});
    int y = a+b+c-x-z;
    cout << x << endl
         << y << endl
         << z << endl << endl
         << a << endl
         << b << endl
         << c << endl;
}
