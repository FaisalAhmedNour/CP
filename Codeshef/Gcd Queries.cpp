/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, q;
        cin >> n >> q;
        int arr[n];
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for(int i = 0; i < q; i++){
            int a, b;
            cin >> a >> b;
            int x = 0;
            for(int j = 0; j < a-1; j++)
            {
                x = __gcd(x,arr[j]);
            }
            for(int j = b; j < n; j++)
            {
                x = __gcd(x,arr[j]);
            }
            cout << x << endl;
        }
    }
}
*/

//pre computed
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, q;
        cin >> n >> q;
        int arr[n+10], for_arr[n+10], back_arr[n+10];
        for_arr[0] = back_arr[n+1] = 0;
        for(int i = 1; i <= n; ++i)
        {
            cin >> arr[i];
        }
        for(int i = 1; i <= n; ++i)
        {
            for_arr[i] = __gcd(for_arr[i-1],arr[i]);
        }
        for(int i = n; i >= 1; --i)
        {
            back_arr[i] = __gcd(back_arr[i+1], arr[i]);
        }
        while(q--)
        {
            int a, b;
            cin >> a >> b;
            cout << __gcd(for_arr[a-1],back_arr[b+1]) << endl;
        }
    }
}
