#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n;
    cin >> n;
    for (long long int i = 1; i <= n; i++)
    {
        long long int ans = ((((i * i * i * i) - (i * i)) / 2) - ((4 * (i * i)) - (12 * i) + 8));
        cout << ans << endl;
    }
}