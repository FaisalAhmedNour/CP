

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        if(a == b)
            cout << "0\n";
        else if(a > b && (a-b) % 10 == 0)
            cout << (a-b) / 10 << endl;
        else if(a > b && (a-b) % 10 != 0)
            cout << (a-b) / 10 + 1 << endl;
        else if(a < b && (b-a) % 10 == 0)
            cout << (b-a) / 10 << endl;
        else
            cout << (b-a) / 10 + 1 << endl;
    }
}
