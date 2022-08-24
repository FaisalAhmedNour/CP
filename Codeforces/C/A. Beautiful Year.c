
#include<stdio.h>

int main()
{
    int year, a, b, c, d, e;
    scanf("%d", &year);
    for(int i = year+1; ; i++)
    {
        a = i%10;

        e = i/10;
        b = e%10;

        e = e/10;
        c = e%10;

        e = e/10;
        d = e%10;

        if(a != b && a != c && a != d && b != c && b != d && c != d)
        {
            printf("%d", i);
            break;
        }
    }

    return 0;
}
