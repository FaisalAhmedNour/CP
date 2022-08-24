
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int puzzles[m];
    for(int i= 0; i < m; i++)
    {
        cin >> puzzles[i];
    }
    sort(puzzles,puzzles+m);
    int min = puzzles[n-1] - puzzles[0];
    for(int i = 1; i <= m-n; i++)
    {
        if(puzzles[i+n-1] - puzzles[i] < min)
        {
            min = puzzles[i+n-1] - puzzles[i];
        }
    }
    cout << min;

    return 0;
}
