
#include<bits/stdc++.h>
using namespace std;

vector<string> valid;

void generatePare(string &s, int start, int ende)
{
    if(start == 0 && ende == 0)
    {
        valid.push_back(s);
        return;
    }
    if(start > 0)
    {
        s.push_back('(');
        generatePare(s, start-1, ende);
        s.pop_back();
    }
    if(ende > start)
    {
        s.push_back(')');
        generatePare(s, start, ende-1);
        s.pop_back();
    }
}

void generateParenthesis(int n)
{
    string s;
    generatePare(s, n, n);
    for(auto it : valid)
    {
        cout << it << "\n";
    }
    return;
}

int main()
{
    int n;
    cin >> n;
    generateParenthesis(n);
}
