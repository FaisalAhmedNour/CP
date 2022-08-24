
#include<stdio.h>

int main()
{
    int k;

    scanf("%d", &k);

    if(k == 2)
    {
        printf("NO");
    }
    else if(k % 2 == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
