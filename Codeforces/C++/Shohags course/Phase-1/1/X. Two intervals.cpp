
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(d < a || c > b) cout << "-1";
    else cout << max(a,c) << " " << min(b,d);
}
