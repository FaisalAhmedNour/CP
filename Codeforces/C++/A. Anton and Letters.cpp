
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string letter;
    getline(cin, letter);
    int count = 0, count2 = 0;
    for(char i = 'a'; i <= 'z'; i++)
    {
        for(int j = 0; j < letter.length(); j++)
        {
            if(letter[j] == i)
            {
                count++;
            }
        }
        if(count != 0)
        {
            count2++;
        }
        count = 0;
    }
    cout << count2;

    return 0;
}
