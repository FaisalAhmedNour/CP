
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
        int c1 = n/3, c2 = n/3, x = n%3;
        c2 += x/2;
        c1 += x%2;
        cout << c1 << " " << c2 << "\n";
    }
}
