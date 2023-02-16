#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, k;
        cin >> x >> y >> k;
        int ans = (abs(x - y)) / k;
        if ((abs(x - y)) % k)
        {
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
