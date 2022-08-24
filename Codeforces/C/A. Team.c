
#include<stdio.h>

int main()
{
    int i, l, n, m, x, Y = 0;

    scanf("%d", &x);

    for(i = 1; i <= x; i++)
    {
        scanf("%d %d %d", &l, &m, &n);
        if(l+n+m > 1)
        {
            Y++;
        }
    }

    printf("%d\n", Y);

    return 0;
}
