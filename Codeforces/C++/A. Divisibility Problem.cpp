
#include<iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;
    while(num--)
    {
        long long int num1, num2;
        cin >> num1 >> num2;
        if(num1 % num2 == 0)
        {
            cout << "0\n";
        }
        else
        {
            cout << num2 - (num1 % num2) << endl;
        }
    }

    return 0;
}
