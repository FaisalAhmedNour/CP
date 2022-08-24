
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, count = 0;
        cin >> n;
        for(int i = 0; i < n; ++i)
        {
             int x;
             cin >> x;
             count += x&1;
        }

        cout << min(count,n-count) << endl;
    }
}
