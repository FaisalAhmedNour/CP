
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int a, mx = 0;
    cin >> a;
    while(a--)
    {
        long int x;
        cin >> x;
        if(x > mx)
        {
            mx = x;
        }
    }
    cout << mx;
    return 0 ;
}
