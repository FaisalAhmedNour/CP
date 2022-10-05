#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, a, c = 1;
        cin >> n >> a;
        for(int i = 2; i < n; i += a)
            c++;
        cout << c << endl;
    }
}