
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string song, lirec;
    cin >> song;

    int i = 0;
    while(song[i] != '\0')
    {
        if(song[i] == 'W' && song[i+1] == 'U' && song[i+2] == 'B')
        {
            if(i != 0)
            {
                lirec+=" ";
            }
            i=i+2;
        }
        else
        {
            lirec+=song[i];
        }
        i++;
    }

    cout << lirec;

    return 0;
}
