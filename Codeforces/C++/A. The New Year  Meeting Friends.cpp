/*
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int x = max(max(a,b),max(b,c));
    int y = min(min(a,b),min(b,c));
    cout << x-y;
}
*/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int x = max({a,b,c});
    int y = min({a,b,c});
    cout << x-y;
}
