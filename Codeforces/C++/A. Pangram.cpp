
#include<iostream>
#include<cstring>


using namespace std;

int main()
{
    int letter;
    cin >> letter;
    char word[letter];
    cin >> word;
    strlwr(word);
    int count1 = 0, count2 = 0;
    for(char ch = 'a'; ch <= 'z'; ch++)
    {
        for(int i = 0; i < letter; i++)
        {
            if(ch == word[i])
            {
                count1++;
            }
        }
        if(count1 > 0)
        {
            count2++;
        }
        count1 = 0;
    }
    if(count2 == 26)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
