#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        string str;
        vector<char> code;
        cin >> n >> str;
        for(int i = n-1; i >= 0;)
        {
            if(str[i] == '0')
            {
                int ch = ((str[i-2] - '0') * 10) + (str[i-1] - '0');
                char c = 'a' + (ch-1);
                code.push_back(c);
                i -= 3;
            }
            else 
            {
                int ch = (str[i] - '0');
                char c = 'a' + (ch-1);
                 code.push_back(c);
                i--;
            }
        }
        for(int i = code.size()-1; i >= 0; i--)
            cout << code[i];
        cout << '\n';
    }
}