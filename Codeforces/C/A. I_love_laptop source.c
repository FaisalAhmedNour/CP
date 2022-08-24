
#include<stdio.h>

int main()
{
    int n, i, mark1, marks, upper, lower, amazing = 0;

    scanf("%d", &n);

    scanf("%d", &mark1);
    upper = mark1;
    lower = mark1;
    for(i = 1; i < n; i++)
    {
        scanf("%d", &marks);
        if(marks > upper)
        {
            amazing++;
            upper = marks;
        }
        if(marks < lower)
        {
            amazing++;
            lower = marks;
        }
    }
    printf("%d\n", amazing);

    return 0;
}
