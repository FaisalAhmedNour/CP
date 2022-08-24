
#include<stdio.h>

int main()
{
    int lines, i, j, k;
    char dk[7];

    scanf("%d", &lines);

    for(i = 1; i <= lines; i++)
    {
        int yes = 0;

        scanf("%s", &dk);

        for(j = 0; j < 6; j++)
        {
            if(dk[j] == 'R')
            {
                for(k = j; k >= 0; k--)
                {
                    if(dk[k] == 'r')
                    {
                        yes++;
                    }
                }
            }
            if(dk[j] == 'G')
            {
                for(k = j; k >= 0; k--)
                {
                    if(dk[k] == 'g')
                    {
                        yes++;
                    }
                }
            }
            if(dk[j] == 'B')
            {
                for(k = j; k >= 0; k--)
                {
                    if(dk[k] == 'b')
                    {
                        yes++;
                    }
                }
            }
        }
        if(yes == 3)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    }


    return 0;
}
