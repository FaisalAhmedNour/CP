
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num, level_1, level_2, cnt = 0, cont = 0;
    cin >> num;


    cin >> level_1;
    int level1[level_1];
    for(int i = 0; i < level_1; i++)
    {
        cin >> level1[i];
    }
    cin >> level_2;
    int level2[level_2];
    for(int i = 0; i < level_2; i++)
    {
        cin >> level2[i];
    }


    for(int i = 1; i <= num; i++)
    {
        for(int j = 0; j < level_1; j++)
        {
            if(i == level1[j])
            {
                cnt++;
            }
        }
        for(int j = 0; j < level_2; j++)
        {
            if(i == level2[j])
            {
                cnt++;
            }
        }
        if(cnt > 0)
        {
            cont++;
        }
        cnt = 0;
    }


    if(cont == num)
    {
        cout << "I become the guy.";
    }
    else
    {
        cout << "Oh, my keyboard!";
    }

    return 0;
}
