
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k, f = 0;
        cin >> n >> k;
        int arr[n];
        for(int i = 0; i < n; ++i){
            cin >> arr[i];
            if(arr[i] == 1) f = 1;
        }
        if(f) cout << "YES\n";
        else cout << "NO\n";
    }
}