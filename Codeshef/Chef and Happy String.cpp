#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int cnt = 0;
        bool f = false;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                cnt++;
            else cnt = 0;
            if(cnt > 2)
                f = true;
        }
        if(f) cout << "Happy\n";
        else cout << "Sad\n";
    }
}