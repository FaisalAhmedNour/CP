
#include<iostream>
using namespace std;

int main()
{
    int s[4], need = 0, i = 0, j, temp;
    while(i < 4)
    {
        cin >> s[i];
        i++;
    }
    for(i = 0; i < 3; i++)
    {
        for(j = i+1; j < 4; j++)
        {
            if(s[i] > s[j])
            {
                swap(s[i],s[j]);
            }
        }
    }
    for(i = 0; i < 4; i++)
    {
        cout << s[i];
    }
    for(i = 0; i < 3; i++)
    {
        if(s[i] == s[i+1])
        {
            need++;
        }
    }
    cout << endl << need;

    return 0;
}
