#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int arr[n], hash[100001];
    for(int i = 0; i < 100001; i++){
        hash[i] = 0;
    }
    for(int j = 0; j < n; j++){
        cin >> arr[j];
        hash[arr[j]]++;
    }
    for(int i = 1; i <= m; i++){
        cout << hash[i] << "\n";
    }
}