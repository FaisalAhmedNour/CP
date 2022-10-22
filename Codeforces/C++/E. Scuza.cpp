#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;
        long long step[n+1];
        long long steps[n+1];
        for(int i = 1; i <= n; i++){
            cin >> step[i];
        }
        for(int i = 1; i <= n; i++){
            steps[i] = step[i] + step[i-1];
        }
        map<long long, long long> mp;
        mp[0] = 0;
        long long sum = 0;
        int temp = step[1];
        for(int i = 1; i <= n; ++i){
            if(step[i] > temp){
                mp[temp] = sum;
                temp = step[i];
                i--;
            }
            else{
                sum += step[i];
            }
        }
        mp[temp] = sum;
        // for(auto it : mp){
        //     cout << it.first << " " << it.second << endl;
        // }
        for(int i = 0; i < q; ++i){
            int x;
            cin >> x;
            auto it = mp.lower_bound(x);
            if(it->first == x){
                cout << it->second << " ";
            }
            else{
                --it;
                cout << it->second << " ";
            }
        }
        cout << endl;
    }
}