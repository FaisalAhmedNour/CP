
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int lenth, i, count = 0, len;
    cin >> lenth;
    int ans = 0;
    int pisce[3];
    for(i = 0; i < 3; cin >> pisce[i], i++);

    sort(pisce,pisce+3);

    if(pisce[0] + pisce[1] + pisce[2] == lenth)
    {
        ans = 3;
    }
    if(lenth % pisce[0] == 0)
    {
        ans = lenth / pisce[0];
    }
    else
    {
        len = lenth / pisce[0];
        for(i = len-1; i >= 0; i--)
        {
            if((lenth-(pisce[0]*i)) % pisce[1] == 0)
            {
                ans = max(i + ((lenth-(pisce[0]*i)) / pisce[1]),ans);
            }
            if((lenth-(pisce[0]*i)) % pisce[2] == 0)
            {
                ans = max(i + ((lenth-(pisce[0]*i)) / pisce[2]),ans);
            }
        }
    }
    cout << ans;
}
