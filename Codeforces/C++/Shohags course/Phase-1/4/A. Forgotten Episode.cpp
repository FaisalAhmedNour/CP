#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n+1];
    for(int i = 0; i <= n; i++){
        arr[i] = 0;
    }
    for(int i = 1; i < n; i++){
        int x;
        cin >> x;
        arr[x] = 1;
    }
    for(int i = 1; i <= n; i++){
        if(arr[i] == 0){
            cout << i << "\n";
            break;
        }
    }
}
    