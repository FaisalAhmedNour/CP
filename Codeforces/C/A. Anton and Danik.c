
#include<stdio.h>

int main()
{
    int n, i, Anton = 0, Danik = 0;

    scanf("%d", &n);
    char s[n+1];

    scanf("%s", &s);

    for(i = 0; i < n; i++)
    {
        if(s[i] == 'A')
        {
            Anton++;
        }
        else
        {
            Danik++;
        }
    }
    if(Anton > Danik)
    {
        printf("Anton");
    }
    else if(Anton < Danik)
    {
        printf("Danik");
    }
    else
    {
        printf("Friendship");
    }

    return 0;
}
