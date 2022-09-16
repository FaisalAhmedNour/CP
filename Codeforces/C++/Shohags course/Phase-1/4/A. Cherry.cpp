#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        long long ans = 0;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        for(int i = 1; i < n; i++){
            ans = max(ans, 1LL*arr[i]*arr[i-1]);
        }
        cout << ans << "\n";
    }
}