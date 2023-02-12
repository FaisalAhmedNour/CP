#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        cout << ((n / 2) * m) + ((n % 2) * ((m + 1) / 2)) << endl;
    }
}