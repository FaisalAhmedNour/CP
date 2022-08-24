
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, left = 0;
        cin >> n;
        int element[n];
        for(int i = 0; i < n; i++)
        {
            cin >> element[i];
            if(element[i] < 0)
            {
                element[i] *= -1;
                element[left++] *= -1;
            }
        }
        int i;
        for(i = 1; i < n; i++)
        {
            if(element[i] < element[i-1])
                break;
        }
        cout << (i >= n ? "YES\n" : "NO\n");
    }
}
