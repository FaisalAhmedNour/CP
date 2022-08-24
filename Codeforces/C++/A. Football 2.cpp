
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<string> teams;
    map<string,int> goals;
    for(int i = 0; i < t; i++)
    {
        string st;
        cin >> st;
        if(find(teams.begin(), teams.end(), st) == teams.end())
            teams.push_back(st);
        goals[st]++;
    }
    if(teams.size() == 1) cout << teams[0];
    else cout << (goals[teams[0]] > goals[teams[1]] ? teams[0] : teams[1]);
}
