#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n)
{
    bool f = 1;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            f = 0;
            break;
        }
    }
    return f;
}

int main()
{
    int n, m, p;
    cin >> n >> m;
    for (int i = n + 1;; i++)
    {
        if (is_prime(i))
        {
            p = i;
            break;
        }
    }
    if (p == m)
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";
}