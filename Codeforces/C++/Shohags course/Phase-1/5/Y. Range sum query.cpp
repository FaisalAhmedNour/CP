#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main(){
    int n, q;
    cin >> n >> q;
    ll arr[n+1];
    for(int i = 1; i <= n; ++i){
        cin >> arr[i];
    }
    for(int i = 1; i <= n; ++i){
        arr[i] = arr[i] + arr[i-1];
    }
    for(int i = 0; i < q; ++i){
        int x, y;
        cin >> x >> y;
        cout << arr[y]-arr[x-1] << endl;
    }
}