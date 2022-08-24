
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[1001];
    for(int i = 1, x = 1; i < 1001; x++)
    {
        if(x % 3 != 0 && x % 10 != 3)
        {
            a[i] = x;
            i++;
        }
    }
    int T;
    cin >> T;
    while(T--)
    {
        int s;
        cin >> s;
        cout << a[s] << endl;
    }
}
