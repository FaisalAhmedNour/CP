
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        unordered_map<string,bool> str;
        string s[n];
        for(int i = 0; i < n; i++)
        {
            cin >> s[i];
            str[s[i]] = true;
        }
        for(int i = 0; i < n; i++)
        {
            bool ok = false;
            for(int j = 1; j < s[i].size(); j++)
            {
                string pre = s[i].substr(0,j), suff = s[i].substr(j,s[i].size()-j);
                if(str[pre] && str[suff])
                {
                    ok = true;
                }
            }
            cout << ok;
        }
        cout << endl;
    }
}







































/*
//------------------------------
#include <bits/stdc++.h>

using namespace std;
int t,n;

int main ()
{
    cin>>t;
    while (t--)
    {
        cin>>n;
        map<string,bool> mp;
        string s[n];
        for (int i=0; i<n; i++)
        {
            cin>>s[i];
            mp[s[i]]=true;
        }

        for (int i=0; i<n; i++)
        {
            bool ok=false;
            for (int j=1; j<s[i].length(); j++)
            {
                string pre=s[i].substr(0,j),suff=s[i].substr(j,s[i].length()-j);
                if (mp[pre]&&mp[suff])
                {
                    ok=true;
                }
            }
            cout<<ok;
        }
        cout<<endl;
    }
}
*/
