
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int n, m, k, f = 0, s = 0, a = 0, b = 0;
        cin >> n >> m >> k;
        string ft, sd;
        cin >> ft >> sd;
        sort(ft.begin(),ft.end());
        sort(sd.begin(),sd.end());
        vector<char> c;
        int i = 0, j = 0;
        for(int g = 1; a < n && b < m; g++)
        {
            if(ft[i] < sd[j])
            {
                if(f < k)
                {
                    c.push_back(ft[i]);
                    i++;
                    f++;
                    a++;
                    s = 0;
                }
                else
                {
                    c.push_back(sd[j]);
                    j++;
                    s++;
                    b++;
                    f = 0;
                }
            }
            else
            {
                if(s < k)
                {
                    c.push_back(sd[j]);
                    j++;
                    s++;
                    b++;
                    f = 0;
                }
                else
                {
                    c.push_back(ft[i]);
                    i++;
                    f++;
                    a++;
                    s = 0;
                }
            }
        }
        for(auto v : c)
        {
            cout << v;
        }
        cout << "\n";
    }
}
