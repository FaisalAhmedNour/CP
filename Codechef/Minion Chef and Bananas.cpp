#include<bits/stdc++.h>
using namespace std;
const int N = 100010;
long long int bananas[N];
long long int pile, hours;

bool is_sufficient(long long int H)
{
    long long int sum = 0;
    for(int i = 0; i < pile; i++)
    {
        if(bananas[i] % H == 0)
            sum += bananas[i] / H;
        else sum += (bananas[i] / H) + 1;
    }
    //cout << sum << endl;
    return sum <= hours;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> pile >> hours;
        for(int i = 0; i < pile; i++)
            cin >> bananas[i];
        long long int st = 0, ed = 1000000000, mid;
        while(ed - st > 1)
        {
            mid = (st + ed) / 2;
            //cout << mid << endl;
            if(is_sufficient(mid))
                ed = mid;
            else st = mid + 1;
        }
        if(is_sufficient(st))
            cout << st << endl;
        else cout << ed << endl;
    }
}