#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        int mx = *max_element(arr, arr+n);
        int mn = *min_element(arr, arr+n);
        int ans = max(mx - arr[0], arr[n-1] - mn);
        for(int i = 0; i < n-1; i++)
            ans = max(ans, arr[i]-arr[i+1]);
        cout << ans << endl;
    }
}