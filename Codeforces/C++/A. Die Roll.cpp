
#include<bits/stdc++.h>
using namespace std;

int main()
{
        int a, b;
        cin >> a >> b;
        int mx = max(a,b);
        int need = 7 - mx;
        int div = __gcd(6,need);
        cout << need/div << "/" << 6/div;
}
