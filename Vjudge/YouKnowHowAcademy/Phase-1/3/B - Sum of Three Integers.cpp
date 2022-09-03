
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, cnt = 0;
    cin >> x >> y;
    for(int i = 0; i <=x; i++)
        for(int j = 0; j <= x; j++)
        {
            int z = y - i - j;
            if(z >= 0 && z <= x)
                cnt++;
        }
    cout << cnt;
}

