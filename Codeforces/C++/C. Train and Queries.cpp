
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        unordered_map<int,int> hsh1, hsh2;
        for(int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            hsh1[x] == 0 ? hsh1[x] = i : hsh2[x] = i;
        }
        while(k--)
        {
            int a, b;
            cin >> a >> b;
            if(hsh1[a] == 0 || hsh1[b] == 0)cout << "NO\n";
            else{
                cout << (hsh2[b] == 0 ? (hsh1[a] < hsh1[b] ? "YES\n" : "NO\n") : (hsh1[a] < hsh2[b] ? "YES\n" : "NO\n"));
            }
        }
    }
    return 0;
}
