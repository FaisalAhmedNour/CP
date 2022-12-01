
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        long long int n, b;
        cin >> n >> b;
        long long int a[n];
        for (long long int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long i = n - 1;
        for (; i >= 0; i--)
        {
            if (a[i] < b)
            {
                break;
            }
        }
        cout << i + 1 << endl;
    }
}
