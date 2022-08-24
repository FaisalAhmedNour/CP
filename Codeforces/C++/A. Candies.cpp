
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
        for(int i = 3, k = 2; i <= n; k = k * 2, i += k)
        {
            if(n % i == 0)
            {
                cout << n / i << endl;
                f = 0;
                break;
            }
        }
        if(f) cout << "1\n";
    }
}
