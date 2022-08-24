
#include<stdio.h>

int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);
    int n = strlen(a);
    for(int i = 0; i < n; i++)
    {
        if(a[i] == b[i])
        {
            printf("0");
        }
        else
        {
            printf("1");
        }
    }

    return 0;
}
