
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m, n, f = 0;
    cin >> m >> n;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            char x;
            cin >> x;
            if(x == 'C' || x == 'M' || x == 'Y')
                f = 1;
        }
    }
    if(f) cout << "#Color";
    else cout << "#Black&White";
}
