
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int n, a = 0;
        cin >> n;
        string pal;
        cin >> pal;
        if(pal.size() % 2 == 0)
        {
            n = n / 2;
            for(int i = n-1; i >= 0; --i)
            {
                if(pal[n-1] == pal[i])
                {
                    a++;
                }
                else
                    break;
            }
            cout << a*2 << endl;
        }
        else
        {
            n = (n-1) / 2;
            for(int i = n-1; i >= 0; --i)
            {
                if(pal[n] == pal[i])
                {
                    a++;
                }
                else
                    break;
            }
            cout << a*2+1 << endl;
        }

    }
}
