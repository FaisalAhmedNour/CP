#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, q, even = 0, odd = 0;
        long long sum = 0;
        cin >> n >> q;
        int arr[n];
        for(int i = 0; i < n; ++i){
            cin >> arr[i];
            if(arr[i] % 2 == 0)
                even++;
            else odd++;
            sum += arr[i];
        }
        for(int i = 0; i < q; ++i){
            int j, x;
            cin >> j >> x;
            if(j){
                sum += odd * x;
                if(x % 2 == 1){
                    even += odd;
                    odd = 0;
                }
            }
            else{
                sum += even * x;
                 if(x % 2 == 1){
                    odd += even;
                    even = 0;
                }
            }
            cout << sum << "\n";
        }
    }
}