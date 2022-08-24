
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, d, sum = 0;
    cin >> a >> b >> c >> d;
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '1') sum += a;
        if(s[i] == '2') sum += b;
        if(s[i] == '3') sum += c;
        if(s[i] == '4') sum += d;
    }
    cout << sum;
}
