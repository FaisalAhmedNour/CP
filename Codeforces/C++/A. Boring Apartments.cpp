#include<bits/stdc++.h>
using namespace std;

int digit(int n)
{
    int count = 0, sum = 0;
    while(n != 0)
    {
        count++;
        sum = sum + count;
        n = n / 10;
    }
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int num = digit(n);
        n = n % 10;
        cout << num + 10 * (n - 1) << "\n";
    }
}
