
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
        long long int arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        int mn = *min_element(arr,arr+n);
        int mx = *max_element(arr,arr+n);
        cout << mx - mn << "\n";
    }
}
