#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        long long int n, m, sum = 0;
        cin >> n >> m;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            sum += abs(1-arr[i]) > abs(arr[i]-m) ? abs(1-arr[i]) : abs(arr[i]-m);
        }
        cout << sum << endl;
    }
}