#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        map<int,int>t;
        for(int i=0;i<n;++i){
            int c;
            cin >> c;
            t[c] = i+1;
        }
        int a = -1;
        for(int i = 0; i < 1001; ++i){
            for(int j = i; j < 1001; ++j){
                if(__gcd(i,j) == 1 && t[i] > 0 && t[j] > 0){
                    a = max(t[i]+t[j],a);
                }
            }
        }
        cout << a << endl;
    }
}