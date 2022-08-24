
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        int j = 9;
        while(n > j)
        {
            n = n - j;
            j--;
        }
        cout << n;
        for(int k = j+1; k <= 9; k++)
        {
            cout << k;
        }
        cout << "\n";
    }
    return 0;
}
