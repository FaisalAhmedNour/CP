
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b, c, d;
    cin >> a >> b >> c >> d;
    a = a % 100;
    b = b % 100;
    c = c % 100;
    d = d % 100;
    long long int e = (a * b * c * d) % 100;
    if(e < 10) cout << 0 << e;
    else cout << e;
}
