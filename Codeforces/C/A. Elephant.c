
#include<stdio.h>

int main()
{
    int s;

    scanf("%d", &s);

    if(s % 5 == 0)
    {
        printf("%d", s / 5);
    }
    else
    {
        printf("%d", s / 5 + 1);
    }

    return 0;
}
