
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    if (n % 4 == 0)
    {
        cout << "YES\n"
             << (n / 2) << endl;
        for (int i = 1; i <= n / 2; i += 2)
        {
            cout << i << " " << n - i + 1 << " ";
        }
        cout << endl
             << (n / 2) << endl;
        for (int i = 2; i <= n / 2; i += 2)
        {
            cout << i << " " << n - i + 1 << " ";
        }
        cout << endl;
    }
    else if ((n + 1) % 4 == 0)
    {
        cout << "YES\n"
             << (n / 2) + 1 << endl
             << 1 << " ";
        for (int i = 2; i < (n / 2) + 1; i += 2)
        {
            cout << i << " " << n - i + 2 << " ";
        }
        cout << (n / 2) + 1 << endl
             << (n / 2) << endl;
        for (int i = 3; i < (n / 2) + 2; i += 2)
        {
            cout << i << " " << n - i + 2 << " ";
        }
        cout << (n / 2) + 2 << endl;
    }
    else
    {
        cout << "NO\n";
    }
}