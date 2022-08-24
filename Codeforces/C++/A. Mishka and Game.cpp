
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T, mi = 0, ci = 0;
    cin >> T;
    while(T--)
    {
        int m, c;
        cin >> m >> c;
        if(m == c) continue;
        else if(m > c ) mi++;
        else ci++;
    }
    if(mi > ci) cout << "Mishka";
    else if(mi == ci) cout << "Friendship is magic!^^";
    else cout << "Chris";
}

