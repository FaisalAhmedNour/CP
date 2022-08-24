
#include<iostream>

using namespace std;

int main()
{
    int groups;
    cin >> groups;
    int count1 = 0, count2 = 0, count3 = 0, count4 = 0, num;
    while(groups--)
    {
        cin >> num;
        if(num == 1)
        {
            count1++;
        }
        if(num == 2)
        {
            count2++;
        }
        if(num == 3)
        {
            count3++;
        }
        if(num == 4)
        {
            count4++;
        }
    }

    //4
    int taxi = count4;

    //3
    if(count3 != 0 && count1 == 0)
    {
        taxi = taxi + count3;
    }
    if(count3 != 0 && count1 != 0)
    {
        if(count3 > count1)
        {
            taxi = taxi + count3;
            count1 = 0;
        }
        else
        {
            taxi = taxi + count3;
            count1 = count1 - count3;
        }
    }

    //2
    if(count2 != 0 && count1 == 0)
    {
        if(count2 % 2 == 0)
        {
            taxi = taxi + count2 / 2;
            count2 = 0;
        }
        else
        {
            taxi = taxi + count2 / 2 + 1;
            count2 = 0;
        }
    }

    if(count2 != 0 && count1 != 0)
    {
        if(count1 % 2 == 0)
        {
            if(count1 / 2 > count2)
            {
                taxi = taxi + count2;
                count1 = count1 - count2 * 2;
                count2 = 0;
            }
            else
            {
                taxi = taxi + count1 / 2;
                count2 = count2 - count1 / 2;
                count1 = 0;
            }
        }
        else
        {
            if(count1 / 2 + 1 > count2)
            {
                taxi = taxi + count2;
                count1 = count1 - count2 * 2;
                count2 = 0;
            }
            else
            {
                taxi = taxi + count1 / 2 + 1;
                count2 = count2 - (count1 / 2 + 1);
                count1 = 0;
            }
        }
    }
    if(count2 != 0)
    {
        if(count2 % 2 == 0)
        {
            taxi = taxi + count2 / 2;
        }
        else
        {
            taxi = taxi + count2 / 2 + 1;
        }
    }

    //1
    if(count1 != 0)
    {
        if(count1 % 4 == 0)
        {
            taxi = taxi + count1 / 4;
        }
        else
        {
            taxi = taxi + count1 / 4 + 1;
        }
    }

    //taxi
    cout << taxi;

    return 0;
}
