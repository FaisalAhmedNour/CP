#include<bits/stdc++.h>
using namespace std;

bool is_even(int arr[], int n){
    bool f = 1;
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 != 0){
            f = 0;
            break;
        }
    }
    return f;
}

int main(){
    int n, cnt = 0;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    while(is_even(arr, n)){
        cnt++;
        for(int i = 0; i < n; i++)
            arr[i] = arr[i] / 2;
    }
    cout << cnt;
}