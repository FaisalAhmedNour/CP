
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
        int n = str.size();
        int i = 0, count = 0;
        while(str[i] != '\0')
        {
            unordered_set<char> cunt;
            while(cunt.size() <= 3 && str[i] != '\0')
            {
                cunt.insert(str[i]);
                i++;
            }
            count++;
            if(cunt.size() > 3) i--;
            //for(auto v : cunt) cout << v << " ";
            //cout << endl;
        }
        cout << count << endl;
    }
}
