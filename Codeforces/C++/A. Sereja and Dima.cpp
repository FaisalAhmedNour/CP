
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x = 0, y = 0;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int i = 0, j = n-1, k = 1; k <= n; k++)
    {
        if(arr[i] > arr[j])
        {
            if(k % 2 == 1) x += arr[i];
            else y += arr[i];
            i++;
        }
        else
        {
            if(k % 2 == 1) x += arr[j];
            else y += arr[j];
            j--;
        }
    }
    cout << x << " " << y;
}
