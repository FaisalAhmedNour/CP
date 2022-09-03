#include<bits/stdc++.h>
using namespace std;

int main()
{
    int guards, activitys, f = 0;
    cin >> guards >> activitys;
    if(guards < 4) f = 1;
    for(int i = 0; i < activitys; i++)
    {
        string t;
        cin >> t; 
        if(t == "out")
            guards--;
        else guards++;
        if(guards < 4) f = 1;
    }
    if(f) cout << "YES\n";
    else cout << "NO\n";
}