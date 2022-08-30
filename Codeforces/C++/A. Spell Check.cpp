#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string name, real = "imrTu";
        cin >> name ;
        sort(name.begin(), name.end());
        sort(real.begin(), real.end());
        if(name == real)
            cout << "YES\n";
        else cout << "NO\n";
    }
}
