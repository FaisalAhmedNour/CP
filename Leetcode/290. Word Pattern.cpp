
#include<bits/stdc++.h>
using namespace std;

bool wordPattern(string pattern, string s)
{
    unordered_map<char,string> sx;
    int c = 0;
    for(int j = 0, k = 0; j < s.size(); j++)
    {
        string x;
        while(s[j] != '\0')
        {
            if(!(s[j] >= 'a' && s[j] <= 'z')) break;
            x.push_back(s[j]);
            j++;
        }
        if(!x.empty()) c++;
        //cout << x << endl;
        //auto it = sx.find(pattern[k]);
        //cout << (sx.find(pattern[k])) << endl;

        if(sx.find(pattern[k]) == sx.end())
        {
            for(int i = 0; i < k; i++)
            {
                if(sx[pattern[i]] == x) return 0;
            }
            sx[pattern[k]] = x;
            k++;
        }
        else
        {
            if(sx[pattern[k]] != x) return 0;
            k++;
        }
        //it++;
    }
    if(c == pattern.size()) return 1;
    return 0;
}

int main()
{
    string pattern = "abba", s = "dog cat cat dog";
    //cin >> pattern >> s;
    if(wordPattern(pattern, s)) cout << "true";
    else cout << "false";
}
