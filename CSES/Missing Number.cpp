
#include <bits/stdc++.h>

using namespace std;

int missing_no(int arr[], int n)
{
    int x1 = arr[0];
    for (int i = 1; i < n - 1; i++)
    {
        x1 = x1 ^ arr[i];
    }
    int x2 = 1;
    for (int i = 2; i <= n; i++)
    {
        x2 = x2 ^ i;
    }
    return (x1 ^ x2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int arr[n - 1];
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }
    int num = missing_no(arr, n);
    cout << num << endl;
}