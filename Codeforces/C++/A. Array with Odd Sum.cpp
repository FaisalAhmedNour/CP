#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, odd = 0, even = 0;
        cin >> n;
        int arr[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2)
            {
                odd++;
            }
            else
            {
                even++;
            }
        }
        if (odd == 0 || ((even == 0) && (odd % 2 == 0)))
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
}
