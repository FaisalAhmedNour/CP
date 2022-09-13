#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        int jump = 0, n = str.size(), cost;
        vector<int> ch;
        map<int,int> cheak;
        map<int,vector<int>> position;
        for(int i = 0; i < n; i++){
            ch.push_back(str[i] - 'a' + 1);
            cheak[str[i] - 'a' + 1]++;
            position[str[i] - 'a' + 1].push_back(i+1);
        }
        int mx = max(ch[0],ch[n-1]);
        int mn = min(ch[0],ch[n-1]);
        vector<int> result;
        if(ch[0] > ch[n-1]){
            for(auto v = position.rbegin(); v != position.rend(); v++){
                if(v->first <= ch[0] && v->first >= ch[n-1]){
                    for(auto p : v->second){
                        result.push_back(p);
                    }
                }
            }
            int m = result.size();
            cout << ch[0] - ch[n-1] << " " << m << "\n";
            for(int i = 0; i < m; i++){
                cout << result[i] << " ";
            }
        }
        else{

            for(auto v : position)
            {
                if(v.first <= ch[n-1] && v.first >= ch[0]){
                    for(auto p : v.second){
                        result.push_back(p);
                    }
                }
            }
            int m = result.size();
            cout << ch[n-1] - ch[0] << " " << m << "\n";
            for(int i = 0; i < m; i++){
                cout << result[i] << " ";
            }
        }
        cout << "\n";
    }
}
