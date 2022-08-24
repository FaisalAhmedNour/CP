
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int task, letter, num, dif = 10000;
        cin >> task >> letter;
        char word[task][letter];
        for(int i = 0; i < task; cin >> word[i], i++);
        for(int i = 0; i < task-1; i++)
        {
            for(int j = i+1; j < task; j++)
            {
                num = 0;
                for(int k = 0; k < letter; k++)
                {
                    if(word[i][k] > word[j][k])
                        num = num + word[i][k] - word[j][k];
                    else
                        num = num + word[j][k] - word[i][k];
                }
                dif = min(num,dif);
            }
        }
        cout << dif << endl;
    }
}
