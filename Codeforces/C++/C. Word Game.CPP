#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, first = 0, second = 0, third = 0;
        cin >> n;
        map<string,int> row;
        vector<string> r1, r2, r3;
        for(int i = 0; i < n; i++) 
        {
            string str;
            cin >> str;
            r1.push_back(str);
            row[str]++;
        }
        for(int i = 0; i < n; i++) 
        {
            string str;
            cin >> str;
            r2.push_back(str);
            row[str]++;
        }
        for(int i = 0; i < n; i++) 
        {
            string str;
            cin >> str;
            r3.push_back(str);
            row[str]++;
        }
        for(int i = 0; i < n; i++) 
        {
            if(row[r1[i]] == 1)
                first += 3;
            if(row[r1[i]] == 2)
                first += 1;
            else first += 0;
        }
        for(int i = 0; i < n; i++) 
        {
            if(row[r2[i]] == 1)
                second += 3;
            if(row[r2[i]] == 2)
                second += 1;
            else second += 0;
        }
        for(int i = 0; i < n; i++) 
        {
            if(row[r3[i]] == 1)
                third += 3;
            if(row[r3[i]] == 2)
                third += 1;
            else third += 0;
        }
        cout << first << " " << second << " " << third << "\n";
    }
}
