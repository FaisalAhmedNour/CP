#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, cnt = 0;
    set<int> st;
    cin >> t;
    while (t--)
    {
        char c;
        int n;
        cin >> c >> n;
        if (c == '+')
        {
            st.insert(n);
        }
        else
        {
            if (st.find(n) == st.end())
            {
                cnt++;
            }
            else
            {
                st.erase(n);
            }
        }
        int s = st.size();
        cnt = max(cnt, s);
    }
    cout << cnt;
}
