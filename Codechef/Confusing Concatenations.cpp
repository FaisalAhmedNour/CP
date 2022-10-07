#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        auto mx = max_element(arr,arr+n);
        if(mx == arr)
            cout << -1 << "\n";
        else{
            int m = mx-arr;
            cout << m << "\n";
            for(auto it = arr; it < mx; it++)
                cout << *it << " ";
            cout << "\n" << n-m << "\n";
            for(auto it = mx; it < arr+n; it++)
                cout << *it << " ";
            cout << "\n";
        }
    }
}