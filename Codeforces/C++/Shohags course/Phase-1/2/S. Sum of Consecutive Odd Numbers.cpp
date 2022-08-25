
#include<bits/stdc++.h>
using namespace std;

void print(int n, int m)
{
    int sum = 0;
    for(int i = n + 1; i < m; i++)
    {
        if(i % 2 == 1) sum += i;
    }
    cout << sum << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x, y;
        cin >> x >> y;
        if(x > y) swap(x,y);
        print(x,y);
    }
}
