
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m, x, paper = 1;
        cin >> n >> m >> x;
        while(n % 2 == 0)
        {
            n = n / 2;
            paper += paper;
        }
        while(m % 2 == 0)
        {
            m = m / 2;
            paper += paper;
        }
        if(paper >= x) cout << "YES\n";
        else cout << "NO\n";
    }
}
