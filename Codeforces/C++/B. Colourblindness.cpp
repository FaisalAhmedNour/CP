#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, f = 1;
        cin >> n;
        string row1, row2;
        cin >> row1 >> row2;
        for(int i = 0; i < n; i++)
        {
            if(row1[i] == 'R' && row2[i] != 'R' || row1[i] != 'R' && row2[i] == 'R')
            {
                f = 0;
                break;
            }
        }
        if(f) cout << "YES\n";
        else cout << "NO\n";
    }
}
