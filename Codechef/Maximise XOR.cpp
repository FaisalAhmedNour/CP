#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int f1 = 0, f2 = 0, s = s1.size(), one;
        for (int i = 0; i < s; i++)
        {
            if (s1[i] == '1')
            {
                f1++;
            }
            if (s2[i] == '1')
            {
                f2++;
            }
        }
        if (f1 + f2 < s)
        {
            one = f1 + f2;
        }
        else if (f1 + f2 == (2 * s))
        {
            one = 0;
        }
        else
        {
            one = s - ((f1 + f2) % s);
        }
        for (int i = 1; i <= one; i++)
        {
            cout << '1';
        }
        for (int i = 1; i <= s - one; i++)
        {
            cout << '0';
        }
        cout << endl;
    }
    return 0;
}
