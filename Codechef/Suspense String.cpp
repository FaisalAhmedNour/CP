#include<bits/stdc++.h>
#include<deque>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        deque<char> tt;
        cin >> n >> s;
        for(int i = 0; i < (n+1)/2; i++){
            if(s[i] == '1')
                tt.push_back('1');
            else tt.push_front('0');
            if(n-1-i >= (n+1)/2){
                if(s[n-1-i] == '0')
                    tt.push_back('0');
                else tt.push_front('1');
            }
        }
        for(auto v : tt)
            cout << v;
        cout << "\n";
    }
}
