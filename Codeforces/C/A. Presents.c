
#include<stdio.h>

int main()
{
    int friends, i, j;
    scanf("%d", &friends);
    int gifts[friends];
    for(i = 0; i < friends; i++)
    {
        scanf("%d", &gifts[i]);
    }
    for(j = 1; j <= friends; j++)
    {
        for(i = 0; i < friends; i++)
        {
            if(j == gifts[i])
            {
                printf("%d ", i+1);
            }
        }
    }

    return 0;
}
