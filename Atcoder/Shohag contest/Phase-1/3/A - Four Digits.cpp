
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, cnt = 0;
    cin >> a;
    int b = a;
    while(a != 0)
    {
        cnt++;
        a /= 10;
    }
    for(int i =1; i <= 4-cnt; i++)
    {
        cout << 0;
    }
    if(b != 0)cout << b;
}
