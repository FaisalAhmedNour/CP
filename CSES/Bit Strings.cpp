#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n, ans = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        ans = ((ans % 1000000007) * (2 % 1000000007)) % 1000000007;
    }
    cout << ans << endl;
}