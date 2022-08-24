
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int n, count = 0, x = 0, y = 0;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i] % 2 == 0) x++;
            else y++;
        }
        if(x == 0) cout << "-1\n";
        else if(x == y || x-1 == y)
        {
            for(int i = 0; i < n; i++)
            {
                if(i%2 != a[i]%2)
                {
                    count++;
                }
            }
            cout << count/2 << endl;
        }
        else cout << "-1\n";
    }
}

