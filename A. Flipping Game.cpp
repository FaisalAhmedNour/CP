#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int cnt = 0;
            for (int k = 0; k < n; k++)
            {
                if (k >= i && k <= j)
                {
                    cnt += 1 - arr[k];
                }
                else
                {
                    cnt += arr[k];
                }
            }
            mx = max(mx, cnt);
        }
    }
    cout << mx;
}
