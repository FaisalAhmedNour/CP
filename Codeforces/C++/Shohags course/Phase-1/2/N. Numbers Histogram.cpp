
#include<bits/stdc++.h>
using namespace std;

void print(char s, int n)
{
    for(int i = 1; i <= n; i++)
    {
        cout << s;
    }
    cout << endl;
}

int main()
{
    char smbl;
    int n;
    cin >> smbl >> n;
    for(int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        print(smbl,x);
    }
}
