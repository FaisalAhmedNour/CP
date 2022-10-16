#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, f = 1;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; ++i)
            cin >> arr[i];
        string s;
        cin >> s;
        map<int, char> mp;
        for(int i = 0; i < n; ++i){
            if(mp.find(arr[i]) == mp.end()){
                mp[arr[i]] = s[i];
            }
            else{
                if(mp[arr[i]] != s[i]){
                    f = 0;
                }
            }
        }
        if(f) cout << "YES\n";
        else cout << "NO\n";
    }
}