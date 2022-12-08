
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int cnt = 1, i = 1, mx_cnt = 0;
    while (s[i] != '\0')
    {
        if (s[i] == s[i - 1])
        {
            cnt++;
        }
        else
        {
            mx_cnt = max(mx_cnt, cnt);
            cnt = 1;
        }
        i++;
    }
    mx_cnt = max(mx_cnt, cnt);
    cout << mx_cnt << endl;
}