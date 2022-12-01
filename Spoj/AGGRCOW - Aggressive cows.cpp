//https://www.spoj.com/problems/AGGRCOW/
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int bun, cow;
int position[N];

bool is_possible(int distance){
    int cnt = cow, temp = -1;
    for(int i = 0; i < bun; ++i){
        if(position[i] - temp >= distance || temp == -1){
            cnt--;
            temp = position[i];
        }
        if(cnt == 0) break;
    }
    return cnt == 0;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> bun >> cow;
        for(int i = 0; i < bun; i++)
            cin >> position[i];
        sort(position,position+bun);
        int st = 0, ed = 1e9, mid;
        while(ed - st > 1){
            mid = st + (ed - st) / 2;
            if(is_possible(mid))
                st = mid;
            else ed = mid - 1;
        }
        if(is_possible(ed))
            cout << ed << endl;
        else cout << st << endl;
    }
}