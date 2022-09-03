
#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i = 0; i < s.size() || i < t.size(); i++)
        {
            if(s[i] != t[i]) return false;
        }
        return true;
    }
int main()
{
    string s, t;
    cin >> s >> t;
    int x = isAnagram(s, t);
    cout << (x == 1 ? "true" : "false");
}
