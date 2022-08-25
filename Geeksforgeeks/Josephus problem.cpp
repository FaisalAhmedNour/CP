
#include<bits/stdc++.h>
using namespace std;

int josephus(int n, int k)
{
    int arr[22] = {0};
    int c = n, x = 0, i = 0;
    while(i <= n && c > 1)
    {
        i++;
        if(arr[i] == 0)
        {
            x++;
        }
        if(x == k)
        {
            c--;
            arr[i]++;
            x = 0;
        }
        if(i == n)
        {
            i = 0;
        }
    }
    for(int i = 1; i <= n; i++)
    {
        if(arr[i] == 0) return i;
    }
}

int main()
{
    int n, k;
    cin >> n >> k;
    cout << josephus(n, k);
}
