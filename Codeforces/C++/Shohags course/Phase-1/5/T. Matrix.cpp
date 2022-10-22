#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, s1 = 0, s2 = 0;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        s1 += a[i][i];
        s2 += a[i][n-1-i];
    }
    cout << abs(s1-s2);
    return 0;
}