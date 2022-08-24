
#include<iostream>
#include<string>
#include<map>

using namespace std;

int main()
{
    int num;
    cin >> num;
    map<string,int>reg;
    string name;
    while(num--)
    {
        cin >> name;
        if(reg[name] == 0)
        {
            cout << "OK\n";
            reg[name] = 1;
        }
        else
        {
            cout << name << reg[name] << endl;
            reg[name]++;
        }
    }
}











/*
#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    int num, i, j, count;
    cin >> num;
    char name[num][32];
    for(i = 0; i < num; i++)
    {
        cin >> name[i];

        count = 0;
        j = 0;
        while(j < i)
        {
            if(strcmp(name[i],name[j]) == 0)
            {
                count++;
            }
            j++;
        }
        count == 0 ? cout << "OK" : cout << name[i] << count;

        cout << endl;
    }
}
*/
