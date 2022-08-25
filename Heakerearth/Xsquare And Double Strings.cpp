
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        unordered_map<char,int> pr;
        string w;
        cin >> w;
        for(int i = 0; i < w.size(); i++)
        {
            pr[w[i]]++;
        }
        int f = 0;
        for(auto v : pr)
        {
            if(v.second >= 2)
            {
                f = 1;
            }
        }
        cout << (f == 1 ? "Yes\n" : "No\n");
    }
}
