
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n, cmin = 0, omin = 0, sum = 0;
        cin >> n;
        long long int candy[n], orrange[n];
        for(int i = 0; i < n; i++)
        {
             cin >> candy[i];
             if(i == 0)cmin = candy[i];
             else cmin = min(cmin ,candy[i]);
        }
        for(int i = 0; i < n; i++)
        {
             cin >> orrange[i];
             if(i == 0)omin = orrange[i];
             else omin = min(omin ,orrange[i]);
        }
        for(int i = 0; i < n; i++)
        {
             sum += max(candy[i]-cmin, orrange[i]-omin);
        }
        cout << sum << "\n";
    }
}
