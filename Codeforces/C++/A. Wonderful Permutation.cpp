
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k, cnt = 0;
        cin >> n >> k;
        for(int i = 1; i <= n; i++)
        {
            int q;
            cin >> q;
            if(i <= k && q > k)
                cnt++;
        }
        cout << cnt << "\n";
    }
}
