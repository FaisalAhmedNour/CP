
#include<iostream>

using namespace std;

int main()
{
    int num, candies;
    cin >> num;
    while(num--)
    {
        cin >> candies;
        if(candies % 2 == 0)
            cout << (candies / 2) - 1 << endl;
        else
            cout << (candies - 1) / 2 << endl;
    }
}
