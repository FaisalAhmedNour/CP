
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, t, s2, f = 0;
        cin >> n;
        t = n / 2020;
        while(t >= 0)
        {
            s2 = 2020 * t;
            if((n - s2) % 2021 == 0)
            {
                f = 1;
                break;
            }
            else t--;
        }
        if(f)cout << "YES\n";
        else cout << "NO\n";
    }
}
