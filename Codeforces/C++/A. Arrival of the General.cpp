
#include<iostream>
using namespace std;

int main()
{
    int soldiers, tall, small, moves = 0, here;
    cin >> soldiers;

    int hight[soldiers];
    for(int i = 0; i < soldiers; i++)
    {
        cin >> hight[i];
    }

    tall = hight[0];
    small = hight[0];

    for(int i = 0; i < soldiers; i++)
    {
        tall = max(hight[i],tall);
        small = min(hight[i],small);
    }

    for(int i = 0; i < soldiers; i++)
    {
        if(tall == hight[i])
        {
            moves = moves + i;
            here = i;
            break;
        }
    }

    for(int i = here; i > 0; i--)
    {
        swap(hight[i],hight[i-1]);
    }

    for(int i = soldiers-1; i >= 0; i--)
    {
        if(small == hight[i])
        {
            moves = moves + soldiers-1-i;
            break;
        }
    }
    cout << moves;

    return 0;
}
