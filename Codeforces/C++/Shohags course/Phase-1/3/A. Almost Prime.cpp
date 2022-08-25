
#include<bits/stdc++.h>
using namespace std;

int is_prime(int n)
{
    for(int i = 2; i <= n/2; i++)
    {
        if(n % i == 0) return 0;
    }
    return 1;
}

int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    vector<int> prime;
    for(int i = 2; i <= n; i++)
    {
        if(is_prime(i)) prime.push_back(i);
    }
    for(int i = 2; i <= n; i++)
    {
        int count = 0;
        for(int j = 0; j < prime.size() && prime[j] <= i; j++)
        {
            if(i % prime[j] == 0) count++;
        }
        if(count == 2) cnt++;
    }
    cout << cnt;
}
