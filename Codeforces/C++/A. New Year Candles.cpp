
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, p, sum, t;
    cin >> n >> p;
    sum = n;
    do
    {
        t = n / p;
        sum += t;
        n = (n % p) + t;
    }
    while(t != 0);
    cout << sum;
}
