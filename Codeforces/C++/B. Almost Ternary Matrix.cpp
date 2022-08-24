
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int a, b;
        cin >> a >> b;
        int x = 1, y = 1;
        for(int i = 0; i < a; i++)
        {
            if(i % 2 != 0)
            {
                x = !x;
                y = x;
            }
            int d = y;
            cout << y << " ";
            for(int j = 1; j < (b/2); j++)
            {
                int z = y;
                if(j % 2 != 0)
                {
                    z = !y;
                }
                cout << z << " " << z << " ";
            }
            if(b % 4 != 0) cout << !d << endl;
            else if(b % 4 == 0) cout << d << endl;
            else cout << endl;
        }
    }
}
