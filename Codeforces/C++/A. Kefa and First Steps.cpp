
#include<iostream>

using namespace std;

int main()
{
    int day;
    cin >> day;
    int income[day];
    for(int i = 0; i < day; i++)
    {
        cin >> income[i];
    }
    int count = 1, max = 1;
    for(int i = 0; i < day -1; i++)
    {
        income[i] <= income[i+1] ? count++ : count = 1;
        if(max < count)
        {
            max = count;
        }
    }
    cout << max;

    return 0;
}
