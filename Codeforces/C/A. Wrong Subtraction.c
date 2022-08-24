
#include<stdio.h>

int main()
{
    int num, time, i;

    scanf("%d %d", &num, &time);

    for(i = 1; i <= time; i++)
    {
        if(num%10 == 0)
        {
            num = num / 10;
        }
        else
        {
            num = num - 1;
        }
    }
    printf("%d\n", num);

    return 0;
}
