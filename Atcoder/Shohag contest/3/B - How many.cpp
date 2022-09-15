
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, cnt = 0;
    cin >> x >> y;
    for(int i = 0; i <=x; i++)
        for(int j = 0; j <= x; j++)
            for(int k = 0; k <= x; k++)
                if(i+j+k <= x && i*j*k <= y)
                    cnt++;
    cout << cnt;
}
