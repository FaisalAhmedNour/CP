
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, t;
    cin >> a >> b >> t;
    if(t % a == 0 || t % b == 0)
    {
        cout << "YES";
        return 0;
    }
    else
    {
        int c = t / a;
        for(int i = c; i >= 0; i--)
        {
            if((t-(i*a))%b ==  0)
            {
                cout << "YES";
                return 0;
            }
        }
        cout << "NO";
        return 0;
    }
}
