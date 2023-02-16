#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int n = str.size();
    int pre[n + 1];
    pre[0] = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (str[i] == str[i + 1])
        {
            pre[i + 1] = 1;
        }
        else
        {
            pre[i + 1] = 0;
        }
    }
    pre[n] = 0;
    for (int i = 1; i <= n; i++)
    {
        pre[i] = pre[i] + pre[i - 1];
    }
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        cout << pre[b - 1] - pre[a - 1] << endl;
    }
}
