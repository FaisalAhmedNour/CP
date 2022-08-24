
#include<iostream>
using namespace std;
int main()
{
    int n,i,x=0;
    char p[4];
    cin>> n;
    for(i=0; i<n ; i++)
    {
        cin>> p;
        if( p[0] == 'X' && p[1]=='+' && p[2]=='+' )
        {
            x++;
        }
        else if (p[0] == 'X' && p[1]==' -' && p[2]=='-')
        {
            x--;
        }
        else if (p[0] == '-' && p[1]== '-' && p[2]=='X')
        {
            --x;
        }
        else
        {
            ++x;
        }
    }


    cout<< x;


    return 0;
}
