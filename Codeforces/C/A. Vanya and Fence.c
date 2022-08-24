
#include<stdio.h>

int main()
{
    int person, hight, i, n, width = 0;
    scanf("%d %d", &person, &hight);
    for(i = 1; i <= person; i++)
    {
        scanf("%d", &n);
        if(n%hight == 0)
        {
            width = width + (n/hight);
        }
        else
        {
            width = width + (n/hight) + 1;
        }
    }
    printf("%d\n", width);

    return 0;
}
