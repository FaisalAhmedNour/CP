#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        if((n*m)%4 == 0)
            cout << (n*m)/4 << endl;
        else cout << ((n*m)/4)+1 << endl;
    }
}