#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, f = 0;
        char c;
        string s;
        int cnt = 0;
        cin >> n >> c >> s;
        if(c == 'g'){
            cout << 0<< endl;
        }
        else{
            string temp;
            int i;
            for(i = 0; i < s.size(); ++i){
                temp.push_back(s[i]);
                if(s[i] == 'g'){
                    i++;
                    break;
                }
            }
            s += temp;
            int mx = 0;
            for( ; i < s.size(); ++i){
                if(s[i] == 'g'){
                    cnt++;
                    f = 0;
                    mx = max(mx,cnt);
                    cnt = 0;
                }
                if(f) cnt++;
                if(s[i] == c){
                    f = 1;
                }
            }
            cout << mx << "\n";
        }
    }
}