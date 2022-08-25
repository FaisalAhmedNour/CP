
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, cnt = 0;
        cin >> n;
        while(n != 0)
        {
            if(n % 2) cnt++;
            n /= 2;
        }
        int sum = 0;
        for(int i = 0; i < cnt; i++)
        {
            sum += pow(2,i);
        }
        cout << sum << endl;
    }
}
