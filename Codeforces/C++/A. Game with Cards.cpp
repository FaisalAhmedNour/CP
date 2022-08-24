
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    while(N--)
    {
        int n, m;

        cin >> n;
        int alice[n];
        for(int i = 0; i < n; ++i)
        {
            cin >> alice[i];
        }
        int x = *max_element(alice,alice+n);

        cin >> m;
        int bob[m];
        for(int i = 0; i < m; ++i)
        {
            cin >> bob[i];
        }
        int y = *max_element(bob,bob+m);

        if(x >= y) cout << "Alice" << endl;
        else cout << "Bob" << endl;

        if(x <= y) cout << "Bob" << endl;
        else cout << "Alice" << endl;
    }
}
