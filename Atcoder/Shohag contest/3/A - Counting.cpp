
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if(a == 0) cout << b;
    else
    {
        int c = b - a;
        if(c < 0) cout << 0;
        else cout << c + 1;
    }
}
