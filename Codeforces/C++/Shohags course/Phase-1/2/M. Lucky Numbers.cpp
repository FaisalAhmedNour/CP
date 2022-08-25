
#include<bits/stdc++.h>
using namespace std;

bool lucy(int n)
{
    while(n != 0)
    {
        if(!(n % 10 == 4 || n % 10 == 7)) return false;
        n = n / 10;
    }
    return true;
}

int main()
{
    int a, b, f = 1;
    cin >> a >> b;
    if(a > b) swap(a,b);
    for(int i = a; i <= b; i++)
    {
        if(lucy(i))
        {
            cout << i << " ";
            f = 0;
        }
    }
    if(f) cout << "-1";
}
