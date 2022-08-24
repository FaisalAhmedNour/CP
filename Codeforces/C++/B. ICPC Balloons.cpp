
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, count = 0;
        cin >> n;
        string prblm;
        cin >> prblm;
        unordered_set<int> cnt;
        for(int i = 0; i < n; i++)
        {
            if(cnt.find(prblm[i]) == cnt.end())
            {
                count += 2;
                cnt.insert(prblm[i]);
            }
            else count++;
        }
        cout << count << endl;
    }
}
