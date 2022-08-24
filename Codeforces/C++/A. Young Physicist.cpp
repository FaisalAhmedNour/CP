
#include<iostream>
using namespace std;

int main()
{
    int n, sum, yes = 0;
    cin >> n;
    int vectr[n][3];
    for(int i = 0; i < n; i++)
    {
        cin >> vectr[i][0] >> vectr[i][1] >> vectr[i][2];
    }

    for(int j = 0; j < 3 ; j++)
    {
        sum = 0;
        for(int i = 0; i < n; i++)
        {
            sum = sum + vectr[i][j];
        }
        if(sum ==  0)
        {
            yes++;
        }
    }
    if(yes == 3)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}
