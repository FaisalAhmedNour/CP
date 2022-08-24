
#include<iostream>
using namespace std;

int main()
{
    string players;
    cin >> players;

    int len = players.size();
    int result = 0;
    for(int i = 0; i < len-1; i++)
    {
        if(players[i] == players[i+1])
        {
            result++;
        }
        else
        {
            if(result >= 6)
            {
                break;
            }
            else
            {
                result = 0;
            }
        }
    }

    if(result >= 6)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
