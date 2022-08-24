
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int x = 0, y;
        for(int i = 1; i <= 4; i++)
        {
            cin >> y;
            x += y;
        }
        if(x == 0) cout << "0\n";
        else if(x == 4) cout << "2\n";
        else cout << "1\n";
    }
}
