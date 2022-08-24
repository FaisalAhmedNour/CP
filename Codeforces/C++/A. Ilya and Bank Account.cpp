
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int balance;
    cin >> balance;
    if(balance >= 0)
        cout << balance;
    else
    {
        balance = balance * (-1);
        int x = balance % 10;
        int y = (balance % 100) / 10;
        if(x > y)
            cout << (-1) * (balance / 10);
        else
            cout << (-1) * (((balance / 100) * 10) + x);
    }
}
