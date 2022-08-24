
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int price, coin, coins = 0;
    cin >> price >> coin;
    while(1)
    {
        coins++;
        if((price*coins) % 10 == 0)
            break;
        if(((price*coins)-coin) % 10 == 0)
            break;
    }
    cout << coins;
}
