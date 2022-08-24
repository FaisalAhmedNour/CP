
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int event, man, crime = 0, count = 0;
    cin >> event;
    while(event--)
    {
        cin >> man;
        count += man;
        if(count < 0)
        {
            crime++;
            count = 0;
        }
    }
    cout << crime;
}
