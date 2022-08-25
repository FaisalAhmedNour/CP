
#include<bits/stdc++.h>
using namespace std;

void print(int n)
{
    if(n == 0) cout << "0\n";
    else
    {
        while(n != 0)
        {
            cout << n % 10 << " ";
            n = n / 10;
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        print(x);
    }
}
