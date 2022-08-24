
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str, temp = "hello";
    cin >> str;
    int f = 0;
    for(int i = 0, j = 0; i < str.size(); i++)
    {
        if(str[i] == temp[j])
        {
            if(temp[j] == 'o')
            {
                f = 1;
                break;
            }
            else j++;
        }
    }
    if(f) cout << "YES";
    else cout << "NO";
}
