
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin >> k;
    cout << k / 2 << "\n";
    for(int i = 1; i <= (k/2)-1; i++)
        cout << 2 << " ";
    if(k % 2 == 1) cout << 3;
    else cout << 2;
}
