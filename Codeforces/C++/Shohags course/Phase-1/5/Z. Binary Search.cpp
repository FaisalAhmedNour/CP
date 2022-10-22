#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, q;
    cin >> n >> q;
    int arr[n];
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    for(int i = 0; i < q; ++i){
        int x; 
        cin >> x;
        int st = 0, ed = n-1, mid;
        while(ed - st > 1){
            mid = (ed + st) / 2;
            if(arr[mid] < x)
                st = mid + 1;
            else
                ed = mid;
        }
        if(arr[st] == x)
            cout << "found\n";
        else if(arr[ed] == x)
            cout << "found\n";
        else cout << "not found\n";
    }
}