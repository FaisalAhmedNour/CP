
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, x = 1;
    cin >> n >> m;
    long long int task[m];
    long long int count = 0;
    for(int i = 0; i < m; i++)
    {
        cin >> task[i];
        if(task[i] > x)
        {
            count += task[i]-x;
            x = task[i];
        }
        else if(task[i] == x)
        {
            count += 0;
        }
        else
        {
            count += n-x + task[i];
            x = task[i];
        }
    }
   cout << count;
}
