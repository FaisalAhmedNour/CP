
#include<bits/stdc++.h>
using namespace std;

void print(int n, int m)
{
    int sum = 0;
    for(int i = n; i <= m; i++)
    {
        cout << i << " ";
        sum += i;
    }
    cout << "sum =" << sum << endl;
}

int main()
{
    while(true)
    {
        int x, y;
        cin >> x >> y;
        if(x <= 0 || y <= 0) return 0;
        if(x > y) swap(x,y);
        print(x,y);
    }
}
