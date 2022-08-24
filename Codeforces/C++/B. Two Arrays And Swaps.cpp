
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int n, k;
        cin >> n >> k;
        int a[n], b[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];
        sort(a,a+n);
        sort(b,b+n);
        for(int i = 0, j = n-1; i < k; i++, j--)
        {
            if(a[i] < b[j]) swap(a[i],b[j]);
        }
        cout << accumulate(a, a+n, 0) << endl;
    }
}
