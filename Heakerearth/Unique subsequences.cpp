
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T; cin >> T;
    while(T--){
        int n, count = 0; cin >> n;
        string nm; cin >> nm;
        for(int i = 0; i < n; ++i){
            if(nm[i] != nm[i+1]){
                count++;
            }
        }
        cout << count << endl;
    }
}
