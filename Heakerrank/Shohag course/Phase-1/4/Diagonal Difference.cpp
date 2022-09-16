#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, sum1 = 0, sum2 = 0;
    cin >> n;
    int arr[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < n; i++){
            sum1 += arr[i][i];
            sum2 += arr[i][n-1-i];
    }
    cout << abs(sum1-sum2);
}