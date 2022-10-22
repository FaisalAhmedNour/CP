#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, f = 0;
    string s;
    cin >> a >> b >> s;
    if(s[a] == '-')
        f = 1;
    for(int i = 0; i < a+b+1; i++){
        if(i == a)
            continue;
        else{
            if(!(s[i] >= '0' && s[i] <= '9'))
                f = 0;
        }
    }
    if(f)
        cout << "Yes\n";
    else cout << "No\n";
}