
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k, kth = 0;
        cin >> n >> k;
        int x = k / (n-1);
        if(x * (n-1) == k) cout << (x * n) - 1 << "\n";
        //else if(n == k) cout << n+1 << "\n";
        else cout << (x * n) + (k % (n-1)) << "\n";
    }
}

