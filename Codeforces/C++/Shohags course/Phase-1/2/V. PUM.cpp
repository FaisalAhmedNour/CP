
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 1, j = 1; i <= n; i++, j += 4)
    {
        cout << j << " " << j + 1 << " " << j + 2 << " PUM" << endl;
    }
    return 0;
}
