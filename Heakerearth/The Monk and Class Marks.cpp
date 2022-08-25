

#include<bits/stdc++.h>
using namespace std;

void out(int n, multiset<string> str)
{
    for(auto v : str)
    {
        cout << v << " " << n << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    map<int,multiset<string>> marks;
    while(t--)
    {
        int x;
        string name;
        cin >> name >> x;
        marks[x].insert(name);
    }
    for(auto rit = marks.rbegin(); rit != marks.rend(); rit++)
    {
        out(rit->first, rit->second);
    }
}


/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    map<int,multiset<string> > result;
    while(T--)
    {
        string name;
        int mark;
        cin >> name >> mark;
        result[mark].insert(name);
    }
    auto last_it = --result.end();
    while(true)
    {
        auto &stdnt = (*last_it).second;
        int marks = (*last_it).first;
        for(auto value : stdnt)
        {
            cout << value << " " << marks << endl;
        }
        if(last_it == result.begin()) break;
        last_it--;
    }
}
*/
