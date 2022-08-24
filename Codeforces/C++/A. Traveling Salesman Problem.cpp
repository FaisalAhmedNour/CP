
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, x_mx = 0, x_mn = 0, y_mx = 0, y_mn = 0;
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;

            if(x == 0 && y > 0)
                y_mx = max(y,y_mx);

            if(x == 0 && y < 0)
                y_mn = min(y,y_mn);

            if(x > 0 && y == 0)
                x_mx = max(x,x_mx);

            if(x < 0 && y == 0)
                x_mn = min(x,x_mn);
        }
        x_mn = abs(x_mn);
        y_mn = abs(y_mn);
        //cout << y_mx << " " << y_mn << " " << x_mx << " " << x_mn << "\n";
        cout << (y_mx * 2) + (y_mn * 2) + (x_mx * 2) + (x_mn * 2) << "\n";
    }
}
