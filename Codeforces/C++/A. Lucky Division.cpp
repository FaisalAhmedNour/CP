
#include<iostream>

using namespace std;

int main()
{
    int num, count = 0, digit = 0;
    cin >> num;
    int n = num;
    while(n > 0)
    {
        n = n / 10;
        digit++;
    }
    n = num;
    for(int i = 1; i <= digit;i++)
    {
        if(n % 10 == 4 || n % 10 == 7)
        {
            n = n / 10;
            count++;
        }
        else
            break;
    }
    if(count == digit)
    {
        cout << "YES";
    }
    else
    {
        if(num % 4 != 0 && num % 7 != 0 && num % 47 != 0 && num % 74 != 0)
        {
            cout << "NO";
        }
        else
        {
            cout << "YES";
        }
    }
    return 0;
}
