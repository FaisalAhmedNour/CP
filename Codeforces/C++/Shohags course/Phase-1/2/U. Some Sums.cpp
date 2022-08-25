
#include<bits/stdc++.h>
using namespace std;

int print(int n)
{
    int sum = 0;
    while(n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    int n, a, b, sum = 0;
    cin >> n >> a >> b;
    if(a > b) swap(a,b);
    for(int i = 1; i <= n; i++)
    {
        if(print(i) >= a && print(i) <= b) sum += i;
    }
    cout << sum;
}
