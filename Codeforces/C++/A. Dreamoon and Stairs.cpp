#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int k = m;
    if (m > n)
    {
        cout << -1;
        return 0;
    }
    int mnSteps = (n + 1) / 2;
    while (m <= n)
    {
        if (mnSteps < m)
        {
            cout << m;
            return 0;
        }
        else
        {
            m += k;
        }
    }
    cout << -1;
    return 0;
}
