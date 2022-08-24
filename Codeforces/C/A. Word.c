
#include<stdio.h>

int main()
{
    char c[100];
    int i, n, lower = 0, upper = 0;

    scanf("%s", &c);

    n = strlen(c);

    for(i = 0; i < n; i++)
    {
        if(c[i] >= 'a' && c[i] <= 'z')
        {
            lower++;
        }
        if(c[i] >= 'A' && c[i] <= 'Z')
        {
            upper++;
        }
    }
    if(upper > lower)
    {
        strupr(c);
    }
    else
    {
        strlwr(c);
    }

    printf("%s\n", c);

    return 0;
}
