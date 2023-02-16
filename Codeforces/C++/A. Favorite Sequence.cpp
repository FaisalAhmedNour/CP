#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; cin >> arr[i], i++)
            ;
        for (int i = 0; i < n / 2; i++)
        {
            cout << arr[i] << " " << arr[n - i - 1] << " ";
        }
        if (n % 2)
        {
            cout << arr[n / 2] << endl;
        }
        else
        {
            cout << endl;
        }
    }
}