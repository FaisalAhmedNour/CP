#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 1)
        {
            cout << "no\n";
        }
        else
        {
            bool f = 1;
            for (int i = 2; i * i <= n; i++)
            {
                if (n % i == 0)
                {
                    f = 0;
                }
            }
            if (f)
            {
                cout << "yes\n";
            }
            else
            {
                cout << "no\n";
            }
        }
    }
}