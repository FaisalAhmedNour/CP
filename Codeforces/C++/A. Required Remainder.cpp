
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int x, y, n, f = 1;
        cin  >> x >> y >> n;
        if(x > 0)
        {
            int m = n / x;
            if((m*x) + y <= n) cout << (m*x) + y << endl;
            else cout << ((m-1)*x) + y << endl;
        }
        else cout << "0\n";
    }
}
