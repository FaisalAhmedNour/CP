#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x, n, m = 0, i = 1, flag = 0;
    cin >> n;
    x = n;
    while(x != 0)
    {
        int t = x % 10;
        if(t != 0) flag = 1;
        if(flag)
        {
            m = (m * i) + t;
            i = 10;
        }
        //cout << m << endl;
        x /= 10;
    }
    cout << m << endl;
    if(n == m) cout << "YES";
    else cout << "NO";
}
