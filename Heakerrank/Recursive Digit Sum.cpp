
#include<bits/stdc++.h>
using namespace std;

long long int sumofstring(string s)
{
    long long int sum = 0;
    for(auto v : s)
    {
        sum += v - '0';
    }
    return sum;
}

long long int sum(long long int n)
{
    if(n == 0) return 0;
    return (n % 10) + sum(n/10);
}

int main()
{
    long long int k;
    string s;
    cin >> s >> k;
    long long int n = k*(sumofstring(s));
    while(n > 9)
    {
        n = sum(n);
    }
    cout << n;
}
