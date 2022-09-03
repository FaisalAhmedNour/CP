#include<bits/stdc++.h>
using namespace std;
const int N = 10e6+10;
int n;
long long int m;
long long int trees[N];

bool issuffisiant(long long int x)
{
    long long int sum = 0;
    for(int i = 0; i < n; i++)
    {
        if(trees[i] >= x)
            sum += trees[i] - x;
    }
    return sum >= m;
    //if(sum >= m) return 1;
    //else return 0;
}

int main()
{
    cin >> n >> m;
    for(int i = 0; i < n; i++)
        cin >> trees[i];
    long long int st = 0, ed = 1e9, mid;
    while(ed - st > 1)
    {
        mid = st + (ed - st) / 2;
        if(issuffisiant(mid))
            st = mid;
        else ed = mid - 1;
    }
    if(issuffisiant(ed))
        cout << ed << "\n";
    else cout << st << "\n";
}
