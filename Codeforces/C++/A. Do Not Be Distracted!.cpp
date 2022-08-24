
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int n, f = 0, g = 1;
        cin >> n;
        string task;
        vector<char> retask;
        cin >> task;
        if(f == 0) retask.push_back(task[0]);
        for(int i = 0; i < n-1; i++)
        {
            if(task[i] != task[i+1])
            {
                retask.push_back(task[i+1]);
            }
        }

        for(int i = 0; i < retask.size()-1 && g == 1; i++)
        {
            for(int j = i+1; j < retask.size(); j++)
            {
                if(retask[i] == retask[j])
                {
                    cout << "NO\n";
                    g = 0;
                    break;
                }
            }
        }
        if(g) cout << "YES\n";
    }
}
