
#include<stdio.h>
#include<string.h>

int main()
{
    char c[101];
    char K;
    int j, count = 0, n, i, letter = 0;

    scanf("%s", &c);

    n = strlen(c);

    for(j = 'a'; j <= 'z'; j++)
    {
        for(i = 0; i < n; i++)
        {
            if(c[i] == j)
            {
                count++;
            }
        }
        if(count > 0)
        {
            letter++;
        }
        count = 0;
    }

    if(letter%2 == 0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }

    return 0;
}
