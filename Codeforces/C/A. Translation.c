
#include<stdio.h>

int main()
{
    char s[101], t[101];
    int i, j, n, count = 0;

    scanf("%s %s", &s, &t);

    n = strlen(s);

    for(i = 0, j = n-1; i < n; i++, j--)
    {
            if(s[i] == t[j])
            {
                count++;
            }
    }
    if(n == count)
    {
        printf("YES\n");
    }
    else

    {
        printf("NO\n");
    }

    return 0;
}

