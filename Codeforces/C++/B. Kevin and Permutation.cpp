#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, f;
        cin >> n;
        int m = n / 2;
        if (n < 4)
        {
            for (int i = 1; i <= n; i++)
            {
                cout << i << " ";
            }
            cout << "\n";
        }
        else if (n % 2 == 0)
        {
            for (int i = m; i > 0; --i)
            {
                cout << i << " " << i + m << " ";
            }
            cout << "\n";
        }
        else
        {
            for (int i = 1; i <= m; ++i)
            {
                cout << i << " " << i + m + 1 << " ";
            }
            cout << m + 1 << "\n";
        }
    }
}