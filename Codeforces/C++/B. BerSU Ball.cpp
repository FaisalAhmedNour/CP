
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, cnt = 0;
    vector<int> boy, girl;

    cin >> a;
    for(int i = 0; i < a; i++)
    {
        int x;
        cin >> x;
        boy.push_back(x);
    }
    sort(boy.begin(), boy.end());

    cin >> b;
    for(int i = 0; i < b; i++)
    {
        int x;
        cin >> x;
        girl.push_back(x);
    }
    sort(girl.begin(), girl.end());

    for(int i = 0, j = 0; i < a && j < b; )
    {
        if(boy[i] == girl[j] || boy[i]+1 == girl[j] || boy[i] == girl[j]+1)
        {
            cnt++;
            i++;
            j++;
        }
        else if(boy[i] > girl[j])
            j++;
        else if(boy[i] < girl[j])
            i++;
    }
    cout << cnt;
}
