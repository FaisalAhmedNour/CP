#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; ++i){
            cin >> arr[i];
        }
        for(int i = 1; i <= n; ++i){
            for(int j = 0; j <= n-i; ++j){
                int mx = -1000000;
                for(int k = j; k < j+i; ++k){
                    mx = max(mx,arr[k]);
                }
                cout << mx << " ";
            }
        }
        cout << endl;
    }
}