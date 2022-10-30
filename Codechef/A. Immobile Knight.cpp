
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
        if (n != 3 && m != 3)
        {
            cout << 1 << " " << 1 << "\n";
        }
        else if (n == 3 && m == 3)
        {
            cout << 2 << " " << 2 << "\n";
        }
        else if (n == 3)
        {
            if (m < 3)
            {
                cout << 2 << " " << 1 << "\n";
            }
            else
                cout << 1 << " " << 1 << "\n";
        }
        else
        {
            if (n < 3)
            {
                cout << 1 << " " << 2 << "\n";
            }
            else
                cout << 1 << " " << 1 << "\n";
        }
    }
}
