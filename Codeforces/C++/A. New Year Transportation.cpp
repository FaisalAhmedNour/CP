#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 1; i < n; cin >> arr[i], i++)
        ;
    int c = 1;
    vector<int> add;
    while (c <= x)
    {
        add.push_back(c);
        if (c == x)
        {
            cout << "YES\n";
            return 0;
        }
        else
        {
            c += arr[c];
        }
    }
    cout << "NO\n";
}