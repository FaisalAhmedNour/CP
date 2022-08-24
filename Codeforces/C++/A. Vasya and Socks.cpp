
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, sum;
    cin >> n >> m;
    sum = n;
    while(n / m != 0)
    {
        int x = n / m;
        sum += x;
        n = (n % m) + x;
    }
    cout << sum;
}
