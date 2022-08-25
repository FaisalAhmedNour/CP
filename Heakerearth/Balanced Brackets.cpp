
#include<bits/stdc++.h>

using namespace std;

unordered_map<char,int> symbles = {{'(',-1},{'{',-2},{'[',-3},{')',1},{'}',2},{']',3}};

string Balanced(string s)
{
    stack<char> st;
    for(char bracket : s)
    {
        if(symbles[bracket] < 0)
            st.push(bracket);
        else{
            if(st.empty()) return "NO";
                char top = st.top();
                st.pop();
                if(symbles[top] + symbles[bracket] != 0)
                    return "NO";
        }
    }
    if(st.empty()) return "YES";
    return "NO";
}

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        string str;
        cin >> str;
        cout << Balanced(str) << endl;
    }
}
