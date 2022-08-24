
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    map<int,int> mp;
    arr.push_back(0);
    for(int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    for(int i = 1; i <= n; i++)
    {
        arr[i] = arr[i] + arr[i-1];
        mp[arr[i]] = i;
    }
    int q, st = 0, ed = n-1;
    cin >> q;
    for(int i = 0; i < q; i++)
    {
        int p;
        cin >> p;
        int y = *lower_bound(arr.begin(), arr.end(), p);
        cout << mp[y] << "\n";
    }
}
