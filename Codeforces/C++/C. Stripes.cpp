#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        vector<string> color;
        for(int i = 0; i < 8; ++i){
            string line;
            cin >> line;
            color.push_back(line);
        }
        int f = 0;
        for(int i = 0; i < 8; ++i){
            if(color[0][i] == 'B'){
                f = 1;
                for(int j = 0; j < 8; ++j){
                    if(color[j][i] != 'B')
                        f = 0;
                }
                if(f) break;
            }
        }
        if(f) cout << "B\n";
        else cout << "R\n";
    }
}