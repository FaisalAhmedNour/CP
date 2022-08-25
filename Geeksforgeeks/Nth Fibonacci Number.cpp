
//--------------------without recortion----------------
#include<bits/stdc++.h>
using namespace std;

long long int nthFibonacci(long long int n){
        long long int N = 1000000007;
        long long int x = 1, y = 1;
        if(n == 1) return 1;
        else if(n == 2) return 1;
        for(int i = 3; i <= n; i++)
        {
            long long int temp = (x + y) % N;
            x = y;
            y = temp;
        }
        return y;
    }

int main()
{
    int n;
    cin >> n;
    cout << nthFibonacci(n);
}

//------------with recurtion----------------
//but time limit exceeded
/*
#include<bits/stdc++.h>
using namespace std;

long long int nthFibonacci(long long int n)
{
    long long int N = 1000000007;
    long long int x, y;
    if(n == 1) return x = 1;
    if(n == 2) return x = 1;
    return (nthFibonacci(n-1) % N + nthFibonacci(n-2)% N);
}

int main()
{
    int n;
    cin >> n;
    cout << nthFibonacci(n);
}
*/
