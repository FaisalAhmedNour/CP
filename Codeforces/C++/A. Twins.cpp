
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int coins, my_coins = 0, sum = 0, need = 0;
    cin >> coins;
    int coins_values[coins];
    for(int i = 0; i < coins; i++)
    {
        cin >> coins_values[i];
        sum = sum + coins_values[i];
    }

    sort(coins_values,coins_values+coins);

    for(int i = coins-1; i >= 0; i--)
    {
        my_coins = my_coins + coins_values[i];
        need++;
        if(my_coins > sum-my_coins)
        {
            break;
        }
    }
    cout << need;

    return 0;
}
