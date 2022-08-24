
#include<iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;
    int test[num];
    int even = 0, odd = 0;
    //input
    for(int i = 0; i < num; i++)
    {
        cin >> test[i];
        test[i] % 2 == 0 ? even++ : odd++;
    }
    if(even == 1)
    {
        for(int i = 0; i < num; i++)
        {
            if(test[i] % 2 == 0)
            {
                cout << i+1;
                break;
            }
        }
    }
    else
    {
        for(int i = 0; i < num; i++)
        {
            if(test[i] % 2 != 0)
            {
                cout << i+1;
                break;
            }
        }
    }




    return 0;
}
