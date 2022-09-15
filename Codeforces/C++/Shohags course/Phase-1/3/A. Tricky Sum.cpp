
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n;
        cin >> n;
        long long int sum = (n * (n + 1)) / 2, sum_n = 0, sum_p;
        int i = 1;
        while(i <= n)
        {
            sum_n -= i;
            i *= 2;
        }
        sum_p = sum + sum_n;
        cout << sum_p + sum_n << endl;
    }
}
