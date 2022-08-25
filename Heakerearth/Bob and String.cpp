
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        string a1, a2;
        cin >> a1 >> a2;
        unordered_map<char,int> b1, b2;
        set<char> ab;
        sort(a1.begin(),a1.end());
        sort(a2.begin(),a2.end());
        for(int i = 0; i < a1.size(); ++i)
        {
            b1[a1[i]]++;
            ab.insert(a1[i]);
        }
        for(int i = 0; i < a2.size(); ++i)
        {
            b2[a2[i]]++;
            ab.insert(a2[i]);
        }
        int sum = 0;
        for(auto v : ab)
        {
            sum += abs(b1[v] - b2[v]);
        }
        cout << sum << endl;
    }
}
