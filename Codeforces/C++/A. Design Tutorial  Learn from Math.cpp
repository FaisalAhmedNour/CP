
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, x = 0, y = 0;
    cin >> a;
    for(int i = 4; i < a; i++)
    {
        for(int j = 2; j < i; j++)
        {
            if(i%j == 0)
            {
                x = 1;
            }
        }
        for(int j = 2; j < a-i; j++)
        {
            if((a-i)%j == 0)
            {
                y = 1;
            }
        }
        if(x == 1 && y == 1)
        {
            cout << i << " " << a-i;
            break;
        }
        x = y = 0;
    }
}
