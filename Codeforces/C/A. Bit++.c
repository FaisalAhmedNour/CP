#include<stdio.h>

int main()
{
    int x = 0, n, i;
    scanf("%d", &n);
    char c[4];

    for(i = 1; i <= n; i++)
    {
        scanf("%s", &c);

        if(c[0] == 'X' && c[1] == '+' && c[2] == '+')
        {
            x++;
        }
        else if(c[0] == '+' && c[1] == '+' && c[2] == 'X')
        {
            ++x;
        }
        else if(c[0] == 'X' && c[1] == '-' && c[2] == '-')
        {
            x--;
        }
        else
        {
            --x;
        }
    }

    printf("%d", x);

    return 0;
}
