
#include<iostream>
using namespace std;

int main()
{
    int T, i = 1;
    cin >> T;

    while(i <= T)
    {
        int X, Y, Z;
        cin >> X >> Y >> Z;

        if(Z*2 + X >= Y)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
        i++;
    }

    return 0;
}
