
#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        int col = n*2;
        for(int i = 1; i <= n; ++i){
            for(int j = 1; j <= col; ++j){
                if(j <= i || j > (col-i))
                    cout << "*";
                else cout << "#";
            }
            cout << endl;
        }
    }
}
