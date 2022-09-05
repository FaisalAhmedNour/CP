#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if((a+b+c) % 3 == 0)
            cout << "Case " << i << ": Peaceful\n";
        else cout << "Case " << i << ": Fight\n";
    }
}