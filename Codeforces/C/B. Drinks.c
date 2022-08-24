#include<stdio.h>

int main()
{
    int i,n, drink;
    double ans = 0.0, sum =0.0;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        scanf("%d", &drink);
        sum = sum + drink;
    }
    ans = sum/n;
    printf("%.12lf\n", ans);

    return 0;
}
