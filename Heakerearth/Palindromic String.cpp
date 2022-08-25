
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string sr;
    cin >> sr;
    int n = sr.size(), f = 0;
    for(int i = 0; i < (n/2)-1; ++i){
        if(sr[i] != sr[n-1-i]){
            f = 1;
        }
    }
    if(f == 1){
        cout << "NO";
    }
    else cout << "YES";
}
