#include <bits/stdc++.h>
using namespace std;

int main()
{
    char d;
    string sentence;
    cin >> d >> sentence;
    string a = "qwertyuiop", b = "asdfghjkl;", c = "zxcvbnm,./";
    for (int i = 0; i < sentence.size(); i++)
    {
        for (int j = 0; j < a.size(); j++)
        {
            if (sentence[i] == a[j])
            {
                if (d == 'R')
                {
                    cout << a[j - 1];
                }
                else
                {
                    cout << a[j + 1];
                }
            }
        }
        for (int j = 0; j < b.size(); j++)
        {
            if (sentence[i] == b[j])
            {
                if (d == 'R')
                {
                    cout << b[j - 1];
                }
                else
                {
                    cout << b[j + 1];
                }
            }
        }
        for (int j = 0; j < c.size(); j++)
        {
            if (sentence[i] == c[j])
            {
                if (d == 'R')
                {
                    cout << c[j - 1];
                }
                else
                {
                    cout << c[j + 1];
                }
            }
        }
    }
}
