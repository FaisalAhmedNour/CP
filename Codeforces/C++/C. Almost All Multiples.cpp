#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        if(n % x != 0)
        {
            cout << -1 << endl;
            //continue;
        }
        else{
            cout << x << ' ';
            for (int i = 2; i < n; i++)
            {
                if (x == i)
                {
                    for (int j = 2;; j++)
                    {
                        if (n % x*j == 0)
                        {
                            x *= j;
                            cout << x << ' ';
                            break;
                        }
                    }
                }
                else
                {
                    cout << i << ' ';
                }
            }
            cout << 1 << endl;
        }
    }
}
