
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> prgmr, math, phe;
    int students, h = 1;
    cin >> students;
    while(students--)
    {
        int n;
        cin >> n;
        if(n == 1)
        {
            prgmr.push_back(h);
            h++;
        }
        else if(n == 2)
        {
            math.push_back(h);
            h++;
        }
        else
        {
            phe.push_back(h);
            h++;
        }
    }
    int teams = min({prgmr.size(), math.size(), phe.size()});
    cout << teams << endl;
    for(int i = 0; i < teams; ++i)
        cout << prgmr[i] << " " << math[i] << " " << phe[i] << endl;
}
