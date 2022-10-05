#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n, k, sum = 0;
        cin >> n >> k;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        for(int i = 1; i <= k; i++){
            int mx = 0;
            for(int j = i-1; j < n; j+=k){
                mx = max(mx,arr[j]);
            }
            sum += mx;
        }
        cout << sum << endl;
    }
}