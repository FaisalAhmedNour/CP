#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, f = 1;
        cin >> n;
        map<int, int> mp;
        for(int i = 0; i < n; ++i){
            int x;
            cin >> x;
            mp[x]++;
            if(mp[x] > 1) f = 0;
        }
        if(f) cout << "YES\n";
        else cout << "NO\n";
    }
}