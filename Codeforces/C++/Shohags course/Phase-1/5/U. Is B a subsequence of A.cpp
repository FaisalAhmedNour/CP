#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int j = 0; j < m; j++){
        cin >> b[j];
    }
    int i, j;
    for(i = 0, j = 0; i < n && j < m; i++){
        if(a[i] == b[j]){
            j++;
        }
    }
    //cout << j << endl;
    if(j == m)
        cout << "YES";
    else cout << "NO";
    return 0;
}