
#include<bits/stdc++.h>
using namespace std;

int count_digit(long int n)
{
    int count = 0;
    while(n > 0)
    {
        n = n / 10;
        count++;
    }
    return count;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long int n;
        cin >> n;
        int d = count_digit(n);
        long int p = 1;
        for(int i = 1; i <= d-1; i++)
        {
            p *= 10;
        }
        cout << n - p << endl;
    }
}
