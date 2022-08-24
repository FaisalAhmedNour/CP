
#include<iostream>

using namespace std;

int main()
{
    int amount;
    cin >> amount;
    int sum = 0;
    while(amount != 0)
    {
        if(amount >= 100)
        {
            sum = sum + amount / 100;
            amount =  amount % 100;
        }
        else if(amount >= 20)
        {
            sum = sum + amount / 20;
            amount =  amount % 20;
        }
        else if(amount >= 10)
        {
            sum = sum + amount / 10;
            amount =  amount % 10;
        }
        else if(amount >= 5)
        {
            sum = sum + amount / 5;
            amount =  amount % 5;
        }
        else
        {
            sum = sum + amount / 1;
            amount =  amount % 1;
        }
    }
    cout << sum;
}
