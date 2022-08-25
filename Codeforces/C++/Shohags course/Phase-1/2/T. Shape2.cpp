
#include<bits/stdc++.h>
using namespace std;

void print(int n, int l)
{
    for(int i = 1; i <= n-l; i++)
    {
        cout << " ";
    }
    for(int i = 1; i <= (l * 2) - 1; i++)
    {
        cout << "*";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        print(t,i);
    }
}
