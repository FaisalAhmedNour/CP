
#include<iostream>

using namespace std;

int main()
{
    int match;cin >> match;
    int team1[match], team2[match];
    for(int i = 0; i < match; cin >> team1[i] >> team2[i], i++);

    int count1 = 0, count2 = 0, same = 0;
    for(int j = 1; j <= 100; j++)
    {
        for(int i = 0; i < match; i++)
        {
            if(team1[i] == j)
            {
                count1++;
            }
            if(team2[i] == j)
            {
                count2++;
            }
        }
        same = same + (count1 * count2);
        count1 = 0;
        count2 = 0;
    }
    cout << same;

    return 0;
}
