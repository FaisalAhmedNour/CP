
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string bra;
        cin >> bra;
        stack<char> test;
        int f = 1;
        for(int i = 0; i < bra.size(); i++)
        {
            if(bra[i] == '(' || bra[i] == '{' || bra[i] == '[')
            {
                test.push(bra[i]);
            }
            else
            {
                if(bra[i] == ')' && test.top() == '(')
                {
                    test.pop();
                }
                else if(bra[i] == '}' && test.top() == '{')
                {
                    test.pop();
                }
                else if(bra[i] == ']' && test.top() == '[')
                {
                    test.pop();
                }
                else
                {
                    cout << "NO\n";
                    f = 0;
                    break;
                }
            }
        }
        if(f) cout << "YES\n";
    }
}
