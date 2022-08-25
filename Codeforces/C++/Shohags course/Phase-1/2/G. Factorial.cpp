
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int N[21];
    N[0] = 1;
    for(int i = 1; i <= 20; i++)
    {
        N[i] = N[i-1] * i;
    }
    int n;
    cin >> n;
    while(n--)
    {
        int a;
        cin >> a;
        cout << N[a] << endl;
    }
    return 0 ;
}
