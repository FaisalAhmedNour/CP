
#include<bits/stdc++.h>
using namespace std;

vector<long long> printFibb(int n)
    {
        vector<long long> arr(n);
        arr[0] = 1;
        arr[1] = 1;
        for(int i = 2; i < n; i++)
        {
            arr[i] = arr[i-1] + arr[i-2];
        }
        return arr;
    }

int main()
{
    int n;
    cin >> n;
    for(auto v : printFibb(n))
    {
        cout << v << " ";
    }
}
