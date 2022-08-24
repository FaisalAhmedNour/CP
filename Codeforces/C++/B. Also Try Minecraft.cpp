
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    long long int arr[n+1], arr1[n+1], arr2[n+1];
    for(int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    arr1[1] = 0;
    for(int i = 2; i <= n; i++)
    {
        if(arr[i] < arr[i-1]) arr1[i] = arr1[i-1] + (arr[i-1] - arr[i]);
        else arr1[i] = arr1[i-1];
    }
    arr2[n] = 0;
    for(int i = n-1; i >= 1; i--)
    {
        if(arr[i] < arr[i+1]) arr2[i] = arr2[i+1] + (arr[i+1] - arr[i]);
        else arr2[i] = arr2[i+1];
    }

    for(int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        if(a < b) cout << arr1[b] - arr1[a] << "\n";
        else cout << arr2[b] - arr2[a] << "\n";
    }
    return 0;
}
