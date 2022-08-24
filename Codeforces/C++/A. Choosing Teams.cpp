
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int studends, partisipation_time, count = 0;
    cin >> studends >> partisipation_time;
    while(studends--)
    {
        int n;
        cin >> n;
        if(5 - n >= partisipation_time)
        {
            count++;
        }
    }
    cout << count/3;
}

