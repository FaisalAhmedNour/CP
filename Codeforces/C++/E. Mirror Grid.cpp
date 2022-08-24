
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        char arr[n][n];
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int count = 0;
        for(int i = 0; i < (n + 1) / 2; i++)
        {
            for(int j = 0; j < n / 2; j++)
            {
                int zro = 0, one = 0;
                if(arr[i][j] == '1') one++;
                else zro++;
                if(arr[j][n-1-i] == '1') one++;
                else zro++;
                if(arr[n-1-j][i] == '1') one++;
                else zro++;
                if(arr[n-1-i][n-1-j] == '1') one++;
                else zro++;
                count += min(zro,one);
            }
        }
        cout << count << endl;
    }
}
