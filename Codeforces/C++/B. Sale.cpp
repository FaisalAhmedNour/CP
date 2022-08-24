
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, ability, sum = 0;
    cin >> n >> ability;
    int tv[n];
    for(int i = 0; i < n; i++) cin >> tv[i];
    sort(tv, tv+n);
    for(int i = 0; tv[i] < 0 && i < ability; i++)
        sum += tv[i];
    cout << sum*-1;
}
