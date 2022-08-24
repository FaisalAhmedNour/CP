
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, stick;
        cin >> n;
        stick = n / 2;
        stick += n % 2;
        cout << stick << "\n";
    }
}
