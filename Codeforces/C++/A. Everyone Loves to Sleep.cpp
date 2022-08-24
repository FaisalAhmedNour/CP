
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, H, M;
        cin >> n >> H >> M;
        set<pair<int, int>> pre, post;
        pair<int, int> temp;
        for(int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            if(a == H)
            {
                if(b >= M)
                    post.insert({a,b});
                else
                    pre.insert({a,b});
            }
            else if(a > H)
                post.insert({a,b});
            else
                pre.insert({a,b});
        }
        if(post.empty())
        {
            temp = *pre.begin();
            int y = temp.second;
            int x = temp.first;
            x += 24;
            if(y < M)
            {
                y += 60;
                x--;
            }
            cout << x - H << " "
                 << y - M << "\n";
        }
        else
        {
            temp = *post.begin();
            int y = temp.second;
            int x = temp.first;
            if(y < M)
            {
                y += 60;
                x--;
            }
            cout << x - H << " "
                 << y - M << "\n";
        }
    }
}
