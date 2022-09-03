
#include<stdio.h>

int main()
{
    int num;

    scanf("%d", &num);

    if(num >= 0 && num < 200000000)
    {
        if(num < 1000)
        {
            printf("%d", num);
        }
        else if(num < 1000000)
        {
            printf("%d,%d", num/1000, num%1000);
        }
        else
        {
            printf("%d,%d,%d", num/1000000, (num%1000000)/1000, (num%1000000)%1000);
        }
    }

    return 0;
}
