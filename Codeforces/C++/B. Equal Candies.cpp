

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int box, sum = 0;
        cin >> box;
        int candies[box];
        for(int i = 0; i < box; cin >> candies[i], i++);
        sort(candies,candies+box);
        for(int i = 1; i < box; i++)
        {
            sum = sum + (candies[i]-candies[0]);
        }
        cout << sum << endl;
    }
}
