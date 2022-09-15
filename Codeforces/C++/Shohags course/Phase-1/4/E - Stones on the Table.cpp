#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, cnt = 0;
    string stone;
    cin >> N >> stone;
    for(int i = 1; i < N; i++){
        if(stone[i] == stone[i-1])
            cnt++;
    }
    cout << cnt;
}