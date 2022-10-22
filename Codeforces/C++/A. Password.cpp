#include<bits/stdc++.h>
using  namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n;
        for(int i = 0; i < n; ++i){
            cin >> x;
        }
        for(int i = 2, j = 3; i < 10; ++i, j += 3){
            if(i == 10-n){
                cout << i*j << "\n";  
            }
        }
    }
}