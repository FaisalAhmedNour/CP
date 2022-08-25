
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, a = 0, b = 1;
    cin >> n;
    if(n == 1) cout << 0;
    else if(n == 2) cout << 0 << " " << 1;
    else
    {
        cout << a << " " << b << " ";
        for(int i = 3; i <= n; i++)
        {
            cout << a+b << " ";
            long long int temp = b;
            b = a + b;
            a = temp;
        }
    }
}
