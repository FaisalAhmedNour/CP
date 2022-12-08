#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n;
    scanf("%lld", &n);
    int cnt = 0;

    for (int i = 5; n / i >= 1; i *= 5)
    {
        cnt += n / i;
    }
    cout << cnt;
}
/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n;
    scanf("%lld", &n);
    int cnt_two = 0, cnt_five = 0;
    for (int j = 2; j <= n; j++)
    {
        if (j % 2 == 0 || j % 5 == 0)
        {
            int i = j;
            while (i % 2 == 0)
            {
                cnt_two++;
                i /= 2;
            }
            while (i % 5 == 0)
            {
                cnt_five++;
                i /= 5;
            }
        }
    }
    cout << min(cnt_five, cnt_two);
}
*/