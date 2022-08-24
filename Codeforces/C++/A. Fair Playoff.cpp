
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int arr[4];
        for(int i = 0; i < 4; i++)
            cin >> arr[i];
        int a = max(arr[0], arr[1]), b = max(arr[2], arr[3]);
        sort(arr, arr+4);
        if(arr[3] == max(a, b) && arr[2] == min(a, b))
            cout << "YES\n";
        else cout << "NO\n";
    }
}
