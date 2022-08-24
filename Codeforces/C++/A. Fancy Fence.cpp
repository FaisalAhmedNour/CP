
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
        if(360%(180-n)) cout<< "NO\n";
        else cout << "YES\n";
    }
}
