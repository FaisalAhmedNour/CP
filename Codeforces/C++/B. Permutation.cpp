
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
        cout << "2\n";
        for(int i = 1; i <= n; i += 2)
        {
            for(int j = i; j <= n; j *= 2)
            {
                cout << j << " ";
            }
        }
        cout << endl;
    }
}
