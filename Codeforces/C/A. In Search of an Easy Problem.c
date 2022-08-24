
#include<stdio.h>

int main()
{
    int n, i, p, hard = 0;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        scanf("%d", &p);
        if(p == 1)
        {
            hard++;
        }
    }
    if(hard > 0)
    {
        printf("HARD\n");
    }
    else
    {
        printf("EASY\n");
    }

    return 0;
}
