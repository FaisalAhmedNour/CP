
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n, cnt = 0, f = 1;
        cin >> n;
        while(n > 1)
        {
            if(__builtin_popcount(n) == 1)
            {
                f = 0;
                break;
            }
            if(n % 6 == 0)
            {
                n = n / 6;
                cnt++;
            }
            else
            {
                n = n * 2;
                cnt++;
            }
        }
        if(f) cout << cnt << "\n";
        else cout << -1 << "\n";
    }
}
