
#include<bits/stdc++.h>
using namespace std;

int countWords(string list[], int n)
{
    //code here.
    map<string,int> count;
    for(int i = 0; i < n; i++)
    {
        count[list[i]]++;
    }
    int cnt = 0;
    for(auto v : count)
    {
        if(v.second == 2) cnt++;
    }
    return cnt;
}

int main()
{
    int N;
    cin >> N;
    string list[N];
    for(int i = 0; i < N; i++) cin >> list[i];
    cout << countWords(list, N);
}
