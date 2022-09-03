
#include<bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
long long int arr[N];

int main()
{
    int n, m;
    cin >> n >> m;
    while(m--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        arr[a] = arr[a] + c;
        arr[b+1] = arr[b+1] - c;
    }
    long long sum = 0, mx= -1;
    for(int i = 1; i <= n; i++)
    {
        sum = sum + arr[i];
        mx = max(mx,sum);
    }
    cout << mx;
}
